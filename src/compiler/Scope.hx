package src.compiler;

import src.compiler.object.Object;
import src.compiler.object.ObjectType;
import src.compiler.object.builtin.Builtins;
import src.compiler.object.builtin.ObjectTypeObject;
import src.compiler.object.builtin.coroutine.CoroutineObject;
/**
 * ...
 * @author Billyoyo
 */
class Scope
{
    public static var objectIDLimit:Int = 0xFFFFFFFF;
    
    private var root:Scope;
    private var parent:Scope;
    private var name:String;
    private var variables:Map<String, Object>;
    private var types:Map<String, Object>;
    private var builtins:Builtins;
    private var indepFuncScopes:Int;
    private var indepTypeScopes:Int;
    private var indepCoroScopes:Int;
    public var stringPool:Array<String>;
    public var children:Array<Scope>;
    public var objectID:Int;
    public var coroutineObject:CoroutineObject;
    
    public function new(name:String, ?parent:Scope) 
    {
        this.name = name;
        this.parent = parent;
        this.variables = new Map<String, Object>();
        this.types = new Map<String, Object>();
        this.stringPool = new Array<String>();
        this.indepFuncScopes = 0;
        this.indepTypeScopes = 0;
        this.indepCoroScopes = 0;
        this.children = new Array<Scope>();
        this.objectID = 0;
        this.coroutineObject = null;
        
        var lastScope:Scope = this;
        var scope:Scope = this;
        while (scope != null) {
            lastScope = scope;
            scope = scope.getParent();
        }
        
        root = lastScope;
        
        if (parent == null) {
            builtins = new Builtins(this);
            for (type in builtins.types) {
                //types.set(pool.newName('${toString()}.${type.getName()}'), builtins.objTypeType.createValue(type));
                types.set(type.getName(), builtins.objTypeType.createValue(type, scope));
            }
            for (name in builtins.objects.keys()) {
                //variables.set(pool.newName('${toString()}.$name'), builtins.objects.get(name));
                variables.set(name, builtins.objects.get(name));
            }
        }
        else {
            parent.children.push(this);
            builtins = getRoot().builtins;
        }
        
    }
    
    public function getClosestCoroutine():CoroutineObject
    {
        var scope:Scope = this;
        while (scope != null) {
            if (scope.coroutineObject != null) return scope.coroutineObject;
            scope = scope.getParent();
        }
        return null;
    }
    
    public function nextObjectID():Int
    {
        objectID++;
        if (objectID > objectIDLimit) objectID = 0;
        return objectID;
    }
    
    public function nextFuncScopeName():String
    {
        indepFuncScopes++;
        return '&FUNC$indepFuncScopes&';
    }
    
    public function nextTypeScopeName():String
    {
        indepTypeScopes++;
        return '&TYPE$indepTypeScopes&';
    }
    
    public function nextCoroScopeName():String
    {
        indepCoroScopes++;
        return '&CORO$indepCoroScopes&';
    }
    
    public function createObject(type:String, objName:String, ?args:Array<Object>):Object {
        var type:ObjectType = getType(type);
        if (type == null) throw 'Unknown type $type';
        var obj:Object = type.createObject(this, args);
        variables.set(objName, obj);
        return obj;
    }
    
    public function getBuiltins():Builtins
    {
        return builtins;
    }
    
    public function getParent():Scope
    {
        return parent;
    }
    
    public function setParent(parent:Scope)
    {
        this.parent = parent;
    }
    
    public function getRoot():Scope
    {
       return root;
    }
    
    public function getName():String
    {
        return name;
    }
    
    public function getVariables():Map<String, Object>
    {
        return variables;
    }
    
    public function getVariable(name:String):Object
    {
        var scope:Scope = this;
        var obj:Object;
        while (scope != null) {
            obj = scope.getVariables().get(name);
            if (obj != null) return obj;
            obj = scope.getTypes().get(name);
            if (obj != null) return obj;
            scope = scope.getParent();
        }
        return null;
    }
    
    public function setVariable(name:String, obj:Object):Scope
    {
        if (obj.isInstance("ObjectTypeType")) types.set(name, obj);
        else variables.set(name, obj);
        
        return this;
    }
    
    public function hasVariable(name:String):Bool
    {
        var scope:Scope = this;
        while (scope != null) {
            if (scope.getVariables().exists(name) || scope.getTypes().exists(name)) return true;
            scope = scope.getParent();
        }
        return false;
    }
    
    public function deleteVariable(name:String):Bool
    {
        var scope:Scope = this;
        while (scope != null) {
            if (scope.getVariables().exists(name)) {
                scope.getVariables().remove(name);
                return true;
            } else if (scope.getTypes().exists(name)) {
                scope.getTypes().remove(name);
                return true;
            }
        }
        return false;
    }
    
    public function getTypes():Map<String, Object>
    {
        return types;
    }
    
    public function getType(name:String, ?obfuscated:Bool):ObjectType
    {
        //if (obfuscated == null || !obfuscated) name = pool.getName('${toString()}.$name');
        var scope:Scope = this;
        var obj:Object;
        while (scope != null) {
            obj = scope.getTypes().get(name);
            if (obj != null && obj.isInstance("ObjectTypeType")) return cast(obj, ObjectTypeObject).getValue();
            scope = scope.getParent();
        }
        trace('none found');
        return null;
    }
    
    public function setType(name:String, type:ObjectType, ?obfuscated:Bool):Scope
    {
        //if (obfuscated == null || !obfuscated) name = pool.getName('${toString()}.$name');
        types.set(name, getType("ObjectTypeType").createValue(type, this));
        return this;
    }
    
    public function hasType(name:String, ?obfuscated:Bool):Bool
    {
        //if (obfuscated == null || !obfuscated) name = pool.getName('${toString()}.$name');
        var scope:Scope = this;
        while (scope != null) {
            if (scope.getTypes().exists(name)) return true;
            scope = scope.getParent();
        }
        return false;
    }
    
    public function reset():Void
    {
        variables = new Map<String, Object>();
        types = new Map<String, Object>();
    }
    
    public function toString():String
    {
        if (parent == null) return name;
        else {
            return '$parent.$name';
        }
    }
    
}