package src.compiler.object.builtin;
import src.compiler.object.Object;
import src.compiler.object.ObjectType;
import src.compiler.object.builtin.StringObject;

/**
 * ...
 * @author Billyoyo
 */
class ObjectTypeObject extends ValuedObject
{
    public static function isSubType(t0:Class<Dynamic>, t1:Class<Dynamic>):Bool {
        while (t0 != null && t0 != t1) t0 = Type.getSuperClass(t0);
        return t0 != null;
    }
    
    private var value:ObjectType;
    override public function setup(value:Dynamic) 
    {
        this.value = value;
    }
    
    public function getValue():ObjectType
    {
        return value;
    }
    
    override public function getMembers():Map<String, Object> 
    {
        if (value == null) return super.getMembers();
        return value.getMembers();
    }
    
    override public function setMember(name:String, obj:Object):Void 
    {
        if (value == null) super.setMember(name, obj);
        else value.setMember(name, obj);
    }
    
    override public function getMember(name:String):Object 
    {
        if (value == null) return super.getMember(name);
        return value.getMember(name);
    }
    
    override public function deleteMember(name:String) 
    {
        if (value == null) super.deleteMember(name);
        else value.deleteMember(name);
    }
    
    override public function hasMember(name:String):Bool 
    {
        if (value == null) return super.hasMember(name);
        return value.hasMember(name);
    }
    
    override public function str():StringObject 
    {
        if (hasMember("__str__")) return cast(callMember("__str__", []), StringObject);
        return _str(type.getName());
    }
    
    override public function call(values:Array<Object>):Object 
    {
        if (isSubType(value.getObjectClass(), ValuedObject)) return value.createValue(cast(values.shift(), ValuedObject).getInitVar(), scope, values);
        return value.createObject(scope, values);
    }
    
}