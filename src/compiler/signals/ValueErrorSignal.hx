package src.compiler.signals;

/**
 * ...
 * @author Billyoyo
 */
class ValueErrorSignal extends ExitSignal
{
    override public function getName():String 
    {
        return "ValueErrorSignal";
    }
}