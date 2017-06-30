package src.compiler.object.builtin;
import src.compiler.object.Object;

/**
 * ...
 * @author Billyoyo
 */
class Signal
{
    public var type:String;
    public var value:Object;
    public function new(type:String, value:Object) 
    {
        this.type = type;
        this.value = value;
    }
    
}