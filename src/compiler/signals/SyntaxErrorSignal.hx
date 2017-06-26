package src.compiler.signals;

/**
 * ...
 * @author Billyoyo
 */
class SyntaxErrorSignal extends ExitSignal
{
    override public function getName():String 
    {
        return "SyntaxErrorSignal";
    }
}