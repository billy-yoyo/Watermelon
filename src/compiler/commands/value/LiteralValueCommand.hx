package src.compiler.commands.value;
import src.ast.Token;
import src.ast.base.VariableToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.bytecode.BytecodeMap;
import src.compiler.object.Object;

/**
 * ...
 * @author Billyoyo
 */
class LiteralValueCommand extends ValueCommand
{
    
    private var content:String;
    override public function new(scope:Scope, content:String)
    {
        super(scope);
        this.content = content;
    }
    
    public function getContent():String
    {
        return content;
    }
    
    public function setContent(content:String)
    {
        this.content = content;
    }
    
    override public function run():Object 
    {
        return scope.getType("StringType").createValue(content);
    }
    
    override public function getName():String 
    {
        return "LiteralValueCommand";
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromString(content, BytecodeMap.fromString("Literal"));
    }
    
    override public function reconstruct():Array<Token> 
    {
        return [new VariableToken(content)];
    }
}