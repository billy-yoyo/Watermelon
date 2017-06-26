package src.compiler.commands;
import src.ast.Token;
import src.ast.base.EndLineToken;
import src.ast.base.RootToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.bytecode.StringPool;
import src.compiler.commands.Command;
import src.compiler.object.Object;
import src.compiler.signals.ExitCodeSignal;
import src.compiler.signals.ExitSignal;

/**
 * ...
 * @author Billyoyo
 */
class RootCommand extends Command
{
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):RootCommand
    {
        if (arr[0] == null) arr.shift(); // remove string pool null
        var commands:Array<Command> = new Array<Command>();
        while (arr.length > 0) commands.push(arr.shift().convert(scope));
        return new RootCommand(scope, commands);
    }
    
    private var commands:Array<Command>;
    public var useStringPool:Bool = true;
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
        //trace('running $commands');
        try {
            for (command in commands) {
                command.run();
            }
        } catch ( signal : ExitSignal ) {
            if (signal.getName() == "ExitCodeSignal") throw new ExitCodeSignal();
            Main.print('Exited with uncaught ${signal.getName()}, msg: ${signal.msg}');
        }
        return null;
    }
    
    override public function getName():String 
    {
        return "RootCommand";
    }
    
    override public function getBytecode():Bytecode 
    {
        var arr:Array<Dynamic> = new Array<Dynamic>();
        if (useStringPool) {
            var stringPool:StringPool = new StringPool(this);
            Bytecode.currentStringPool = stringPool;
            arr.push(stringPool);
        }
        for (cmd in commands) arr.push(cmd);
        return Bytecode.fromArray(arr, getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        var tokens:Array<Array<Token>> = new Array<Array<Token>>();
        for (cmd in commands) {
            var const:Array<Token> = cmd.reconstruct();
            if (const[const.length - 1].getName() != "BlockToken" || cmd.getName() == "MapValueCommand") { // code block
                const.push(new EndLineToken(";"));
            }
            tokens.push(const);
        }
        return Token.merge(tokens);
    }
    
}