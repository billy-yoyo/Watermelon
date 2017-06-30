package src.compiler.object.builtin;
import haxe.io.Bytes;
import haxe.io.BytesBuffer;
import src.compiler.object.Object;
import src.compiler.object.builtin.FloatObject;
import src.compiler.object.builtin.IntObject;
import src.compiler.object.builtin.StringObject;
import src.compiler.object.builtin.TupleObject;
import src.compiler.signals.IndexOutOfBoundsSignal;
import src.compiler.signals.InvalidFieldAccessSignal;
import src.compiler.signals.ValueErrorSignal;

/**
 * ...
 * @author Billyoyo
 */
class BytesObject extends ValuedObject
{
    
    public var value:Bytes;
    override public function setup(value:Dynamic) 
    {
        this.value = value;
    }
    
    public function _index(i:Int):Int
    {
        if (i < 0) return i + value.length;
        return i;
    }
    
    override public function get(index:Object):Object 
    {
        if (hasMember("__get__")) return callMember("__get__", [index]);
        if (index.isInstance("SpliceType")) {
            var splice:SpliceValue = cast(index, SpliceObject).getValue(value.length);
            var buffer:BytesBuffer = new BytesBuffer();
            var i:Int = splice.start;
            while (i < splice.end) {
                buffer.addByte(value.get(i));
                i += splice.step;
            }
            return _bytes(buffer.getBytes());
        }
        var i:Int = _index(index.rawInt());
        if (i >= 0 && i < value.length) {
            return _int(value.get(i));
        } else {
            throw new IndexOutOfBoundsSignal('Index $i is out of bounds, should be between 0 and ${value.length}');
        }
    }
    
    override public function set(index:Object, obj:Object):Void
    {
        if (hasMember("__set__")) { callMember("__set__", [index]); return; }
        throw new InvalidFieldAccessSignal("Bytes is immutable (cannot set index of tuple)");
        return null;
    }
    
    override public function delete(index:Object):Void 
    {
        if (hasMember("__delete__")) { callMember("__delete__", [index]); return; }
        throw new InvalidFieldAccessSignal("Bytes is immutable (cannot delete index of tuple)");
        return null;
    }
    
    override public function len():IntObject 
    {
        if (hasMember("__len__")) return cast(callMember("__len__", []), IntObject);
        return _int(value.length);
    }
    
    override public function str():StringObject 
    {
        if (hasMember("__str__")) return cast(callMember("__str__", []), StringObject);
        return _str(value.getString(0, value.length));
    }
    
    override public function int():IntObject 
    {
        if (hasMember("__int__")) return cast(callMember("__int__", []), IntObject);
        var n:Int = 0;
        var offset:Int = 0;
        for (index in 0...value.length) {
            n += value.get(index) >> offset;
            offset += 8;
        }
        return _int(n);
    }
    
    override public function float():FloatObject 
    {
        if (hasMember("__float__")) return cast(callMember("__float__", []), FloatObject);
        if (value.length == 4) { // float
            return _float(value.getFloat(0));
        } else if (value.length == 8) { // double
            return _float(value.getDouble(0));
        } else throw new ValueErrorSignal("Bytes must be 32bit or 64bit to convert to float");
    }
    
    override public function add(other:Object):Object 
    {
        if (hasMember("__add__")) return callMember("__add__", []);
        if (other.isInstance("BytesType")) {
            var buffer:BytesBuffer = new BytesBuffer();
            buffer.add(value);
            buffer.add(cast(other, BytesObject).value);
            return _bytes(buffer.getBytes());
        } else if (other.hasMember("__bytes__")) {
            var bytes:Bytes = other.rawBytes();
            if (bytes == null) return other.add(this);
            var buffer:BytesBuffer = new BytesBuffer();
            buffer.add(value);
            buffer.add(bytes);
            return _bytes(buffer.getBytes());
        } else return other.add(this);
    }
    
    override public function bytes():BytesObject
    {
        if (hasMember("__bytes__")) return cast(callMember("__bytes__", []), BytesObject);
        return this;
    }
    
    override public function list():ListObject
    {
        if (hasMember("__list__")) return cast(callMember("__list__", []), ListObject);
        var arr:Array<Object> = new Array<Object>();
        for (i in 0...value.length) arr.push(_int(value.get(i)));
        return _list(arr);
    }
    
    override public function tuple():TupleObject 
    {
        if (hasMember("__tuple__")) return cast(callMember("__tuple__", []), TupleObject);
        var arr:Array<Object> = new Array<Object>();
        for (i in 0...value.length) arr.push(_int(value.get(i)));
        return _tuple(arr);
    }
    
    override public function getHash():Int 
    {
        var n:Int = 0;
        var offset:Int = 0;
        for (index in 0...value.length) {
            n += value.get(index) >> offset;
            offset += 8;
        }
        return n;
    }
}