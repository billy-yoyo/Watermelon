package src.compiler.commands.coroutine;
import src.ast.Token;
import src.ast.base.BlockToken;
import src.ast.base.BracketToken;
import src.ast.base.EndLineToken;
import src.ast.base.KwdToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.object.Object;
import src.compiler.signals.CoroutineEmptyReadSignal;
import src.compiler.signals.IteratorExitSignal;
import src.compiler.signals.LoopBreakSignal;
import src.compiler.signals.LoopContinueSignal;
import src.compiler.signals.SyntaxErrorSignal;
import src.compiler.signals.YieldSignal;

/**
 * ...
 * @author Billyoyo
 */
class CoroutineForLoopCommand extends Command
{
    public static function fromTokens(scope:Scope, tokens:Array<Token>):CoroutineForLoopCommand
    {
        var start:Token = tokens.shift();
        if (start.getName() != "KwdToken" || start.getContent() != "for") throw new SyntaxErrorSignal("For loop must start with for keyword");
        
        var iterToken:Token = tokens.shift();
        if (iterToken.getName() != "BracketToken") throw new SyntaxErrorSignal("Iterator must be inside brackets");
        var iterSubTokens:Array<Token> = iterToken.getContent();
        iterSubTokens.push(new EndLineToken(";"));
        var iterator:PipeReadCommand = PipeReadCommand.fromTokens(scope, iterSubTokens);
        if (iterator.getVars().length == 0) throw new SyntaxErrorSignal("Must have at least one variable to loop over a pipe read");
        
        var command:Command;
        if (tokens.length == 1 && tokens[0].getName() == "BlockToken") {
            return new CoroutineForLoopCommand(scope, iterator, LoopCodeCommand.fromTokens(scope, tokens[0].getContent()));
        } else if (tokens[tokens.length - 1].getName() == "EndLineToken") {
            return new CoroutineForLoopCommand(scope, iterator, LoopCodeCommand.fromTokens(scope, tokens));
        } else throw new SyntaxErrorSignal("Invalid for loop syntax");
        
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):CoroutineForLoopCommand
    {
        return new CoroutineForLoopCommand(scope, arr.shift().convert(scope), arr.shift().convert(scope));
    }

    private var iterator:PipeReadCommand;
    private var code:Command;
    private var iterated:Bool = false;
    private var finished:Bool = false;
    override public function new(scope:Scope, iterator:PipeReadCommand, code:Command) 
    {
        super(scope);
        this.iterator = iterator;
        iterator.cacheEnabled = true;
        this.code = code;
    }
    
    override public function copy(scope:Scope):Command 
    {
        return new CoroutineForLoopCommand(scope, cast(iterator.copy(scope), PipeReadCommand), code.copy(scope));
    }
    
    override public function setScope(scope:Scope) 
    {
        super.setScope(scope);
        iterator.setScope(scope);
        code.setScope(scope);
    }
    
    override public function getName():String 
    {
        return "CoroutineForLoopCommand";
    }
    
    override public function getFriendlyName():String 
    {
        return "for loop";
    }
    
    override public function run():Object 
    {
        if (!finished) {
            if (!iterated) {
                iterated = true;
                iterator.run();
            }
            if (iterator.cachedSource != null) {
                var iterVars:Array<String> = iterator.getVars();
                var packet:Object = scope.getVariable(iterVars[iterVars.length - 1]);
                if (packet.getType().getName() == "EmptyPacketType") {
                    finished = true;
                    return null;
                }
            }
            try {
                code.run();
                iterator.run();
            } catch ( lpbreak:LoopBreakSignal ) {
                finished = true;
            } catch ( lpcont:LoopContinueSignal ) {
                
            }
        }
        return null;
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