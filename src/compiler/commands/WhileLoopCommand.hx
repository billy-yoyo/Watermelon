package src.compiler.commands;
import src.ast.Token;
import src.ast.base.BlockToken;
import src.ast.base.BracketToken;
import src.ast.base.KwdToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.commands.value.ValueCommand;
import src.compiler.object.Object;
import src.compiler.signals.SyntaxErrorSignal;
import src.compiler.signals.LoopBreakSignal;
import src.compiler.signals.LoopContinueSignal;

/**
 * ...
 * @author Billyoyo
 */
class WhileLoopCommand extends Command
{
    
    public static function fromTokens(scope:Scope, tokens:Array<Token>):WhileLoopCommand
    {
        if (tokens.length == 0) throw new SyntaxErrorSignal("Empty command");
        
        var start:Token = tokens.shift();
        if (start.getName() != "KwdToken" || start.getContent() != "while") throw new SyntaxErrorSignal("Invalid for while command, for keyword must be at the start");
        
        var conditionToken:Token = tokens.shift();
        if (conditionToken.getName() != "BracketToken") throw new SyntaxErrorSignal('Invalid while loop command, expected bracket found ${conditionToken.getName()}');
        var condition:ValueCommand = ValueCommand.fromTokens(scope, conditionToken.getContent());
        
        var command:Command;
        if (tokens.length == 1 && tokens[0].getName() == "BlockToken") {
            return new WhileLoopCommand(scope, condition, LoopCodeCommand.fromTokens(scope, tokens[0].getContent()));
        } else if (tokens[tokens.length - 1].getName() == "EndLineToken") {
            return new WhileLoopCommand(scope, condition, LoopCodeCommand.fromTokens(scope, tokens));
        } else throw new SyntaxErrorSignal("Invalid while loop syntax");
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):WhileLoopCommand
    {
        return new WhileLoopCommand(scope, arr.shift().convert(scope), arr.shift().convert(scope));
    }
    
    private var condition:ValueCommand;
    private var code:Command;
    private var completedCode:Bool = true;
    override public function new(scope:Scope, condition:ValueCommand, code:Command) 
    {
        super(scope);
        this.condition = condition;
        this.code = code;
    }
    
    override public function copy(scope:Scope):Command 
    {
        return new WhileLoopCommand(scope, cast(condition.copy(scope), ValueCommand), code.copy(scope));
    }
    
    override public function setScope(scope:Scope) 
    {
        super.setScope(scope);
        condition.setScope(scope);
        code.setScope(scope);
    }
    
    override public function walk():Array<Command> 
    {
        return [condition, code];
    }
    
    override public function run():Object 
    {
        while (!completedCode || condition.run().rawBool()) {
            try {
                completedCode = false;
                code.run();
                completedCode = true;
            } catch ( lpbreak:LoopBreakSignal ) {
                break;
            } catch ( lpcont:LoopContinueSignal ) {
                completedCode = true;
            }
        }
        return null;
    }
    
    override public function getName():String 
    {
        return "WhileLoopCommand";
    }
    
    override public function getFriendlyName():String 
    {
        return "while loop";
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromArray([condition, code], getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        return Token.merge([new KwdToken("while"), BracketToken.fromRaw(condition.reconstruct()), BlockToken.fromRaw(code.reconstruct())]);
    }
}