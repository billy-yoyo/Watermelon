package src.compiler.object.builtin;
import src.compiler.signals.IndexOutOfBoundsSignal;
import src.compiler.signals.ValueErrorSignal;

/**
 * ...
 * @author Billyoyo
 */
class SpliceObject extends Object
{
    public var start:Int;
    public var end:Int;
    public var step:Int;
    public var startDefined:Bool;
    public var endDefined:Bool;
    public var stepDefined:Bool;
    override public function new(scope:Scope, type:ObjectType, start:Int, end:Int, step:Int, startDefined:Bool, endDefined:Bool, stepDefined:Bool)
    {
        super(scope, type, null, null);
        this.start = start;
        this.end = end;
        this.step = step;
        this.startDefined = startDefined;
        this.endDefined = endDefined;
        this.stepDefined = stepDefined;
    }
    
    public function getValue(length:Int):SpliceValue
    {
        var start:Int = this.start; var end:Int = this.end; var step:Int = this.step;
        if (!startDefined) {
            if (step > 0) start = 0;
            else start = -length;
        }
        if (start < 0) start += length;
        if (start < 0 || start >= length) throw new IndexOutOfBoundsSignal('Index $start out of bounds, should be between 0 and $length');
        
        if (!endDefined) {
            if (step > 0) end = length;
            else end = 0;
        }
        if (end < 0) end += length;
        if (end < 0 || end > length) throw new IndexOutOfBoundsSignal('Index $end out of bounds, should be between 0 and ${length+1}');
        
        if (!stepDefined) {
            if (end > start) step = 1;
            else step = -1;
        }
        
        if (start < end && step < 1) throw new ValueErrorSignal("Invalid splice, start is less than end and the step is negative");
        if (start > end && step > 1) throw new ValueErrorSignal("Invalid splice, start is greater than end and step is positive");
        return new SpliceValue(start, end, step);
    }
}