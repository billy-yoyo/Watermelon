package src.compiler.object.builtin;
import src.compiler.Scope;
import src.compiler.object.Object;
import src.compiler.object.builtin.IntObject;
import src.compiler.object.builtin.StringObject;
import src.compiler.signals.IndexOutOfBoundsSignal;
import src.compiler.signals.ValueErrorSignal;

/**
 * ...
 * @author Billyoyo
 */
class ListObject extends Object
{
    public static function objectInArray(obj:Object, arr:Array<Object>):Bool
    {
        for (other in arr) {
            if (obj.eq(other).rawBool()) return true;
        }
        return false;
    }
    
    public static function objectIndex(obj:Object, arr:Array<Object>):Int
    {
        for (i in 0...arr.length) {
            if (obj.eq(arr[i]).rawBool()) return i;
        }
        return -1;
    }

    public var arr:Array<Object> = new Array<Object>();
    public function _index(i:Int):Int
    {
        if (i < 0) return i + arr.length;
        return i;
    }
    
    override public function get(index:Object):Object 
    {
        if (hasMember("__get__")) return callMember("__get__", [index]);
        if (index.isInstance("SpliceType")) {
            var splice:SpliceValue = cast(index, SpliceObject).getValue(arr.length);
            var newArr:Array<Object> = new Array<Object>();
            var i:Int = splice.start;
            
            while (i < splice.end) {
                newArr.push(arr[i]);
                i += splice.step;
            }
            return _list(newArr);
        }
        var i:Int = _index(index.rawInt());
        if (i >= 0 && i < arr.length) {
            return arr[i];
        } else {
            throw new IndexOutOfBoundsSignal('Index $i is out of bounds, should be between 0 and ${arr.length}');
        }
    }
    
    override public function set(index:Object, obj:Object) 
    {
        if (hasMember("__set__")) { callMember("__set__", [index, obj]); return; }
        if (index.isInstance("SpliceType")) {
            var splice:SpliceValue = cast(index, SpliceObject).getValue(arr.length);
            var i:Int = splice.start; var j:Int = 0;
            while (i < splice.end) {
                arr[i] = obj.get(_int(j));
                i += splice.step; j++;
            }
            return;
        }
        var i:Int = _index(index.rawInt());
        if (i >= 0 && i < arr.length) {
            arr[i] = obj;
        } else {
            throw new IndexOutOfBoundsSignal('Index $i is out of bounds, should be between 0 and ${arr.length}');
        }
    }
    
    override public function delete(index:Object):Void 
    {
        if (hasMember("__delete__")) { callMember("__delete__", [index]); return; }
        if (index.isInstance("SpliceType")) {
            var splice:SpliceValue = cast(index, SpliceObject).getValue(arr.length);
            var i:Int = splice.start;
            while (i < splice.end) {
                arr = arr.splice(0, i).concat(arr.splice(i + 1, arr.length - (i + 1)));
                i += splice.step;
            }
            return;
        }
        var i:Int = _index(index.rawInt());
        if (i >= 0 && i < arr.length) {
            arr = arr.splice(0, i).concat(arr.splice(i + 1, arr.length - (i + 1)));
        } else {
            throw new IndexOutOfBoundsSignal('Index $i is out of bounds, should be between 0 and ${arr.length}');
        }
    }
    
    override public function add(other:Object):Object 
    {
        if (other.isInstance("ListType")) return _list(arr.concat(other.list().arr));
        else if (other.isInstance("TupleType")) return _list(arr.concat(other.tuple().arr));
        else if (other.hasMember("__iter__") || other.hasMember("__next__")) {
            if (!other.hasMember("__next__")) other = other.iter();
            var newArr:Array<Object> = arr.copy();
            while (other.hasNext().rawBool()) {
                newArr.push(other.next());
            }
            return _list(newArr);
        } else return _list(arr.concat([other]));
    }
    
    override public function mult(other:Object):Object 
    {
        if (hasMember("__mult__")) return callMember("__mult__", [other]);
        if (other.hasMember("__mult__")) other.mult(this);
        var result:Array<Object> = new Array<Object>();
        var arr:Array<Object> = other.list().arr;
        for (i in 0...other.rawInt()) {
            result = result.concat(arr);
        }
        return _list(result);
    }
    
    override public function div(other:Object):Object 
    {
        if (hasMember("__div__")) return callMember("__div__", [other]);
        if (other.hasMember("__rdiv__")) return other.rdiv(this);
        var div:Int = other.rawInt();
        var result:ListObject = cast(scope.getType("ListType").createObject(scope), ListObject);
        var arr:Array<Object> = result.getArray();
        for (i in 0...Math.ceil(this.arr.length / div)) {
            arr.push(_list(this.arr.slice(i * div, div)));
        }
        return result;
    }
    
    override public function len():IntObject 
    {
        if (hasMember("__len__")) return cast(callMember("__len__", []), IntObject);
        return _int(arr.length);
    }
    
    override public function iter():Object 
    {
        if (hasMember("__iter__")) return callMember("__iter__", []);
        return _iter(arr);
    }
    
    override public function isin(other:Object):Object 
    {
        if (hasMember("__isin__")) return callMember("__isin__", [other]);
        return _bool(objectInArray(other, arr));
    }
    
    override public function str():StringObject 
    {
        if (hasMember("__str__")) return cast(callMember("__str__", []), StringObject);
        return _str('$arr');
    }
    
    override public function tuple():TupleObject 
    {
        if (hasMember("__tuple__")) return cast(callMember("__tuple__", []), TupleObject);
        return _tuple(arr);
    }
    
    override public function list():ListObject 
    {
        if (hasMember("__list__")) return cast(callMember("__list__", []), ListObject);
        return this;
    }
    
    public function getArray():Array<Object>
    {
        return arr;
    }
}