package src.compiler.object.builtin;
import src.compiler.object.builtin.BoolObject;

/**
 * ...
 * @author Billyoyo
 */
class FloatObject extends ValuedObject
{

    private var value:Int;
    override public function setup(value:Dynamic) 
    {
        this.value = value;
    }
    
    public function getValue():Int
    {
        return value;
    }
    
    override public function add(other:Object):Object 
    {
        if (hasMember("__add__")) return callMember("__add__", [other]);
        if (other.isInstance("IntType")) return _float(rawFloat() + other.rawInt());
        else if (other.isInstance("FloatType") || !other.hasMember("add")) return _float(rawInt() + other.rawFloat());
        else return other.add(this);
    }
    
    override public function sub(other:Object):Object 
    {
        if (hasMember("__sub__")) return callMember("__sub__", [other]);
        if (other.isInstance("IntType")) return _float(rawFloat() - other.rawInt());
        else if (other.isInstance("FloatType") || !other.hasMember("rsub")) return _float(rawFloat() - other.rawFloat());
        else return other.rsub(this);
    }
    
    override public function rsub(other:Object):Object 
    {
        if (hasMember("__rsub__")) return callMember("__rsub__", [other]);
        if (other.isInstance("IntType")) return _float(other.rawInt() - rawFloat());
        else if (other.isInstance("FloatType") || !other.hasMember("sub")) return _float(other.rawFloat() - rawFloat());
        else return other.sub(this);
    }
    
    override public function mult(other:Object):Object 
    {
        if (hasMember("__mult__")) return callMember("__mult__", [other]);
        if (other.isInstance("IntType")) return _float(rawFloat() * other.rawInt());
        else if (other.isInstance("FloatType") || !other.hasMember("mult")) return _float(rawFloat() * other.rawFloat());
        else return other.mult(this);
    }
    
    override public function div(other:Object):Object 
    {
        if (hasMember("__div__")) return callMember("__div__", [other]);
        if (other.isInstance("IntType")) return _float(rawFloat() / other.rawInt());
        else if (other.isInstance("FloatType") || !other.hasMember("rdiv")) return _float(rawFloat() / other.rawFloat());
        else return other.rdiv(this);
    }
    
    override public function rdiv(other:Object):Object 
    {
        if (hasMember("__rdiv__")) return callMember("__rdiv__", [other]);
        if (other.isInstance("IntType")) return _float(other.rawInt() / rawFloat());
        else if (other.isInstance("FloatType") || !other.hasMember("div")) return _float(other.rawFloat() / rawFloat());
        else return other.div(this);
    }
    
    override public function intdiv(other:Object):Object 
    {
        if (hasMember("__intdiv__")) return callMember("__intdiv__", [other]);
        if (other.isInstance("IntType")) return _int(Math.floor(rawFloat() / other.rawInt()));
        else if (other.isInstance("FloatType") || !other.hasMember("rintdiv")) return _int(Math.floor(rawFloat() / other.rawFloat()));
        else return other.rintdiv(this);
    }
    
    override public function rintdiv(other:Object):Object 
    {
        if (hasMember("__rintdiv__")) return callMember("__rintdiv__", [other]);
        if (other.isInstance("IntType")) return _int(Math.floor(other.rawInt() / rawFloat()));
        else if (other.isInstance("FloatType") || !other.hasMember("intdiv")) return _int(Math.floor(other.rawFloat() / rawFloat()));
        else return other.intdiv(this);
    }
    
    override public function pow(other:Object):Object 
    {
        if (hasMember("__pow__")) return callMember("__pow__", [other]);
        if (other.isInstance("IntType")) return _float(Math.pow(rawFloat(), other.rawInt()));
        else if (other.isInstance("FloatType") || !other.hasMember("rpow")) return _float(Math.pow(rawFloat(), other.rawFloat()));
        else return other.rpow(this);
    }
    
    override public function rpow(other:Object):Object 
    {
        if (hasMember("__rpow__")) return callMember("__rpow__", [other]);
        if (other.isInstance("IntType")) return _float(Math.pow(other.rawInt(), rawFloat()));
        else if (other.isInstance("FloatType") || !other.hasMember("pow")) return _float(Math.pow(other.rawFloat(), rawFloat()));
        else return other.pow(this);
    }
    
    override public function mod(other:Object):Object 
    {
        if (hasMember("__mod__")) return callMember("__mod__", [other]);
        if (other.isInstance("IntType")) return _float(rawFloat() % other.rawInt());
        else if (other.isInstance("FloatType") || !other.hasMember("rmod")) return _float(rawFloat() % other.rawFloat());
        else return other.rmod(this);
    }
    
    override public function rmod(other:Object):Object 
    {
        if (hasMember("__rmod__")) return callMember("__rmod__", [other]);
        if (other.isInstance("IntType")) return _float(other.rawInt() % rawFloat());
        else if (other.isInstance("FloatType") || !other.hasMember("mod")) return _float(other.rawFloat() % rawFloat());
        else return other.mod(this);
    }
    
    override public function eq(other:Object):Object 
    {
        if (hasMember("__eq__")) return callMember("__eq__", [other]);
        return _bool(rawFloat() == other.rawFloat());
    }
    
    override public function neq(other:Object):Object 
    {
        if (hasMember("__neq__")) return callMember("__neq__", [other]);
        return _bool(rawFloat() != other.rawFloat());
    }
    
    override public function ls(other:Object):Object 
    {
        if (hasMember("__ls__")) return callMember("__ls__", [other]);
        return _bool(rawFloat() < other.rawFloat());
    }
    
    override public function lseq(other:Object):Object 
    {
        if (hasMember("__lseq__")) return callMember("__lseq__", [other]);
        return _bool(rawFloat() <= other.rawFloat());
    }
    
    override public function gr(other:Object):Object 
    {
        if (hasMember("__gr__")) return callMember("__gr__", [other]);
        return _bool(rawFloat() > other.rawFloat());
    }
    
    override public function greq(other:Object):Object 
    {
        if (hasMember("__greq__")) return callMember("__greq__", [other]);
        return _bool(rawFloat() >= other.rawFloat());
    }
    
    override public function int():IntObject
    {
        if (hasMember("__int__")) return cast(callMember("__int__", []), IntObject);
        return _int(value);
    }
    
    override public function float():FloatObject
    {
        if (hasMember("__float__")) return cast(callMember("__float__", []), FloatObject);
        return this;
    }
    
    override public function str():StringObject
    {
        if (hasMember("__str__")) return cast(callMember("__str__", []), StringObject);
        return _str(Std.string(value));
    }
    
    override public function bool():BoolObject 
    {
        if (hasMember("__bool__")) return cast(callMember("__bool__", []), BoolObject);
        return _bool(value != 0);
    }
    
    override public function getHash():String 
    {
        return Std.string(value);
    }
    
}