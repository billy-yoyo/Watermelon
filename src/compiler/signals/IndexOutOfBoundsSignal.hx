package src.compiler.signals;

/**
 * ...
 * @author Billyoyo
 */
class IndexOutOfBoundsSignal extends ExitSignal
{   
    override public function getName():String 
    {
        return "IndexOutOfBoundsSignal";
    }
}