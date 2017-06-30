package src.compiler.commands;
import src.ast.Token;
import src.ast.base.KwdToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.object.Object;
import src.compiler.signals.LoopContinueSignal;
import src.compiler.signals.SyntaxErrorSignal;

/**
 * ...
 * @author Billyoyo
 */
class ContinueCommand extends Command
{
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):ContinueCommand
    {
        arr.shift();
        return new ContinueCommand(scope);
    }
    
    public static function fromTokens(scope:Scope, tokens:Array<Token>)
    {
        if (tokens.length != 2 || tokens[1].getName() != "EndLineToken") throw new SyntaxErrorSignal("Continue must by itself in an expression");
        if (tokens[0].getName() != "KwdToken" || tokens[0].getContent() != "continue") throw new SyntaxErrorSignal("Invalid continue expression");
        return new ContinueCommand(scope);
    }
    
    override public function copy(scope:Scope):Command 
    {
        return new ContinueCommand(scope);
    }

    override public function run():Object 
    {
        throw new LoopContinueSignal();
    }
    
    override public function getName():String 
    {
        return "ContinueCommand";
    }
    
    override public function getFriendlyName():String 
    {
        return "continue";
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromNull(getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        return [new KwdToken("continue")];
    }
}