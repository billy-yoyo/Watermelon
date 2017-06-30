package src.compiler.commands;
import src.ast.Token;
import src.ast.base.EndLineToken;
import src.compiler.Scope;
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
        while (arr.length > 0) commands.push(arr.shift().convert(scope));
        return new LoopCodeCommand(scope, commands);
    }
    
    private var commands:Array<Command>;
    private var progress:Int = 0;
    override public function new(scope:Scope, commands:Array<Command>) 
    {
        super(scope);
        this.commands = commands;
    }
    
    override public function copy(scope:Scope):Command 
    {
        return new LoopCodeCommand(scope, Command.copyArray(scope, commands));
    }
    
    override public function setScope(scope:Scope) 
    {
        super.setScope(scope);
        for (cmd in commands) cmd.setScope(scope);
    }
    
    override public function walk():Array<Command> 
    {
        return commands;
    }
    
    override public function run():Object 
    {
        var cmd:Command;
        while (progress < commands.length) {
            cmd = commands[progress];
            if (cmd.getName() == "PipeReadCommand" || cmd.getName() == "PipeWriteCommand") {
                progress++;
                cmd.run();
            } else {
                cmd.run();
                progress++;
            }
        }
        progress = 0;
        return null;
    }
    
    override public function getName():String 
    {
        return "LoopCodeCommand";
    }
    
    override public function getFriendlyName():String 
    {
        return "loop code";
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