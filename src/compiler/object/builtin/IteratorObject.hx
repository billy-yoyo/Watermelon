package src.compiler.object.builtin;
import src.compiler.object.builtin.BoolObject;

/**
 * ...
 * @author Billyoyo
 */
class IteratorObject extends ValuedObject
{
    
    private var iterator:Array<Object>;
    private var nextIndex:Int;
    override public function setup(value:Dynamic) 
    {
        this.nextIndex = 0;
        this.iterator = value;
    }
    
    override public function hasNext():BoolObject 
    {
        if (hasMember("__hasnext__")) return cast(callMember("__hasnext__", []), BoolObject);
        return _bool(nextIndex < iterator.length);
    }
    
    override public function next():Object 
    {
        if (hasMember("__next__")) return callMember("__next__", []);
        return iterator[nextIndex++];
    }
    
}