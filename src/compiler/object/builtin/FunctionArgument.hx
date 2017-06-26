package src.compiler.object.builtin;
import src.compiler.object.Object;

/**
 * ...
 * @author Billyoyo
 */
class FunctionArgument
{

    private var name:String;
    private var kwd:Bool;
    private var collector:Bool;
    private var _default:Object = null;
    public function new(name:String, kwd:Bool, collector:Bool, ?_default:Object) 
    {
        this.name = name;
        this.kwd = kwd;
        this.collector = collector;
        this._default = _default;
    }
    
    public function getDefault():Object
    {
        return _default;
    }
    
    public function getName():String
    {
        return name;
    }
    
    public function isKwd():Bool
    {
        return kwd;
    }
    
    public function isCollector():Bool
    {
        return collector;
    }
    
}