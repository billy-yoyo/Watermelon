package src.compiler.commands.value;
import src.ast.Token;
import src.ast.base.BracketToken;
import src.ast.base.CommaToken;
import src.ast.base.VariableToken;
import src.ast.maths.MathsOperatorToken;
import src.ast.script.AssignmentToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.bytecode.BytecodeMap;
import src.compiler.commands.Command;
import src.compiler.commands.value.FunctionCallValueCommand.Argument;
import src.compiler.commands.value.ValueCommand;
import src.compiler.object.Object;
import src.compiler.object.builtin.MapObject;
import src.compiler.object.builtin.TupleObject;
import src.compiler.object.builtin.PairObject; 
import src.compiler.signals.InvalidArgumentSignal;
import src.compiler.signals.IteratorExitSignal;
import src.compiler.signals.SyntaxErrorSignal;

/**
 * ...
 * @author Billyoyo
 */
class FunctionCallValueCommand extends ValueCommand
{
    
    public static function getArgumentFromBytes():Scope-> Array<Bytecode>->Command
    {
        return Argument.fromBytecode;
    }
    
    public static function fromTokens(scope:Scope, varTokens:Array<Token>, bracketToken:Token):FunctionCallValueCommand
    {
        var name:VariableAccess = VariableAccess.fromTokens(scope, varTokens);
        var spl:Array<Array<Token>> = Command.splitTokens(bracketToken.getContent(), "CommaToken");
        
        var args:Array<Argument> = new Array<Argument>();
        var kwdArgs:Map<String, Argument> = new Map<String, Argument>();
        var kwdAmount:Int = 0;
        
        var kwdSpl:Array<Array<Token>>; var collector:Bool;
        for (tokens in spl) {
            
            if (tokens.length == 0) {
                if (spl.length > 1) throw new SyntaxErrorSignal("Empty argument");
            } else {
                if (Command.contains(tokens, "AssignmentToken")) { // kwd arg
                    collector = tokens[0].getName() == "MathsOperatorToken" && tokens[0].getContent() == "**";
                    if (collector) tokens.shift();
                    kwdSpl = Command.splitTokens(tokens, "AssignmentToken");
                    if (kwdSpl.length == 1) throw new SyntaxErrorSignal("Bad assignment split");
                    else if (kwdSpl.length > 2) throw new SyntaxErrorSignal("Too many assignments for the same keyword");
                    else if (kwdSpl[0].length != 1 || kwdSpl[0][0].getName() != "VariableToken") throw new SyntaxErrorSignal('Invalid keyword ${kwdSpl[0]}');
                    else {
                        kwdArgs.set(cast(kwdSpl[0][0].getContent(), String), new Argument(ValueCommand.fromTokens(scope, kwdSpl[1]), collector));
                        kwdAmount++;
                    }
                } else {
                    collector = tokens[0].getName() == "MathsOperatorToken" && tokens[0].getContent() == "*";
                    if (collector) tokens.shift();
                    args.push(new Argument(ValueCommand.fromTokens(scope, tokens), collector));
                }
            }
        }
        return new FunctionCallValueCommand(scope, name, args, kwdArgs);
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):FunctionCallValueCommand
    {
        return new FunctionCallValueCommand(scope, arr.shift().convert(scope), arr.shift().convert(scope), arr.shift().convert(scope));
    }
    
    private var func:VariableAccess;
    private var args:Array<Argument>;
    private var kwdArgs:Map<String, Argument>;
    override public function new(scope:Scope, func:VariableAccess, args:Array<Argument>, kwdArgs:Map<String, Argument>) 
    {
        super(scope);
        this.func = func;
        this.args = args;
        this.kwdArgs = kwdArgs;
        if (this.kwdArgs == null) this.kwdArgs = new Map<String, Argument>();
    }
    
    override public function copy(scope:Scope):Command 
    {
        var newArgs:Array<Argument> = new Array<Argument>();
        var newKwdArgs:Map<String, Argument> = new Map<String, Argument>();
        for (arg in args) newArgs.push(cast(arg.copy(scope), Argument));
        for (kwd in kwdArgs.keys()) newKwdArgs.set(kwd, cast(kwdArgs.get(kwd).copy(scope), Argument));
        return new FunctionCallValueCommand(scope, cast(func.copy(scope), VariableAccess), newArgs, newKwdArgs);
    }
    
    override public function setScope(scope:Scope) 
    {
        super.setScope(scope);
        func.setScope(scope);
        for (arg in args) arg.setScope(scope);
        for (arg in kwdArgs) arg.setScope(scope);
    }
    
