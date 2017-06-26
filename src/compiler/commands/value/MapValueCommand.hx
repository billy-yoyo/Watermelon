package src.compiler.commands.value;
import src.ast.Token;
import src.ast.script.AssignmentToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.commands.value.MapValueCommand.ValueCommandPair;
import src.compiler.object.Object;
import src.compiler.commands.value.ValueCommand;
import src.compiler.object.builtin.MapObject;

/**
 * ...
 * @author Billyoyo
 */
class MapValueCommand extends ValueCommand
{
    
    public static function getValueCommandPairFromBytes():Scope-> Array<Bytecode>->Command
    {
        return ValueCommandPair.fromBytecode;
    }
    
    public static function fromTokens(scope:Scope, tokens:Array<Token>):MapValueCommand
    {
        var spl:Array<Array<Token>> = Command.splitTokens(tokens, "CommaToken");
        var cmds:Array<ValueCommandPair> = new Array<ValueCommandPair>();
        for (subtokens in spl) {
            var pair:Array<Array<Token>> = Command.splitTokens(tokens, "AssignmentToken");
            if (pair.length < 2) throw "No assignment in map";
            else if (pair.length > 2) throw "Double assignment in map";
            else {
                cmds.push(new ValueCommandPair(ValueCommand.fromTokens(scope, pair[0]), ValueCommand.fromTokens(scope, pair[1])));
            }
        }
        return new MapValueCommand(scope, cmds);
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):MapValueCommand
    {
        var result:Array<ValueCommandPair> = new Array<ValueCommandPair>();
        while (arr.length > 0) result.push(new ValueCommandPair(arr.shift().convert(scope), arr.shift().convert(scope)));
        return new MapValueCommand(scope, result);
    }

    private var cmds:Array<ValueCommandPair>;
    public function new(scope:Scope, cmds:Array<ValueCommandPair>) 
    {
        super(scope);
        this.cmds = cmds;
    }
    
    override public function walk():Array<Command> 
    {
        var cmds:Array<Command> = new Array<Command>();
        for (x in cmds) cmds.push(x);
        return cmds;
    }
    
    override public function run():Object
    {
        var map:MapObject = cast(scope.getType("MapType").createObject(), MapObject);
        for (pair in cmds) {
            map.set(pair.left.run(), pair.right.run());
        }
        return map;
    }
    
    override public function getName():String 
    {
        return "MapValueCommand";
    }
    
    override public function getBytecode():Bytecode 
    {
        var arr:Array<ValueCommand> = new Array<ValueCommand>();
        for (cmd in cmds) {
            arr.push(cmd.left);
            arr.push(cmd.right);
        }
        return Bytecode.fromArray(arr, getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        return Command.reconstructCommands(cmds);
    }
}

class ValueCommandPair extends Command {
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):ValueCommandPair
    {
        return new ValueCommandPair(arr.shift().convert(scope) , arr.shift().convert(scope));
    }
    
    public var left:ValueCommand;
    public var right:ValueCommand;
    override public function new(left:ValueCommand, right:ValueCommand)
    {
        super(null);
        this.left = left;
        this.right = right;
    }
    
    override public function walk():Array<Command> 
    {
        return [left, right];
    }
    
    override public function getName():String 
    {
        return "ValueCommandPair";
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromArray([left, right], getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        
        return Token.merge([left.reconstruct(), new AssignmentToken("="), right.reconstruct()]);
    }
}