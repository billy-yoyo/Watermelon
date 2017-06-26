package src.compiler.signals;

/**
 * ...
 * @author Billyoyo
 */
class InvalidArgumentSignal extends ExitSignal
{
    override public function getName():String 
    {
        return "InvalidArgumentSignal";
    }
}