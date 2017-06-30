package src.compiler.commands;
import src.ast.Token;
import src.ast.base.KwdToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.object.Object;
import src.compiler.signals.LoopBreakSignal;
import src.compiler.signals.SyntaxErrorSignal;

/**
 * ...
 * @author Billyoyo
 */
class BreakCommand extends Command
{
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):BreakCommand
    {
        arr.shift();
        return new BreakCommand(scope);
    }
    
    public static function fromTokens(scope:Scope, tokens:Array<Token>)
    {
        if (tokens.length != 2 || tokens[1].getName() != "EndLineToken") throw new SyntaxErrorSignal("Break must by itself in an expression");
        if (tokens[0].getName() != "KwdToken" || tokens[0].getContent() != "break") throw new SyntaxErrorSignal("Invalid break expression");
        return new BreakCommand(scope);
    }
    
    override public function copy(scope:Scope):Command 
    {
        return new BreakCommand(scope);
    }
    
    override public function run():Object 
    {
        throw new LoopBreakSignal();
    }
    
    override public function getName():String 
    {
        return "BreakCommand";
    }
    
    override public function getFriendlyName():String 
    {
        return "break";
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromNull(getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        return [new KwdToken("break")];
    }
}