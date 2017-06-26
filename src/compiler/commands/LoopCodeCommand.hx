package src.compiler.commands;
import src.ast.Token;
import src.ast.base.EndLineToken;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.object.Object;
import src.compiler.signals.LoopBreakSignal;
import src.compiler.signals.LoopContinueSignal;

/**
 * ...
 * @author Billyoyo
 */
class LoopCodeCommand extends Command
{
    public static function fromTokens(scope:Scope, tokens:Array<Token>):LoopCodeCommand
    {
        return new LoopCodeCommand(scope, Core.convert(scope, tokens));
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):LoopCodeCommand
    {
        var commands:Array<Command> = new Array<Command>();
        for (code in arr) commands.push(code.convert(scope));
        return new LoopCodeCommand(scope, commands);
    }
    
    private var commands:Array<Command>;
    override public function new(scope:Scope, commands:Array<Command>) 
    {
        super(scope);
        this.commands = commands;
    }
    
    override public function walk():Array<Command> 
    {
        return commands;
    }
    
    override public function run():Object 
    {
        for (command in commands) {
            command.run(); 
        }
        return null;
    }
    
    override public function getName():String 
    {
        return "LoopCodeCommand";
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromArray(commands, getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        return new EndLineToken(";").join(Command.reconstructCommands(commands));
    }
}