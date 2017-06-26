package src.compiler.signals;

/**
 * ...
 * @author Billyoyo
 */
class ExitSignal
{   
    public var msg:String;
    public function new(msg:String)
    {
        this.msg = msg;
    }
    
    public function getName():String
    {
        return "ExitSignal";
    }
    
}