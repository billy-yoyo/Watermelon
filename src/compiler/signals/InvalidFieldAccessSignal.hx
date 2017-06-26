package src.compiler.signals;

/**
 * ...
 * @author Billyoyo
 */
class InvalidFieldAccessSignal extends ExitSignal
{
    override public function getName():String 
    {
        return "InvalidFieldAccessSignal";
    }
    
}