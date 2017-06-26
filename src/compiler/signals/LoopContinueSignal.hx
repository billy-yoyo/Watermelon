package src.compiler.signals;

/**
 * ...
 * @author Billyoyo
 */
class LoopContinueSignal extends ExitSignal
{
    override public function new() {
        super("");
    }
    
    override public function getName():String 
    {
        return "LoopContinueSignal";
    }
}