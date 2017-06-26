package src.compiler.object.builtin;
import src.compiler.commands.Command;

/**
 * ...
 * @author Billyoyo
 */
class FunctionCode
{
    
    public var code:Command;
    public var args:Array<FunctionArgument>;
    public var positional:Int;
    public function new(code:Command, args:Array<FunctionArgument>) 
    {
        this.code = code;
        this.args = args;
        this.positional = 0;
        for (arg in args) {
            if (!arg.isKwd()) this.positional++;
        }
    }
    
}