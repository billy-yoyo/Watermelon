package src.compiler.object;
import src.compiler.Scope;

/**
 * ...
 * @author Billyoyo
 */
class ObjectType
{
    
    private var name:String;
    private var scope:Scope;
    private var members:Map<String, Object>;
    private var objectClass:Class<Object>;
    private var parentTypes:Array<ObjectType>;
    public function new(scope:Scope, name:String, members:Map<String, Object>, ?objectClass:Class<Object>, ?parentTypes:Array<ObjectType>) 
    {
        this.scope = scope;
        this.name = name;
        this.members = members;
        if (members == null) this.members = new Map<String, Object>();
        
        if (parentTypes == null) this.parentTypes = new Array<ObjectType>();
        else {
            this.parentTypes = parentTypes;
            for (parent in parentTypes) {
                for (key in parent.getMembers().keys()) {
                    if (!members.exists(key)) members.set(key, parent.getMembers().get(key));
                }
            }
        }
        
        this.objectClass = objectClass;
        if (objectClass == null) {
            for (type in parentTypes) {
                if (type.getObjectClass() != null) {
                    this.objectClass = type.getObjectClass();
                    break;
                }
            }
        }
    }
    
    public function getObjectClass():Class<Object>
    {
        return objectClass;
    }
    
    public function isType(type:String):Bool
    {
        return name == type;
    }
    
    public function inheritsType(type:String):Bool
    {
        if (isType(type)) return true;
        for (parent in parentTypes) {
            if (parent.inheritsType(type)) return true;
        }
        return false;
    }
    
    public function getMembers():Map<String, Object>
    {
        return members;
    }
    
    public function setMember(name:String, obj:Object):Void
    {
        members.set(name, obj);
    }
    
    public function getMember(name:String):Object
    {
        return members.get(name);
    }
    
    public function deleteMember(name:String):Void
    {
        members.remove(name);
    }
    
    public function hasMember(name:String):Bool
    {
        return members.exists(name);
    }
    
    public function createObject(?args:Array<Object>):Object
    {
        var members:Map<String, Object> = new Map<String, Object>();
        for (member in this.members.keys()) members.set(member, this.members.get(member).copy());
        return Type.createInstance(if(objectClass == null) Object else objectClass, [scope, this, members, args]);
    }
    
    public function createValue(value:Dynamic, ?args:Array<Object>):Object 
    {
        var members:Map<String, Object> = new Map<String, Object>();
        for (member in this.members.keys()) members.set(member, this.members.get(member).copy());
        if (objectClass == null) trace('creating default object with $value');
        return Type.createInstance(if(objectClass == null) Object else objectClass, [scope, this, members, value, args]);
    }
    
    public function getScope():Scope
    {
        return scope;
    }
    
    public function getName():String
    {
        return name;
    }
    
    public function toString():String
    {
        return '$scope.${getName()}';
    }
    
}