package src.compiler.object.builtin;
import src.compiler.Scope;
import src.compiler.object.Object;
import src.compiler.object.builtin.StringObject;


/**
 * ...
 * @author Billyoyo
 */
class PairObject extends ValuedObject
{
    public static function createPair(name:String, value:Object):Pair {
        return new Pair(name, value);
    }

    private var pair:Pair;
    override public function setup(value:Dynamic) 
    {
        this.pair = value;
    }
    
    public function getName():String {
        return pair.name;
    }
    
    public function getValue():Object {
        return pair.value;
    }
    
    override public function str():StringObject 
    {
        if (hasMember("__str__")) return cast(callMember("__str__", []), StringObject);
        return _str(pair.name);
    }
    
}

private class Pair {
    public var name:String;
    public var value:Object;
    public function new(name:String, value:Object) {
        this.name = name;
        this.value = value;
    }
}