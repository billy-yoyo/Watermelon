package src.compiler.object;
import haxe.io.Bytes;
import haxe.io.BytesOutput;
import src.compiler.Scope;
import src.compiler.object.builtin.BoolObject;
import src.compiler.object.builtin.BytesObject;
import src.compiler.object.builtin.FloatObject;
import src.compiler.object.builtin.IntObject;
import src.compiler.object.builtin.IteratorObject;
import src.compiler.object.builtin.ListObject;
import src.compiler.object.builtin.MapObject;
import src.compiler.object.builtin.StringObject;
import src.compiler.object.builtin.TupleObject;

/**
 * ...
 * @author Billyoyo
 */
class Object
{
    
    
    private var members:Map<String, Object>;
    private var scope:Scope;
    private var type:ObjectType;
    private var objID:Int;
    public function new(scope:Scope, type:ObjectType, members:Map<String, Object>, ?args:Array<Object>) 
    {
        this.scope = scope;
        this.objID = scope.nextObjectID();
        this.type = type;
        this.members = members;
        if (members == null) this.members = new Map<String, Object>();
        for (member in this.members) {
            member.bind(this);
        }
        
        if (args == null) args = new Array<Object>();
        init(args);
    }
    
    public function setScope(scope:Scope)
    {
        this.scope = scope;
    }
    
    public function copy():Object
    {
        var members:Map<String, Object> = new Map<String, Object>();
        for (key in this.members.keys()) {
            members.set(key, this.members.get(key).copy());
        }
        return Type.createInstance(type.getObjectClass(), [scope, type, members]);
    }
    
    public function _value(type:String, value:Dynamic, ?args:Array<Object>)
    {
        return scope.getType(type).createValue(value, scope, args);
    }
    
    public function _float(value:Float, ?args:Array<Object>):FloatObject
    {
        return cast(_value("FloatType", value, args), FloatObject);
    }
    
    public function _int(value:Int, ?args:Array<Object>):IntObject
    {
        return cast(_value("IntType", value, args), IntObject);
    }
    
    public function _bool(value:Bool, ?args:Array<Object>):BoolObject
    {
        return cast(_value("BoolType", value, args), BoolObject);
    }
    
    public function _str(value:String, ?args:Array<Object>):StringObject
    {
        return cast(_value("StringType", value, args), StringObject);
    }
    
    public function _iter(value:Array<Object>, ?args:Array<Object>):IteratorObject
    {
        return cast(_value("IteratorType", value, args), IteratorObject);
    }
    
    public function _list(values:Array<Object>, ?args:Array<Object>):ListObject
    {
        var list:ListObject = cast(scope.getType("ListType").createObject(scope, args), ListObject);
        list.arr = values;
        return list;
    }
    
    public function _tuple(values:Array<Object>, ?args:Array<Object>):TupleObject
    {
        var tuple:TupleObject = cast(scope.getType("TupleType").createObject(scope, args), TupleObject);
        tuple.arr = values;
        return tuple;
    }
    
    public function _bytes(value:Bytes, ?args:Array<Object>):BytesObject
    {
        return cast(_value("BytesType", value, args), BytesObject);
    }
    
    public function isInstance(type:String):Bool
    {
        return this.type.inheritsType(type);
    }
    
    public function getType():ObjectType
    {
        return type;
    }
    
    public function getScope():Scope
    {
        return scope;
    }
    
    public function getMembers():Map<String, Object>
    {
        return members;
    }
    
    public function getMember(name:String):Object
    {
        return members.get(name);
    }
    
    public function callMember(name:String, args:Array<Object>):Object
    {
        //trace('calling function $name ($members)');
        var member:Object = getMember(name);
        if (member != null) {
            var result:Object = member.call(args);
            return result;
        }
        return null;
    }
    
    public function setMember(name:String, obj:Object):Void
    {
        members.set(name, obj);
        obj.bind(this);
    }
    
