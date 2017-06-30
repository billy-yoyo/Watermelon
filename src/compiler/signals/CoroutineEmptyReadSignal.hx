package src.compiler.signals;

/**
 * ...
 * @author Billyoyo
 */
class CoroutineEmptyReadSignal extends ExitSignal
{
    override public function getName():String 
    {
        return "CoroutineEmptyReadSignal";
    }
}