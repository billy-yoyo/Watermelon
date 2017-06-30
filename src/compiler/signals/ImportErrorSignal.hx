package src.compiler.signals;

/**
 * ...
 * @author Billyoyo
 */
class ImportErrorSignal extends ExitSignal
{
    override public function getName():String 
    {
        return "ImportErrorSignal";
    }
}