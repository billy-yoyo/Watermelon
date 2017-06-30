package src.compiler.object.builtin;
import src.compiler.object.Object;

/**
 * ...
 * @author Billyoyo
 */
class SignalObject extends ValuedObject
{

    public var signal:Signal;
    override public function setup(value:Dynamic) 
    {
        signal = value;
        setMember("type", _str(signal.type));
        setMember("value", signal.value);
    }
    
}