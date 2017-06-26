package src.compiler.commands.value;
import src.ast.Token;
import src.ast.base.BracketToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.object.Object;
import src.compiler.signals.SyntaxErrorSignal;

/**
 * ...
 * @author Billyoyo
 */
class ObjectIndexPair extends Command
{
    public static function fromTokens(scope:Scope, tokens:Array<Token>):ObjectIndexPair
    {
        if (tokens.length != 2) throw new SyntaxErrorSignal("Invalid object indexing syntax");
        else {
            if (tokens[1].getName() != "ListToken") throw new SyntaxErrorSignal("Invalid object indexing syntax, array access must be in square brackets");
            var variable:ValueCommand = ValueCommand.fromToken(scope, tokens[0]);
            var index:ValueCommand = ValueCommand.fromTokens(scope, tokens[1].getContent());
            return new ObjectIndexPair(scope, variable, index);
        }
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):ObjectIndexPair
    {
        return new ObjectIndexPair(scope, arr.shift().convert(scope), arr.shift().convert(scope));
    }
    
    public var variable:ValueCommand;
    public var index:ValueCommand;
    public function new(scope:Scope, variable:ValueCommand, index:ValueCommand) 
    {
        super(scope);
        this.variable = variable;
        this.index = index;
    }
    
    override public function walk():Array<Command> 
    {
        return [variable, index];
    }
    
    override public function getName()
    {
        return "ObjectIndexPair";
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromArray([variable, index], getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        return Token.merge([variable.reconstruct(), BracketToken.fromRaw(index.reconstruct())]);
    }
}