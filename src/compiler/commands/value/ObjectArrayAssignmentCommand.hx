package src.compiler.commands.value;
import src.ast.Token;
import src.ast.script.AssignmentToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.object.Object;
import src.compiler.signals.SyntaxErrorSignal;

/**
 * ...
 * @author Billyoyo
 */
class ObjectArrayAssignmentCommand extends ValueCommand
{
    public static function fromTokens(scope:Scope, tokens:Array<Token>)
    {
        if (tokens.pop().getName() != "EndLineToken") throw new SyntaxErrorSignal('Assignments should end with and EndLineToken');
        var spl:Array<Array<Token>> = Command.splitTokens(tokens, "AssignmentToken");
        if (spl.length == 1) throw new SyntaxErrorSignal("Missing assignment token");
        else if (spl.length > 2) throw new SyntaxErrorSignal("Too many assignments in one expression");
        return new ObjectArrayAssignmentCommand(scope, ObjectIndexPair.fromTokens(scope, spl[0]), ValueCommand.fromTokens(scope, spl[1]));
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):ObjectArrayAssignmentCommand
    {
        return new ObjectArrayAssignmentCommand(scope, new ObjectIndexPair(scope, arr.shift().convert(scope), arr.shift().convert(scope)), arr.shift().convert(scope));
    }

    private var objectIndexPair:ObjectIndexPair;
    private var value:ValueCommand;
    override public function new(scope:Scope, objectIndexPair:ObjectIndexPair, value:ValueCommand) 
    {
        super(scope);
        this.objectIndexPair = objectIndexPair;
        this.value = value;
    }
    
    override public function copy(scope:Scope):Command 
    {
        return new ObjectArrayAssignmentCommand(scope, cast(objectIndexPair.copy(scope), ObjectIndexPair), cast(value.copy(scope), ValueCommand));
    }
    
    override public function setScope(scope:Scope) 
    {
         super.setScope(scope);
         objectIndexPair.setScope(scope);
         value.setScope(scope);
    }
    
    override public function walk():Array<Command> 
    {
        return [objectIndexPair, value];
    }
    
    override public function run():Object 
    {
        objectIndexPair.variable.run().set(objectIndexPair.index.run(), value.run());
        return null;
    }
    
    override public function getName():String 
    {
        return "ObjectArrayAssignmentCommand";
    }
    
    override public function getFriendlyName():String 
    {
        return "array index assignment";
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromArray([objectIndexPair.variable, objectIndexPair.index, value], getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        return Token.merge([objectIndexPair.reconstruct(), new AssignmentToken("="), value.reconstruct()]);
    }
}