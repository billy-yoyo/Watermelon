package src.compiler.object.builtin;
import src.compiler.object.Object;
import src.compiler.object.builtin.BoolObject;
import src.compiler.object.builtin.FloatObject;
import src.compiler.object.builtin.IntObject;
import src.compiler.object.builtin.StringObject;

/**
 * ...
 * @author Billyoyo
 */
class NoneObject extends Object
{
    
    override public function bool():BoolObject 
    {
        if (hasMember("__bool__")) return cast(callMember("__bool__", []), BoolObject);
        return _bool(false);
    }
    
    override public function str():StringObject 
    {
        if (hasMember("__str__")) return cast(callMember("__str__", []), StringObject);
        return _str("none");
    }
    
    override public function int():IntObject 
    {
        if (hasMember("__int__")) return cast(callMember("__int__", []), IntObject);
        return _int(0);
    }
    
    override public function float():FloatObject 
    {
        if (hasMember("__float__")) return cast(callMember("__float__", []), FloatObject);
        return _float(0);
    }
    
    override public function getHash():String 
    {
        return "";
    }
}