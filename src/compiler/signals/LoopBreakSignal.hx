package src.compiler.signals;

/**
 * ...
 * @author Billyoyo
 */
class LoopBreakSignal extends ExitSignal
{
    override public function new() {
        super("");
    }
    
    override public function getName():String 
    {
        return "LoopBreakSignal";
    }
}