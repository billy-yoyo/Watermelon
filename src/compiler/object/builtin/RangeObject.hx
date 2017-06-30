package src.compiler.object.builtin;

/**
 * ...
 * @author Billyoyo
 */
class RangeObject extends Object
{
    private var start:Float;
    private var end:Float;
    private var step:Float;
    private var progress:Float;
    override public function new(scope:Scope, type:ObjectType, start:Float, end:Float, step:Float)
    {
        super(scope, type, null, null);
        this.start = start;
        this.end = end;
        this.step = step;
    }
    
    override public function next():Object 
    {
        var last:Float = progress;
        progress = progress + step;
        return _float(last);
    }
    
    override public function hasNext():BoolObject 
    {
        return _bool(progress < end);
    }
}