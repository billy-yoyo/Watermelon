package src.compiler.commands.coroutine;
import src.ast.Token;
import src.ast.base.BracketToken;
import src.ast.base.CommaToken;
import src.ast.script.PipeReadToken;
import src.ast.script.PipeWriteToken;
import src.ast.base.VariableToken;
import src.ast.base.WildcardToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.commands.value.ValueCommand;
import src.compiler.object.Object;
import src.compiler.object.builtin.coroutine.CoroutineObject;
import src.compiler.signals.SyntaxErrorSignal;
import src.compiler.signals.ValueErrorSignal;
import src.compiler.signals.YieldSignal;

/**
 * ...
 * @author Billyoyo
 */
class PipeWriteCommand extends Command
{
    public static function fromTokens(scope:Scope, tokens:Array<Token>):PipeWriteCommand
    {
        if (tokens.length == 0 || tokens.pop().getName() != "EndLineToken") throw new SyntaxErrorSignal("Invalid pipe read command (must end in endline)");
        var isTimeLock:Bool = false;
        for (token in tokens) {
            if (token.getName() == "PipeWriteToken" && token.getContent() == "<!") {
                isTimeLock = true;
                break;
            }
        }
        var spl:Array<Array<Token>> = Command.splitTokens(tokens, "PipeWriteToken");
        if (spl.length == 1) throw new SyntaxErrorSignal("Invalid pipe write command");
        if (spl.length > 2) throw new SyntaxErrorSignal("Invalid pipe write command, only one write per line");
        var left:Array<Token> = spl[0];
        var right:Array<Token> = spl[1];
        
        var timeLock:ValueCommand = null;
        var target:ValueCommand = null;
        var wildcard:String = null;
        if (isTimeLock) {
            if (right.length == 0) throw new SyntaxErrorSignal("Time lock requires a value");
            timeLock = ValueCommand.fromToken(scope, right.shift());
        }
        
        if (left.length > 0 && left[0].getName() == "WildcardToken") {
            left.shift();
            if (left.length > 1 || (left.length == 1 && left[0].getName() != "VariableToken")) throw new SyntaxErrorSignal("Wildcard name must be a single variable");
            if (left.length == 1) wildcard = left[0].getContent();
            else wildcard = "";
        } else if (left.length > 0) {
            target = ValueCommand.fromTokens(scope, left);
        }
        
        var values:Array<ValueCommand> = new Array<ValueCommand>();
        if (right.length > 0) {
            values = ValueCommand.splitTokens(scope, right, "CommaToken");
        }
        //if (values.length == 0) throw new SyntaxErrorSignal("Cannot write nothing to a coroutine");
        return new PipeWriteCommand(scope, target, values, wildcard, timeLock);
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):PipeWriteCommand
    {
        return new PipeWriteCommand(scope, arr.shift().convert(scope), arr.shift().convert(scope), arr.shift().convert(scope), arr.shift().convert(scope));
    }

    public var target:ValueCommand;
    public var values:Array<ValueCommand>;
    public var wildcard:String;
    public var timeLock:ValueCommand;
    override public function new(scope:Scope, target:ValueCommand, values:Array<ValueCommand>, wildcard:String, timeLock:ValueCommand) 
    {
        super(scope);
        this.target = target;
        this.values = values;
        this.wildcard = wildcard;
        this.timeLock = timeLock;
    }
    
    override public function copy(scope:Scope):Command 
    {
        return new PipeWriteCommand(scope, if (target == null) null else cast(target.copy(scope), ValueCommand), ValueCommand.copyArray(scope, values), wildcard, if (timeLock == null) null else cast(timeLock.copy(scope), ValueCommand));
    }
    
    override public function setScope(scope:Scope) 
    {
        super.setScope(scope);
        if (target != null) target.setScope(scope);
        if (timeLock != null) timeLock.setScope(scope);
    }
    
    override public function getName():String 
    {
        return "PipeWriteCommand";
    }
    
    override public function getFriendlyName():String 
    {
        return "pipe write";
    }
    
    override public function run():Object 
    {
        var coro:CoroutineObject = this.getScope().coroutineObject;
        if (coro == null) throw new SyntaxErrorSignal("Pipe write command used outside of a coroutine");
        var stream:Array<Object> = new Array<Object>();
        for (value in values) {
            stream.push(value.run());
        }
        
        var target:CoroutineObject = null;
        if (this.target != null) {
            var rawTarget:Object = this.target.run();
            if (!rawTarget.isInstance("CoroutineType")) throw new ValueErrorSignal("Can only write to a coroutine");
            target = cast(rawTarget, CoroutineObject);
            if (wildcard != null && !target.isQueued()) target.queue();
        }
        
        if (timeLock == null) throw YieldSignal.writeYield(target, stream, wildcard);
        else throw YieldSignal.writeYield(target, stream, wildcard, timeLock.run().rawFloat());
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromArray([target, values, wildcard, timeLock], getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        var tokens:Array<Token> = new Array<Token>();
        if (timeLock == null) tokens.push(new PipeWriteToken("<:"));
        else {
            tokens.push(new PipeWriteToken("<!"));
            tokens.push(BracketToken.fromRaw(timeLock.reconstruct()));
        }
        
        if (target != null) {
            tokens = target.reconstruct().concat(tokens);
        } else if (wildcard != null) {
            if (wildcard != "") tokens = [new WildcardToken("?"), new VariableToken(wildcard)].concat(tokens)
            else tokens.insert(0, new WildcardToken("?"));
        } 
        var varTokens:Array<Token> = new Array<Token>();
        for (v in values) {
            varTokens = varTokens.concat(v.reconstruct());
            varTokens.push(new CommaToken(","));
        }
        if (varTokens.length > 1) varTokens.pop();
        return tokens.concat(varTokens);
    }
}