    public function deleteMember(name:String)
    {
        members.remove(name);
    }
    
    public function hasMember(name:String):Bool
    {
        return members.exists(name);
    }
    
    /*
     *   builtin methods
     * 
     */
     
    public function init(args:Array<Object>):Void
    {
        callMember("__init__", args);
    }
    
    public function bind(obj:Object):Void
    {
        members.set("__bound__", obj);
        callMember("__bind__", [obj]);
    }
     
    public function call(values:Array<Object>):Object
    {
        //trace('calling object $this');
        if (hasMember("__call__")) return getMember("__call__").call(values);
        return null;
    }
    
    public function getfield(index:Object):Object
    {
        if (hasMember("__getfield__")) return getMember("__getfield__").call([index]);
        return getMember(index.rawString());
    }
    
    public function hasfield(index:Object):BoolObject
    {
        if (hasMember("__hasfield__")) return cast(getMember("__hasfield__").call([index]), BoolObject);
        return _bool(hasMember(index.rawString()));
    }
    
    public function setfield(index:Object, member:Object)
    {
        if (hasMember("__setfield__")) getMember("__setfield__").call([index, member]);
        else setMember(index.rawString(), member);
    }
    
    public function delfield(index:Object)
    {
        if (hasMember("__delfield__")) getMember("__delfield__").call([index]);
        else deleteMember(index.rawString());
    }
    
    public function getfields():ListObject
    {
        if (hasMember("__getfields__")) return cast(getMember("__getfields__").call([]), ListObject);
        else {
            var fields:Array<Object> = new Array<Object>();
            for (field in members.keys()) fields.push(_str(field));
            return _list(fields);
        }
    }
    
    public function getmembers():ListObject
    {
        if (hasMember("__getmembers__")) return cast(getMember("__getmembers__").call([]), ListObject);
        else {
            var objs:Array<Object> = new Array<Object>();
            for (member in members) objs.push(member);
            return _list(objs);
        }
    }
    
    public function get(index:Object):Object
    {
        return callMember("__get__", [index]);
    }
    
    public function set(index:Object, obj:Object):Void
    {
        callMember("__set__", [index, obj]);
    }
    
    public function delete(index:Object):Void
    {
        callMember("__del__", [index]);
    }
    
    public function int():IntObject
    {
        return cast(callMember("__int__", []), IntObject);
    }
    
    public function float():FloatObject
    {
        return cast(callMember("__float__", []), FloatObject);
    }
    
    public function list():ListObject
    {
        return cast(callMember("__list__", []), ListObject);
    }
    
    public function tuple():TupleObject
    {
        return cast(callMember("__tuple__", []), TupleObject);
    }
    
    public function bytes():BytesObject
    {
        return cast(callMember("__bytes__", []), BytesObject);
    }
    
    public function map():MapObject
    {
        return cast(callMember("__map__", []), MapObject);
    }
    
    public function shiftright(other:Object):Object
    {
        return callMember("__shiftright__", [other]);
    }
    
    public function rshiftright(other:Object):Object
    {
        return callMember("__rshiftright__", [other]);
    }
    
    public function shiftleft(other:Object):Object
    {
        return callMember("__shiftleft__", [other]);
    }
    
    public function rshiftleft(other:Object):Object
    {
        return callMember("__rshiftleft__", [other]);
    }
    
    public function add(other:Object):Object
    {
        return callMember("__add__", [other]);
    }
    
    public function sub(other:Object):Object
    {
        return callMember("__sub__", [other]);
    }
    
    public function rsub(other:Object):Object
    {
        return callMember("__rsub__", [other]);
    }
    
    public function mult(other:Object):Object
    {
        return callMember("__mult__", [other]);
    }
    
    public function div(other:Object):Object
    {
        return callMember("__div__", [other]);
    }
    
    public function rdiv(other:Object):Object
    {
        return callMember("__rdiv__", [other]);
    }
    
