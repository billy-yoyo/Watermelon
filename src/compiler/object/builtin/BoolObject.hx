package src.compiler.object.builtin;
import src.compiler.Scope;
import src.compiler.object.Object;
import src.compiler.object.ObjectType;

/**
 * ...
 * @author Billyoyo
 */
class BoolObject extends ValuedObject
{
    
    private var value:Bool;
    override public function setup(value:Dynamic) 
    {
        this.value = value;
    }
    
    public function getValue():Bool
    {
        return value;
    }
    
    override public function bool():BoolObject
    {
        if (hasMember("__bool__")) return cast(callMember("__bool__", []), BoolObject);
        return this;
    }
    
    override public function not():BoolObject 
    {
        if (hasMember("__not__")) return cast(callMember("__not__", []), BoolObject);
        return _bool(!value);
    }
    
    override public function and(other:Object):Object 
    {
        if (hasMember("__and__")) return callMember("__and__", [other]);
        if (other.isInstance("BoolType") || !other.hasMember("__or__")) return _bool(rawBool() || other.rawBool());
        else return other.or(this);
    }
    
    override public function or(other:Object):Object 
    {
        if (hasMember("__or__")) return callMember("__or__", [other]);
        if (other.isInstance("BoolType") || !other.hasMember("__or__")) return _bool(rawBool() || other.rawBool());
        else return other.or(this);
    }
    
    override public function xor(other:Object):Object 
    {
        if (hasMember("__xor__")) return callMember("__xor__", [other]);
        if (other.isInstance("BoolType") || !other.hasMember("__xor__")) {
            var b0:Bool = rawBool(); var b1:Bool = other.rawBool();
            return _bool((b0 || b1) && !(b0 && b1));
        }
        else return other.xor(this);
    }
    
    override public function int():IntObject
    {
        if (hasMember("__int__")) return cast(callMember("__int__", []), IntObject);
        return _int(if (value) 1 else 0);
    }
    
    override public function float():FloatObject
    {
        if (hasMember("__float__")) return cast(callMember("__float__", []), FloatObject);
        return _float(if (value) 1 else 0);
    }
    
    override public function str():StringObject
    {
        if (hasMember("__str__")) return cast(callMember("__str__", []), StringObject);
        return _str(Std.string(value));
    }
    
    override public function eq(other:Object):Object 
    {
        if (hasMember("__eq__")) return callMember("__eq__", [other]);
        return _bool(rawBool() == other.rawBool());
    }
    
    override public function neq(other:Object):Object 
    {
        if (hasMember("__neq__")) return callMember("__neq__", [other]);
        return _bool(rawBool() != other.rawBool());
    }
    
    override public function getHash():String 
    {
        return Std.string(int());
    }
    
}