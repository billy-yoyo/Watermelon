package src.compiler.commands.value;
import src.ast.Token;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.object.Object;

/**
 * ...
 * @author Billyoyo
 */
class ObjectArrayAccessValueCommand extends ValueCommand
{
    public static function fromTokens(scope:Scope, tokens:Array<Token>)
    {
        return new ObjectArrayAccessValueCommand(scope, ObjectIndexPair.fromTokens(scope, tokens));
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):ObjectArrayAccessValueCommand
    {
        return new ObjectArrayAccessValueCommand(scope, arr.shift().convert(scope));
    }

    private var objectIndexPair:ObjectIndexPair;
    override public function new(scope:Scope, objectIndexPair:ObjectIndexPair) 
    {
        super(scope);
        this.objectIndexPair = objectIndexPair;
    }
    
    override public function walk():Array<Command> 
    {
        return objectIndexPair.walk();
    }
    
    override public function run():Object 
    {
        return objectIndexPair.variable.run().get(objectIndexPair.index.run());
    }
    
    override public function getName():String 
    {
        return "ObjectArrayAccessValueCommand";
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromArray([objectIndexPair.index, objectIndexPair.variable], getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        return objectIndexPair.reconstruct();
    }
}