    override public function walk():Array<Command> 
    {
        var cmds:Array<Command> = new Array<Command>();
        for (arg in kwdArgs) cmds.push(arg);
        for (arg in args) cmds.push(arg);
        cmds.push(func);
        return cmds;
    }
    
    override public function run():Object 
    {
        var args:Array<Object> = new Array<Object>();
        var iter:Object;
        for (arg in this.args) {
            if (arg.collapsed) {
                iter = arg.value.run();
                //trace('got $iter from ${arg.value}');
                if (iter.hasMember("__next__") && iter.hasMember("__hasnext__")) {
                } else if (iter.isInstance("TupleType") || iter.isInstance("ListType") || iter.hasMember("__iter__")) {
                    iter = iter.iter();
                } else {
                    throw new InvalidArgumentSignal("Cannot collapse a non-iterable");
                }
                
                var obj:Object;
                while (iter.hasNext().rawBool()) {
                    obj = iter.next();
                    args.push(obj);
                }
            } else {
                args.push(arg.value.run());
            }
        }
        var arg:Argument; var map:Object;
        for (key in this.kwdArgs.keys()) {
            arg = this.kwdArgs.get(key);
            if (arg.collapsed) {
                map = arg.value.run();
                if (!map.hasMember("__get__")) throw new InvalidArgumentSignal("Cannot collapse a non-map");
                iter = map;
                if (iter.hasMember("__next__") && iter.hasMember("__hasnext__")) {
                } else if (iter.isInstance("MapType") || iter.hasMember("__iter__")) {
                    iter = iter.iter();
                } else {
                    throw new InvalidArgumentSignal("Cannot kwd-collapse a non-map or non-iterable");
                }
                var key:Object;
                while (iter.hasNext().rawBool()) {
                    key = iter.next();
                    args.push(scope.getType("PairType").createValue(PairObject.createPair(key.rawString(), map.get(key)), scope));
                }
            } else {
                args.push(scope.getType("PairType").createValue(PairObject.createPair(key, arg.value.run()), scope));
            }
        }
        var fobj:Object = func.getVariable();
        var result:Object = fobj.call(args);
        if (result != null) result.setScope(scope);
        return result;
    }
    
    override public function getName():String 
    {
        return "FunctionCallValueCommand";
    }
    
    override public function getFriendlyName():String 
    {
        if (func == null) return 'function call null';
        return 'function call ${func.getReconstructedString()}';
    }
    
    override public function getBytecode():Bytecode 
    {
        var containsValues:Bool = false;
        for (v in kwdArgs) {
            containsValues = true;
            break;
        }
        var map:Map<String, Argument> = null;
        if (containsValues) map = kwdArgs;
        return Bytecode.fromArray([func, args, map], getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        var argTokens:Array<Array<Token>> = new Array<Array<Token>>(); var tokens:Array<Token>;
        for (arg in args) {
            tokens = arg.value.reconstruct();
            if (arg.collapsed) tokens.insert(0, new MathsOperatorToken("*"));
            tokens.push(new CommaToken(","));
            argTokens.push(tokens);
        }
        var arg:Argument;
        for (key in kwdArgs.keys()) {
            arg = kwdArgs.get(key);
            tokens = arg.value.reconstruct();
            if (arg.collapsed) tokens.insert(0, new MathsOperatorToken("**"));
            tokens.insert(0, new VariableToken(key));
            tokens.insert(0, new AssignmentToken("="));
            tokens.push(new CommaToken(","));
            argTokens.push(tokens);
        }
        var final:Array<Token> = Token.merge(argTokens);
        if (final.length > 0 && final[final.length - 1].getName() == "CommaToken") final.pop();
        return Token.merge([func.reconstruct(), BracketToken.fromRaw(final)]);
    }
}

class Argument extends Command {
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):Argument
    {
        return new Argument(arr.shift().convert(scope), arr.shift().convert(scope));
    }
    
    public var value:ValueCommand;
    public var collapsed:Bool;
    override public function new(value:ValueCommand, collapsed:Bool)
    {
        super(null);
        this.value = value;
        this.collapsed = collapsed;
    }
    
    override public function copy(scope:Scope):Command 
    {
        return new Argument(cast(value.copy(scope), ValueCommand), collapsed);
    }
    
    override public function setScope(scope:Scope) 
    {
        //super.setScope(scope);
        //value.setScope(scope);
    }
    
    override public function walk():Array<Command> 
    {
        return [value];
    }
    
    override public function getBytecode():Bytecode
    {
        return Bytecode.fromArray([value, collapsed], getCodeID());
    }
    
    override public function getName():String 
    {
        return "Argument";
    }
    
    override public function getFriendlyName():String 
    {
        return "function call argument";
    }
}