package src.compiler.commands;
import haxe.CallStack;
import haxe.CallStack.StackItem;
import haxe.Constraints.Function;
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
    
    public var commands:Array<Command>;
    public var useStringPool:Bool = true;
    public var handleErrors:Bool = true;
    override public function new(scope:Scope, commands:Array<Command>) 
    {
        super(scope);
        this.commands = commands;
    }
    
    override public function copy(scope:Scope):Command 
    {
        return new RootCommand(scope, Command.copyArray(scope, commands));
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
    
    public static function throwUncaughtError(command:Command, msg:String)
    {
        var stack:Array<StackItem> = CallStack.exceptionStack();
        var simple:Array<String> = new Array<String>(); var next:String;
        for (item in stack) {
            next = item.getParameters()[1].split("/").pop().split(".").shift();
            if (simple[simple.length - 1] != next) simple.push(next);
        }
        simple.pop();
        Watermelon.print(msg);
        while (simple.length > 0) {
            var name:String = simple.shift();
            var friendly:String;
            var cls = Type.resolveClass('src.compiler.commands.value.$name');
            if (cls == null) cls = Type.resolveClass('src.compiler.commands.$name');
            if (cls == null) cls = Type.resolveClass('src.compiler.commands.coroutine.$name');
            if (cls == null) friendly = name;
            else friendly = Reflect.getProperty(Type.createEmptyInstance(cls), "getFriendlyName")();
            Watermelon.print('Called from $friendly');
        }
        Watermelon.print('Called from root command ${command.getFriendlyName()}');
    }
    
    override public function run():Object 
    {
        //trace('running $commands');
        var command:Command = null;
        try {
            for (i in 0...commands.length) {
                command = commands[i];
                command.run();
            }
        //} catch ( e : String ) {
        //    var error:String = e.split(":")[0];
        //    while (error.charAt(error.length - 1) == " ") error = error.substr(0, error.length - 1);
        //    throwUncaughtError(command, 'Uncaught error $error');
        } catch ( signal : ExitSignal ) {
            if (!handleErrors) throw signal;
            if (signal.getName() == "ExitCodeSignal") throw new ExitCodeSignal();
            throwUncaughtError(command, '${signal.getName()}: ${signal.msg}');
        }
        return null;
    }
    
    override public function getName():String 
    {
        return "RootCommand";
    }
    
    override public function getFriendlyName():String 
    {
        return "root";
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