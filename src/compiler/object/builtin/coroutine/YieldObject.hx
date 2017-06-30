package src.compiler.object.builtin.coroutine;
import src.compiler.object.Object;
import src.compiler.object.builtin.ValuedObject;
import src.compiler.signals.YieldSignal;

/**
 * ...
 * @author Billyoyo
 */
class YieldObject extends ValuedObject
{
    
    public var yield:YieldSignal;
    override public function setup(value:Dynamic) 
    {
        yield = value;
    }
    
    override public function toString():String 
    {
        return yield.toString();
    }
}