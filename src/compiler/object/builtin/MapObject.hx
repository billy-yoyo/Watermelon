package src.compiler.object.builtin;
import src.compiler.object.Object;
import src.compiler.object.builtin.IntObject;
import src.compiler.object.builtin.StringObject;

/**
 * ...
 * @author Billyoyo
 */
class MapObject extends Object
{

    public var objMap:Map<Int, Object> = new Map<Int, Object>();
    public var hashMap:Map<Int, Object> = new Map<Int, Object>();
    
    override public function get(key:Object):Object 
    {
        if (hasMember("__get__")) return callMember("__get__", [key]);
        return objMap.get(key.getHash());
    }
    
    override public function set(key:Object, obj:Object):Void
    {
        if (hasMember("__set__")) { callMember("__set__", [key, obj]); return; }
        var hash:Int = key.getHash();
        objMap.set(hash, obj);
        hashMap.set(hash, key);
    }
    
    override public function delete(key:Object):Void 
    {
        if (hasMember("__delete__")) { callMember("__delete__", [key]); return; }
        var hash:Int = key.getHash();
        objMap.remove(hash);
        hashMap.remove(hash);
    }
    
    override public function add(other:Object):Object 
    {
        if (other.isInstance("MapType")) {
            var result:Map<Int, Object> = new Map<Int, Object>();
            var omap:Map<Int, Object> = cast(other, MapObject).objMap;
            for (key in objMap.keys()) {
                result.set(key, objMap.get(key));
            }
            for (key in omap.keys()) {
                result.set(key, omap.get(key));
            }
            var obj:MapObject = cast(scope.getType("MapType").createObject(scope), MapObject);
            obj.objMap = result;
            return obj;
        }
        else return other.add(this);
    }
    
    override public function len():IntObject 
    {
        if (hasMember("__len__")) return cast(callMember("__len__", []), IntObject);
        var count:Int = 0;
        for (key in objMap.keys()) count++;
        return _int(count);
    }
    
    override public function isin(other:Object):Object 
    {
        if (hasMember("__isin__")) return callMember("__isin__", [other]);
        return _bool(objMap.exists(other.getHash()));
    }
    
    override public function iter():Object 
    {
        if (hasMember("__iter__")) return callMember("__iter__", []);
        var keys:Array<Object> = new Array<Object>();
        for (key in hashMap) {
            keys.push(key);
        }
        return _iter(keys);
    }
    
    override public function map():MapObject
    {
        if (hasMember("__map__")) return cast(callMember("__map__", []), MapObject);
        return this;
    }
    
    override public function str():StringObject 
    {
        if (hasMember("__str__")) return cast(callMember("__str__", []), StringObject);
        var arr:Array<String> = new Array<String>();
        for (hash in hashMap.keys()) {
            var left:Object = hashMap.get(hash);
            var right:Object = objMap.get(hash);
            arr.push(left.rawString() + "=" + right.rawString());
        }
        return _str("{" + arr.join(", ") + "}");
    }
    
    public function getMap():Map<Int, Object>
    {
        return objMap;
    }
    
}