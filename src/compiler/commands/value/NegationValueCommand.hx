package src.compiler.commands.value;
import src.ast.Token;
import src.ast.maths.MathsOperatorToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.object.Object;
import src.compiler.signals.SyntaxErrorSignal;

/**
 * ...
 * @author Billyoyo
 */
class NegationValueCommand extends ValueCommand
{
    public static function fromTokens(scope:Scope, tokens:Array<Token>):NegationValueCommand
    {
        var token:Token = tokens.shift();
        if (token.getName() != "MathsOperatorToken" || token.getContent() != "-") throw new SyntaxErrorSignal("Negative sign must be at the start of the expression");
        return new NegationValueCommand(scope, ValueCommand.fromTokens(scope, tokens));
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):NegationValueCommand
    {
        return new NegationValueCommand(scope, arr.shift().convert(scope));
    }

    private var value:ValueCommand;
    override public function new(scope:Scope, value:ValueCommand) 
    {
        super(scope);
        this.value = value;
    }
    
    override public function copy(scope:Scope):Command 
    {
        return new NegationValueCommand(scope, cast(value.copy(scope), ValueCommand));
    }
    
    override public function setScope(scope:Scope) 
    {
        super.setScope(scope);
        value.setScope(scope);
    }
    
    override public function getName():String 
    {
        return "NegationValueCommand";
    }
    
    override public function getFriendlyName():String 
    {
        return "negation";
    }
    
    override public function run():Object 
    {
        return value.run().negate();
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromArray([value], getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        var tokens:Array<Token> = value.reconstruct();
        tokens.insert(0, new MathsOperatorToken("-"));
        return tokens;
    }
    
}