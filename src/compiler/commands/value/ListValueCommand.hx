package src.compiler.commands.value;
import src.ast.Token;
import src.ast.base.CommaToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.object.Object;
import src.compiler.commands.value.ValueCommand;
import src.compiler.object.builtin.ListObject;

/**
 * ...
 * @author Billyoyo
 */
class ListValueCommand extends ValueCommand
{
    
    public static function fromTokens(scope:Scope, tokens:Array<Token>):ListValueCommand
    {
        return new ListValueCommand(scope, ValueCommand.splitTokens(scope, tokens, "CommaToken"));
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):ListValueCommand
    {
        var values:Array<ValueCommand> = new Array<ValueCommand>();
        while (arr.length > 0) values.push(arr.shift().convert(scope));
        return new ListValueCommand(scope, values);
    }

    private var values:Array<ValueCommand>;
    public function new(scope:Scope, values:Array<ValueCommand>) 
    {
        super(scope);
        this.values = values;
    }
    
    override public function walk():Array<Command> 
    {
        var cmds:Array<Command> = new Array<Command>();
        for (x in values) cmds.push(x);
        return cmds;
    }
    
    override public function run():Object
    {
        var obj:ListObject = cast(scope.getType("ListType").createObject(), ListObject);
        var arr:Array<Object> = obj.getArray();
        for (cmd in values) {
            arr.push(cmd.run());
        }
        return obj;
    }
    
    override public function getName():String 
    {
        return "ListValueCommand";
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromArray(values, getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        return new CommaToken(",").join(Command.reconstructCommands(values));
    }
}