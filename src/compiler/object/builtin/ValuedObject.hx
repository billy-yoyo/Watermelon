package src.compiler.object.builtin;
import src.compiler.Scope;
import src.compiler.object.Object;
import src.compiler.object.ObjectType;

/**
 * ...
 * @author Billyoyo
 */
class ValuedObject extends Object
{
    
    private var __initValue:Dynamic;
    public function new(scope:Scope, type:ObjectType, members:Map<String, Object>, value:Dynamic, ?args:Array<Object>) 
    {
        this.__initValue = value;
        super(scope, type, members, args);
        setup(value);
    }
    
    public function getInitVar():Dynamic
    {
        return __initValue;
    }
    
    override public function init(args:Array<Object>):Void 
    {
        if (args.length == 1) {
            var arg:ValuedObject = cast(args[0], ValuedObject);
            setup(arg.getInitVar());
        }
    }
    
    public function setup(value:Dynamic)
    {
        return;
    }
    
    override public function copy():Object 
    {
        return this;
    }
    
}