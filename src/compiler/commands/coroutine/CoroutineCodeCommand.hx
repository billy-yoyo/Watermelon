package src.compiler.commands.coroutine;
import src.ast.Token;
import src.ast.base.EndLineToken;
import src.ast.base.RootToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.object.Object;
import src.compiler.signals.FunctionReturnSignal;
import src.compiler.signals.YieldSignal;

/**
 * ...
 * @author Billyoyo
 */
class CoroutineCodeCommand extends Command
{

    public static function fromTokens(scope:Scope, tokens:Array<Token>):CoroutineCodeCommand
    {
        return new CoroutineCodeCommand(scope, Core.convert(scope, tokens));
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):CoroutineCodeCommand
    {
        var result:Array<Command> = new Array<Command>();
        while (arr.length > 0) result.push(arr.shift().convert(scope));
        return new CoroutineCodeCommand(scope, result);
    }
    
    private var commands:Array<Command>;
    private var progress:Int = 0;
    public var result:Object = null;
    override public function new(scope:Scope, commands:Array<Command>) 
    {
        super(scope);
        this.commands = commands;
    }
    
    override public function copy(scope:Scope):CoroutineCodeCommand
    {
        return new CoroutineCodeCommand(scope, Command.copyArray(scope, commands));
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
                result = ret.getReturn();
                progress = commands.length;
                return null;
            } catch ( e : YieldSignal ) {
                return scope.getType("CoroutineYieldType").createValue(e, scope);
            }
        }
        
        return null;
    }
    
    override public function getName():String 
    {
        return "CoroutineCodeCommand";
    }
    
    override public function getFriendlyName():String 
    {
        return "coroutine code";
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