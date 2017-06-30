package src.compiler.commands;
import src.ast.Token;
import src.ast.base.EndLineToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.signals.FunctionReturnSignal;
import src.compiler.object.Object;

/**
 * ...
 * @author Billyoyo
 */
class FunctionCodeCommand extends Command
{
    public static function fromTokens(scope:Scope, tokens:Array<Token>)
    {
        return new FunctionCodeCommand(scope, Core.convert(scope, tokens));
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):FunctionCodeCommand
    {
        var result:Array<Command> = new Array<Command>();
        while (arr.length > 0) result.push(arr.shift().convert(scope));
        return new FunctionCodeCommand(scope, result);
    }
    
    public var commands:Array<Command>;
    private var progress:Int = 0;
    override public function new(scope:Scope, commands:Array<Command>) 
    {
        super(scope);
        this.commands = commands;
    }
    
    override public function copy(scope:Scope):Command 
    {
        return new FunctionCodeCommand(scope, Command.copyArray(scope, commands));
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
            try {
                cmd = commands[progress];
                if (cmd.getName() == "PipeReadCommand" || cmd.getName() == "PipeWriteCommand") {
                    progress++;
                    cmd.run();
                } else {
                    cmd.run();
                    progress++;
                }
            } catch ( ret : FunctionReturnSignal ) {
                return ret.getReturn();
            }
        }
        return null;
    }
    
    override public function getName():String 
    {
        return "FunctionCodeCommand";
    }
    
    override public function getFriendlyName():String 
    {
        return "function code";
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromArray(commands, getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        return new EndLineToken(";").join(Command.reconstructCommands(commands), true);
    }
}