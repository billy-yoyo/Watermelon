package src.compiler.commands;
import src.ast.Token;
import src.ast.base.KwdToken;
import src.ast.base.VariableToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.signals.IteratorExitSignal;
import src.compiler.object.Object;
import src.compiler.commands.value.ValueCommand;

/**
 * ...
 * @author Billyoyo
 */
class IteratorCommand extends Command
{
    
    public static function fromTokens(scope:Scope, tokens:Array<Token>)
    {
        var spl:Array<Array<Token>> = Command.splitTokens(tokens, "KwdToken", "in");
        if (spl.length == 1) throw "No in keyword in iterator value";
        else if (spl.length > 2) throw "Double iterator";
        else {
            var lhs:Array<Token> = spl[0];
            var rhs:Array<Token> = spl[1];
            
            var vars:Array<String> = new Array<String>();
            var token:Token; var lastToken:Token = null;
            while (lhs.length > 0) {
                token = lhs.shift();
                if (token.getName() == "VariableToken" && (lastToken == null || lastToken.getName() == "CommaToken")) {
                    vars.push(token.getContent());
                } else if (!(token.getName() == "CommaToken" && lastToken.getName() == "VariableToken")) {
                    var expected:String = "VariableToken";
                    if (lastToken != null && lastToken.getName() == "VariableToken") expected = "CommaToken";
                    throw 'Expected a $expected, found a ${token.getName()}';
                }
            }
            
            return new IteratorCommand(scope, vars, ValueCommand.fromTokens(scope, rhs));
        }
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):IteratorCommand
    {
        return new IteratorCommand(scope, arr.shift().convert(scope).split("+"), arr.shift().convert(scope));
    }
    
    private var iterator:Object = null;
    private var vars:Array<String>;
    private var value:ValueCommand;
    override public function new(scope:Scope, vars:Array<String>, value:ValueCommand) 
    {
        super(scope);
        this.vars = vars;
        this.value = value;
    }
    
    override public function walk():Array<Command> 
    {
        return value.walk();
    }
    
    override public function run():Object 
    {
        if (iterator == null) iterator = value.run();
        if (!iterator.isInstance("IteratorType") && !iterator.hasMember("__next__")) iterator = iterator.iter();
        if (iterator.hasNext().rawBool()) {
            if (vars.length == 1) {
                scope.setVariable(vars[0], iterator.next());
            } else {
                var obj:Object = iterator.next();
                for (i in 0...vars.length) {
                    scope.setVariable(vars[i], obj.get(obj._int(i)));
                }
            }
        } else {
            throw new IteratorExitSignal("");
        }
        return null;
    }
    
    override public function getName():String 
    {
        return "IteratorCommand";
    }
    
    override public function getBytecode():Bytecode 
    {
        var joinedVars:String = vars.join("+");
        return Bytecode.fromArray([joinedVars, value], getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        return Token.merge([vars, new KwdToken("in"), value.reconstruct()]);
    }
    
}