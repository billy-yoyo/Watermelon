package src.compiler.object.builtin;
import src.compiler.Scope;
import src.compiler.object.Object;
import src.compiler.object.ObjectType;
import src.compiler.object.builtin.BoolObject;

/**
 * ...
 * @author Billyoyo
 */
class IntObject extends ValuedObject
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
        if (other.isInstance("FloatType")) return _float(rawInt() + other.rawFloat());
        else if (other.isInstance("IntType") || !other.hasMember("add")) return _int(rawInt() + other.rawInt());
        else return other.add(this);
    }
    
    override public function sub(other:Object):Object 
    {
        if (hasMember("__sub__")) return callMember("__sub__", [other]);
        if (other.isInstance("FloatType")) return _float(rawInt() - other.rawFloat());
        else if (other.isInstance("IntType") || !other.hasMember("rsub")) return _int(rawInt() - other.rawInt());
        else return other.rsub(this);
    }
    
    override public function rsub(other:Object):Object 
    {
        if (hasMember("__rsub__")) return callMember("__rsub__", [other]);
        if (other.isInstance("FloatType")) return _float(other.rawFloat() - rawInt());
        else if (other.isInstance("IntType") || !other.hasMember("sub")) return _int(other.rawInt() - rawInt());
        else return other.sub(this);
    }
    
    override public function mult(other:Object):Object 
    {
        if (hasMember("__mult__")) return callMember("__mult__", [other]);
        else if (other.isInstance("FloatType")) return _float(rawInt() * other.rawFloat());
        else if (other.isInstance("IntType") || !other.hasMember("mult")) return _int(rawInt() * other.rawInt());
        else return other.mult(this);
    }
    
    override public function div(other:Object):Object 
    {
        if (hasMember("__div__")) return callMember("__div__", [other]);
        if (other.isInstance("FloatType")) return _float(rawInt() / other.rawFloat());
        else if (other.isInstance("IntType") || !other.hasMember("rdiv")) return _float(rawInt() / other.rawInt());
        else return other.rdiv(this);
    }
    
    override public function rdiv(other:Object):Object 
    {
        if (hasMember("__rdiv__")) return callMember("__rdiv__", [other]);
        if (other.isInstance("FloatType")) return _float(other.rawFloat() / rawInt());
        else if (other.isInstance("IntType") || !other.hasMember("div")) return _float(other.rawInt() / rawInt());
        else return other.div(this);
    }
    
    override public function intdiv(other:Object):Object 
    {
        if (hasMember("__intdiv__")) return callMember("__intdiv__", [other]);
        if (other.isInstance("FloatType")) return _int(Math.floor(rawInt() / other.rawFloat()));
        else if (other.isInstance("IntType") || !other.hasMember("rintdiv")) return _int(Math.floor(rawInt() / other.rawInt()));
        else return other.rintdiv(this);
    }
    
    override public function rintdiv(other:Object):Object 
    {
        if (hasMember("__rintdiv__")) return callMember("__rintdiv__", [other]);
        if (other.isInstance("FloatType")) return _int(Math.floor(other.rawFloat() / rawInt()));
        else if (other.isInstance("IntType") || !other.hasMember("intdiv")) return _int(Math.floor(other.rawInt() / rawInt()));
        else return other.intdiv(this);
    }
    
    public static function intPower(x:Int, power:Int):Int
    {
        var result:Int = 1;
        while (power > 0)
        {
            if (power & 1 == 1) result = result * x;
            power = power >> 1;
            x = x * x;
        }
        return result;
    }
    
    override public function pow(other:Object):Object 
    {
        if (hasMember("__pow__")) return callMember("__pow__", [other]);
        if (other.isInstance("FloatType")) return _float(Math.pow(rawInt(), other.rawFloat()));
        else if (other.isInstance("IntType") || !other.hasMember("rpow")) {
            var power:Int = other.rawInt();
            if (power >= 0) return _int(intPower(rawInt(), power));
            else return _float(Math.pow(rawInt(), power));
        }
        else return other.rpow(this);
    }
    
    override public function rpow(other:Object):Object 
    {
        if (hasMember("__rpow__")) return callMember("__rpow__", [other]);
        if (other.isInstance("FloatType")) return _float(Math.pow(other.rawFloat(), rawInt()));
        else if (other.isInstance("IntType") || !other.hasMember("pow")) {
            var power:Int = rawInt();
            if (power >= 0) return _int(intPower(other.rawInt(), power));
            else return _float(Math.pow(other.rawInt(), power));
        }
        else return other.pow(this);
    }
    
    override public function mod(other:Object):Object 
    {
        if (hasMember("__mod__")) return callMember("__mod__", [other]);
        if (other.isInstance("FloatType")) return _float(rawInt() % other.rawFloat());
        else if (other.isInstance("IntType") || !other.hasMember("rmod")) return _int(rawInt() % other.rawInt());
        else return other.rmod(this);
    }
    
    override public function rmod(other:Object):Object 
    {
        if (hasMember("__rmod__")) return callMember("__rmod__", [other]);
        if (other.isInstance("FloatType")) return _float(other.rawFloat() % rawInt());
        else if (other.isInstance("IntType") || !other.hasMember("mod")) return _int(other.rawInt() % rawInt());
        else return other.mod(this);
    }
    
    override public function eq(other:Object):Object 
    {
        if (hasMember("__eq__")) return callMember("__eq__", [other]);
        if (other.isInstance("FloatType")) return _bool(rawFloat() == other.rawFloat());
        else return _bool(rawInt() == other.rawInt());
    }
    
    override public function neq(other:Object):Object 
    {
        if (hasMember("__neq__")) return callMember("__neq__", [other]);
        if (other.isInstance("FloatType")) return _bool(rawFloat() != other.rawFloat());
        else return _bool(rawInt() != other.rawInt());
    }
    
    override public function ls(other:Object):Object 
    {
        if (hasMember("__ls__")) return callMember("__ls__", [other]);
        if (other.isInstance("FloatType")) return _bool(rawFloat() < other.rawFloat());
        else return _bool(rawInt() < other.rawInt());
    }
    
    override public function lseq(other:Object):Object 
    {
        if (hasMember("__lseq__")) return callMember("__lseq__", [other]);
        if (other.isInstance("FloatType")) return _bool(rawFloat() <= other.rawFloat());
        else return _bool(rawInt() <= other.rawInt());
    }
    
    override public function gr(other:Object):Object 
    {
        if (hasMember("__gr__")) return callMember("__gr__", [other]);
        if (other.isInstance("FloatType")) return _bool(rawFloat() > other.rawFloat());
        else return _bool(rawInt() > other.rawInt());
    }
    
    override public function greq(other:Object):Object 
    {
        if (hasMember("__greq__")) return callMember("__greq__", [other]);
        if (other.isInstance("FloatType")) return _bool(rawFloat() >= other.rawFloat());
        else return _bool(rawInt() >= other.rawInt());
    }
    
    override public function and(other:Object):Object 
    {
        if (hasMember("__and__")) return callMember("__and__", [other]);
        if (other.isInstance("IntType") || !other.hasMember("and")) return _int(rawInt() & other.rawInt());
        else return other.and(this);
    }
    
    override public function or(other:Object):Object 
    {
        if (hasMember("__or__")) return callMember("__or__", [other]);
        if (other.isInstance("IntType") || !other.hasMember("or")) return _int(rawInt() | other.rawInt());
        else return other.or(this);
    }
    
    override public function xor(other:Object):Object 
    {
        if (hasMember("__xor__")) return callMember("__xor__", [other]);
        if (other.isInstance("IntType") || !other.hasMember("xor")) return _int(rawInt() ^ other.rawInt());
        else return other.xor(this);
    }
    
    override public function shiftleft(other:Object):Object 
    {
        if (hasMember("__shiftleft__")) return callMember("__shiftleft__", [other]);
        if (other.isInstance("IntType") || !other.hasMember("rshiftleft")) return _int(rawInt() << other.rawInt());
        else return other.rshiftleft(this);
    }
    
    override public function rshiftleft(other:Object):Object 
    {
        if (hasMember("__rshiftleft__")) return callMember("__rshiftleft__", [other]);
        if (other.isInstance("IntType") || !other.hasMember("shiftleft")) return _int(other.rawInt() << rawInt());
        else return other.shiftleft(this);
    }
    
    override public function shiftright(other:Object):Object 
    {
        if (hasMember("__shiftright__")) return callMember("__shiftright__", [other]);
        if (other.isInstance("IntType") || !other.hasMember("rshiftright")) return _int(rawInt() >> other.rawInt());
        else return other.rshiftright(this);
    }
    
    override public function rshiftright(other:Object):Object 
    {
        if (hasMember("__rshiftright__")) return callMember("__rshiftright__", [other]);
        if (other.isInstance("IntType") || !other.hasMember("shiftright")) return _int(other.rawInt() >> rawInt());
        else return other.shiftright(this);
    }
    
    override public function complement():Object 
    {
        if (hasMember("__compl__")) return callMember("__compl__", []);
        return _int(~rawInt());
    }
    
    override public function int():IntObject
    {
        if (hasMember("__int__")) return cast(callMember("__int__", []), IntObject);
        return this;
    }
    
    override public function float():FloatObject
    {
        if (hasMember("__float__")) return cast(callMember("__float__", []), FloatObject);
        return _float(value);
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