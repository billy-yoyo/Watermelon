package src.compiler.signals;

/**
 * ...
 * @author Billyoyo
 */
class ExitCodeSignal extends ExitSignal
{
    override public function new()
    {
        super("");
    }
    
    override public function getName():String 
    {
        return "ExitCodeSignal";
    }
}