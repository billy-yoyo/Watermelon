package src.compiler.commands;
import src.ast.Token;
import src.ast.base.BlockToken;
import src.ast.base.BracketToken;
import src.ast.base.KwdToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.object.Object;
import src.compiler.signals.IteratorExitSignal;
import src.compiler.signals.LoopBreakSignal;
import src.compiler.signals.LoopContinueSignal;
import src.compiler.signals.SyntaxErrorSignal;

/**
 * ...
 * @author Billyoyo
 */
class ForLoopComand extends Command
{
    
    public static function fromTokens(scope:Scope, tokens:Array<Token>):ForLoopComand
    {
        if (tokens.length == 0) throw new SyntaxErrorSignal("Empty command");
        
        var start:Token = tokens.shift();
        if (start.getName() != "KwdToken" || start.getContent() != "for") throw new SyntaxErrorSignal("Invalid for loop command, for keyword must be at the start");
        
        var iterToken:Token = tokens.shift();
        if (iterToken.getName() != "BracketToken") throw new SyntaxErrorSignal('Invalid for loop command, expected bracket found ${iterToken.getName()}');
        var iter:Command = IteratorCommand.fromTokens(scope, iterToken.getContent());
        
        var command:Command;
        if (tokens.length == 1 && tokens[0].getName() == "BlockToken") {
            return new ForLoopComand(scope, iter, LoopCodeCommand.fromTokens(scope, tokens[0].getContent()));
        } else if (tokens[tokens.length - 1].getName() == "EndLineToken") {
            return new ForLoopComand(scope, iter, LoopCodeCommand.fromTokens(scope, tokens));
        } else throw new SyntaxErrorSignal("Invalid for loop syntax");
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):ForLoopComand
    {
        return new ForLoopComand(scope, arr.shift().convert(scope), arr.shift().convert(scope));
    }
    
    private var iterator:Command;
    private var code:Command;
    override public function new(scope:Scope, iterator:Command, code:Command) 
    {
        super(scope);
        this.iterator = iterator;
        this.code = code;
    }
    
    override public function walk():Array<Command> 
    {
        return [iterator, code];
    }
    
    override public function run():Object 
    {
        while (true) {
            try {
                iterator.run();
                code.run();
            } catch ( itexit:IteratorExitSignal ) {
                break;
            } catch ( lpbreak:LoopBreakSignal ) {
                break;
            } catch ( lpcont:LoopContinueSignal ) {
                
            }
        }
        return null;
    }
    
    override public function getName():String 
    {
        return "ForLoopCommand";
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromArray([iterator, code], getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        return Token.merge([new KwdToken("for"), BracketToken.fromRaw(iterator.reconstruct()), BlockToken.fromRaw(code.reconstruct())]);
    }
}