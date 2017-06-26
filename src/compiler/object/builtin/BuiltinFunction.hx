package src.compiler.object.builtin;
import src.compiler.Scope;
import src.compiler.object.Object;
import src.compiler.object.ObjectType;

/**
 * ...
 * @author Billyoyo
 */
class BuiltinFunction extends ValuedObject
{
    
    private var func:Array<Object>->Object;
    override public function setup(value:Dynamic) 
    {
        this.func = value;
    }
    
    override public function call(values:Array<Object>):Object
    {
        if (hasMember("__bound__")) values.insert(0, getMember("__bound__"));
        return func(values);
    }
    
}