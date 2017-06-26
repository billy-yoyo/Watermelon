package src.compiler.object.builtin;
import src.ast.GlobalProcessor;
import src.ast.Token;
import src.compiler.Scope;
import src.compiler.commands.value.ListValueCommand;
import src.compiler.commands.value.MapValueCommand;
import src.compiler.commands.value.TupleValueCommand;
import src.compiler.object.Object;
import src.compiler.object.ObjectType;
import src.compiler.object.builtin.IntObject;
import src.compiler.object.builtin.ListObject;

/**
 * ...
 * @author Billyoyo
 */
class StringObject extends ValuedObject
{
    
    private var value:String;
    override public function setup(value:Dynamic) 
    {
        this.value = value;
    }
    
    public function getValue():String
    {
        return value;
    }
    
    override public function get(index:Object):Object 
    {
        if (hasMember("__get__")) return callMember("__get__", [index]);
        return _str(value.charAt(index.rawInt()));
    }
    
    override public function bool():BoolObject
    {
        if (hasMember("__bool__")) return cast(callMember("__bool__", []), BoolObject);
        var b:Bool = if (value == "true") true else false;
        if (!b && value != "false") throw "String doesn't represent a bool";
        return _bool(b);
    }
    
    override public function float():FloatObject
    {
        if (hasMember("__float__")) return cast(callMember("__float__", []), FloatObject);
        return _float(Std.parseFloat(value));
    }
    
    override public function int():IntObject
    {
        if (hasMember("__int__")) return cast(callMember("__int__", []), IntObject);
        return _int(Std.parseInt(value));
    }
    
    override public function list():ListObject 
    {
        if (hasMember("__list__")) return cast(callMember("__list__", []), ListObject);
        var tokens:Array<Token> = GlobalProcessor.process(value).content;
        var listCmd:ListValueCommand = ListValueCommand.fromTokens(scope, tokens);
        return cast(listCmd.run(), ListObject);
    }
    
    override public function tuple():TupleObject 
    {
        if (hasMember("__tuple__")) return cast(callMember("__tuple__", []), TupleObject);
        var tokens:Array<Token> = GlobalProcessor.process(value).content;
        var listCmd:TupleValueCommand = TupleValueCommand.fromTokens(scope, tokens);
        return cast(listCmd.run(), TupleObject);
    }
    
    override public function map():MapObject 
    {
        if (hasMember("__map__")) return cast(callMember("__map__", []), MapObject);
        var tokens:Array<Token> = GlobalProcessor.process(value).content;
        var listCmd:MapValueCommand = MapValueCommand.fromTokens(scope, tokens);
        return cast(listCmd.run(), MapObject);
    }
    
    override public function len():IntObject 
    {
        if (hasMember("__len__")) return cast(callMember("__len__", []), IntObject);
        return _int(value.length);
    }
    
    override public function eq(other:Object):Object 
    {
        if (hasMember("__eq__")) return callMember("__eq__", [other]);
        return _bool(other.rawString() == rawString());
    }
    
    override public function neq(other:Object):Object 
    {
        if (hasMember("__neq__")) return callMember("__neq__", [other]);
        return _bool(other.rawString() != rawString());
    }
    
    override public function add(other:Object):Object 
    {
        if (hasMember("__add__")) return callMember("__add__", [other]);
        if (!other.hasMember("__add__")) return _str(rawString() + other.rawString());
        else return other.add(this);
    }
    
    override public function mult(other:Object):Object 
    {
        if (hasMember("__mult__")) return callMember("__mult__", [other]);
        if (other.hasMember("__mult__")) other.mult(this);
        var s:String = rawString();
        var result:String = "";
        for (i in 0...other.rawInt()) {
            result = result + s;
        }
        return _str(result);
    }
    
    override public function div(other:Object):Object 
    {
        if (hasMember("__div__")) return callMember("__div__", [other]);
        if (other.hasMember("__rdiv__")) return other.rdiv(this);
        var s:String = rawString();
        var div:Int = other.rawInt();
        var result:ListObject = cast(scope.getType("ListType").createObject(), ListObject);
        var arr:Array<Object> = result.getArray();
        for (i in 0...Math.ceil(s.length / div)) {
            arr.push(_str(s.substr(i * div, div)));
        }
        return result;
    }
    
    override public function str():StringObject
    {
        if (hasMember("__str__")) return cast(callMember("__str__", []), StringObject);
        return this;
    }
    
    override public function getHash():String 
    {
        return value;
    }
}