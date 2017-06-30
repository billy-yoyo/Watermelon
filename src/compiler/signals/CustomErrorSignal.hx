package src.compiler.signals;
import src.compiler.object.Object;

/**
 * ...
 * @author Billyoyo
 */
class CustomErrorSignal extends ExitSignal
{
    
    public var source:Object;
    public function new(obj:Object) 
    {
        super("");
        this.source = obj;
    }
    
    override public function getName():String 
    {
        return "CustomErrorSignal";
    }
}