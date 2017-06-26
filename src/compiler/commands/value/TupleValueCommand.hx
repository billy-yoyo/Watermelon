package src.compiler.commands.value;
import src.ast.Token;
import src.ast.base.CommaToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.commands.value.MapValueCommand.ValueCommandPair;
import src.compiler.object.Object;
import src.compiler.object.builtin.TupleObject;

/**
 * ...
 * @author Billyoyo
 */
class TupleValueCommand extends ValueCommand
{

    public static function fromTokens(scope:Scope, tokens:Array<Token>):TupleValueCommand
    {
        return new TupleValueCommand(scope, ValueCommand.splitTokens(scope, tokens, "CommaToken", true));
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):TupleValueCommand
    {
        var result:Array<ValueCommand> = new Array<ValueCommand>();
        while (arr.length > 0) result.push(arr.shift().convert(scope));
        return new TupleValueCommand(scope, result);
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
        var obj:TupleObject = cast(scope.getType("TupleType").createObject(), TupleObject);
        var arr:Array<Object> = obj.getArray();
        for (cmd in values) {
            arr.push(cmd.run());
        }
        return obj;
    }
    
    override public function getName():String 
    {
        return "TupleValueCommand";
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