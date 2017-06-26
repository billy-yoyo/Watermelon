package src.compiler.signals;
import src.compiler.object.Object;

/**
 * ...
 * @author Billyoyo
 */
class FunctionReturnSignal extends ExitSignal
{

    private var obj:Object;
    public function new(obj:Object) 
    {
        super("returned");
        this.obj = obj;
    }
    
    public function getReturn()
    {
        return obj;
    }
    
    override public function getName():String 
    {
        return "FunctionReturnSignal";
    }
    
}