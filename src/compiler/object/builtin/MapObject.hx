package src.compiler.object.builtin;
import src.compiler.object.Object;
import src.compiler.object.builtin.IntObject;

/**
 * ...
 * @author Billyoyo
 */
class MapObject extends Object
{

    public var _map:Map<String, Object> = new Map<String, Object>();
    public var hashMap:Map<String, Object> = new Map<String, Object>();
    
    override public function get(key:Object):Object 
    {
        if (hasMember("__get__")) return callMember("__get__", [key]);
        return _map.get(key.getHash());
    }
    
    override public function set(key:Object, obj:Object):Void
    {
        if (hasMember("__set__")) { callMember("__set__", [key, obj]); return; }
        var hash:String = key.getHash();
        _map.set(hash, obj);
        hashMap.set(hash, key);
    }
    
    override public function delete(key:Object):Void 
    {
        if (hasMember("__delete__")) { callMember("__delete__", [key]); return; }
        var hash:String = key.getHash();
        _map.remove(hash);
        hashMap.remove(hash);
    }
    
    override public function add(other:Object):Object 
    {
        if (other.isInstance("MapType")) {
            var result:Map<String, Object> = new Map<String, Object>();
            var omap:Map<String, Object> = cast(other, MapObject)._map;
            for (key in _map.keys()) {
                result.set(key, _map.get(key));
            }
            for (key in omap.keys()) {
                result.set(key, omap.get(key));
            }
            var obj:MapObject = cast(scope.getType("MapType").createObject(), MapObject);
            obj._map = result;
            return obj;
        }
        else return other.add(this);
    }
    
    override public function len():IntObject 
    {
        if (hasMember("__len__")) return cast(callMember("__len__", []), IntObject);
        var count:Int = 0;
        for (key in _map.keys()) count++;
        return _int(count);
    }
    
    override public function isin(other:Object):Object 
    {
        if (hasMember("__isin__")) return callMember("__isin__", [other]);
        return _bool(_map.exists(other.getHash()));
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
    
    public function getMap():Map<String, Object>
    {
        return _map;
    }
    
}