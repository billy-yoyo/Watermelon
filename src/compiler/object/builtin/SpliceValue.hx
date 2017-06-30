package src.compiler.object.builtin;

/**
 * ...
 * @author Billyoyo
 */
class SpliceValue
{

    public var start:Int;
    public var end:Int;
    public var step:Int;
    public function new(start:Int, end:Int, step:Int) 
    {
        this.start = start;
        this.end = end;
        this.step = step;
    }
    
    public function toString()
    {
        return '$start:$end:$step';
    }
}