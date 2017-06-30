package src.compiler.commands.value;
import src.ast.Token;
import src.ast.base.KwdToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.object.Object;

/**
 * ...
 * @author Billyoyo
 */
class ContainsValueCommand extends ValueCommand
{
    
    public static function fromTokens(scope:Scope, tokens:Array<Token>)
    {
        var spl:Array<ValueCommand> = ValueCommand.splitTokens(scope, tokens, "KwdToken", false, "in");
        if (spl.length < 2) throw "Invalid contains expression";
        else if (spl.length > 2) throw "Too many in keywords in one expression";
        else {
            return new ContainsValueCommand(scope, spl[0], spl[1]);
        }
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):ContainsValueCommand
    {
        return new ContainsValueCommand(scope, arr.shift().convert(scope), arr.shift().convert(scope));
    }
    
    private var left:ValueCommand;
    private var right:ValueCommand;
    override public function new(scope:Scope, left:ValueCommand, right:ValueCommand) 
    {
        super(scope);
        this.left = left;
        this.right = right;
    }
    
    override public function copy(scope:Scope):Command 
    {
        return new ContainsValueCommand(scope, cast(left.copy(scope), ValueCommand), cast(right.copy(scope), ValueCommand));
    }
    
    override public function setScope(scope:Scope) 
    {
        super.setScope(scope);
        left.setScope(scope);
        right.setScope(scope);
    }
    
    override public function walk():Array<Command> 
    {
        return [left, right];
    }
    
    override public function run():Object 
    {
        return left.run().isin(right.run());
    }
    
    override public function getName():String 
    {
        return "ContainsValueCommand";
    }
    
    override public function getFriendlyName():String 
    {
        return "contains expression";
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromArray([left, right], getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        return Token.merge([left.reconstruct(), new KwdToken("in"), right.reconstruct()]);
    }
}