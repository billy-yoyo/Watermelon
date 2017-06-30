package src.compiler.object.builtin;
import src.compiler.Scope;
import src.compiler.object.Object;
import src.compiler.signals.InvalidFieldAccessSignal;

/**
 * ...
 * @author Billyoyo
 */
class ModuleObject extends ValuedObject
{
    
    override public function getMember(name:String):Object 
    {
        if (members.exists(name)) return super.getMember(name);
        if (moduleScope.hasVariable(name)) return moduleScope.getVariable(name);
        throw new InvalidFieldAccessSignal('Module has no field $name');
    }
    
    override public function getMembers():Map<String, Object> 
    {
        var result:Map<String, Object> = new Map<String, Object>();
        var members:Map<String, Object> = super.getMembers();
        var vars:Map<String, Object> = moduleScope.getVariables();
        var types:Map<String, Object> = moduleScope.getTypes();
        for (name in members.keys()) result.set(name, members.get(name));
        for (name in vars.keys()) result.set(name, vars.get(name));
        for (name in types.keys()) result.set(name, types.get(name));
        return result;
    }
    
    override public function hasMember(name:String):Bool 
    {
       return members.exists(name) || moduleScope.hasVariable(name);
    }
    
    public var moduleScope:Scope;
    override public function setup(value:Dynamic) 
    {
        this.moduleScope = value;
    }
    
    
}