    public function intdiv(other:Object):Object
    {
        return callMember("__intdiv__", [other]);
    }
    
    public function rintdiv(other:Object):Object
    {
        return callMember("__rintdiv__", [other]);
    }
    
    public function pow(other:Object):Object
    {
        return callMember("__pow__", [other]);
    }
    
    public function rpow(other:Object):Object
    {
        return callMember("__rpow__", [other]);
    }
    
    public function mod(other:Object):Object
    {
        return callMember("__mod__", [other]);
    }
    
    public function rmod(other:Object):Object
    {
        return callMember("__rmod__", [other]);
    }
    
    public function negate():Object
    {
        return callMember("__neg__", []);
    }
    
    public function len():IntObject
    {
        return cast(callMember("__len__", []), IntObject);
    }
    
    public function str():StringObject
    {
        if (hasMember("__str__")) return cast(callMember("__str__", []), StringObject);
        else return _str('$scope.${type.getName()}');
    }
    
    public function bool():BoolObject
    {
        return cast(callMember("__bool__", []), BoolObject);
    }
    
    public function and(other:Object):Object
    {
        return callMember("__and__", [other]);
    }
    
    public function or(other:Object):Object
    {
        return callMember("__or__", [other]);
    }
    
    public function xor(other:Object):Object
    {
        return callMember("__xor__", [other]);
    }
    
    public function not():Object
    {
        return callMember("__not__", []);
    }
    
    public function eq(other:Object):Object
    {
        return callMember("__eq__", [other]);
    }
    
    public function neq(other:Object):Object
    {
        return callMember("__neq__", [other]);
    }
    
    public function ls(other:Object):Object
    {
        return callMember("__ls__", [other]);
    }
    
    public function lseq(other:Object):Object
    {
        return callMember("__lseq__", [other]);
    }
    
    public function gr(other:Object):Object
    {
        return callMember("__gr__", [other]);
    }
    
    public function greq(other:Object):Object
    {
        return callMember("__greq__", [other]);
    }
    
    public function complement():Object
    {
        return callMember("__compl__", []);
    }
    
    public function iter():Object
    {
        return callMember("__iter__", []);
    }
    
    public function next():Object
    {
        return callMember("__next__", []);
    }
    
    public function hasNext():BoolObject
    {
        return cast(callMember("__hasnext", []), BoolObject);
    }
    
    public function isin(other:Object):Object
    {
        return callMember("__in__", [other]);
    }
    
    public function toString():String
    {
        return rawString();
    }
    
    public function rawInt():Int
    {
        return int().getValue();
    }
    
    public function rawFloat():Float
    {
        return float().getValue();
    }
    
    public function rawBool():Bool
    {
        return bool().getValue();
    }
    
    public function rawBytes():Bytes
    {
        return bytes().value;
    }
    
    public function rawList():Array<Object>
    {
        return list().arr;
    }
    
    public function rawTuple():Array<Object>
    {
        return tuple().arr;
    }
    
    public function rawMap():Map<Int, Object>
    {
        return map().objMap;
    }
    
    public function rawString():String 
    {
        return str().getValue();
    }
    
    public function getHash():Int
    {
        if (hasMember("__hash__")) return callMember("__hash__", []).rawInt();
        // use scope directory, object ID and object type to create a hash.
        var scopeName:String = scope.toString();
        var typeName:String = type.getName();
        var x:UInt = 1; var y:UInt = 1; var z:Int = objID;
        for (i in 0...scopeName.length) x = ((x * 31) + scopeName.charCodeAt(i)) % 0xFFFFFFFF;
        for (i in 0...typeName.length) y = ((y * 31) + typeName.charCodeAt(i)) % 0xFFFFFFFF;
        return x * x * y * y * y * z * z * z * z * z; // x ** 2 * y ** 3 * z ** 5
    }
    
}