package src.compiler.signals;
import src.compiler.object.Object;
import src.compiler.object.builtin.coroutine.CoroutineObject;

/**
 * ...
 * @author Billyoyo
 */
class YieldSignal extends ExitSignal
{
    
    public static function readYield(readFrom:CoroutineObject, vars:Array<String>, wildcard:String, ?timeLock:Float)
    {
        return new YieldSignal(true, readFrom, vars, null, wildcard, timeLock);
    }
    
    public static function writeYield(writeTo:CoroutineObject, values:Array<Object>, wildcard:String, ?timeLock:Float)
    {
        return new YieldSignal(false, writeTo, null, values, wildcard, timeLock);
    }

    public var coro:CoroutineObject;
    public var vars:Array<String>;
    public var values:Array<Object>;
    public var wildcard:String;
    public var isTimeLocked:Bool;
    public var timeLock:Float;
    public var isRead:Bool;
    public function new(isRead:Bool, coro:CoroutineObject, vars:Array<String>, values:Array<Object>, wildcard:String, ?timeLock:Float) 
    {
        super("");
        this.isRead = isRead;
        this.coro = coro;
        this.vars = vars;
        this.values = values;
        this.wildcard = wildcard;
        if (timeLock == null) {
            this.isTimeLocked = false;
            this.timeLock = 0;
        } else {
            this.isTimeLocked = true;
            this.timeLock = timeLock;
        }
    }
    
    override public function getName():String 
    {
        return "YieldSignal";
    }
    
    public function toString():String
    {
        if (isRead) {
            return 'read yield, source: $coro, vars: $vars, wildcard: $wildcard, timelock: $timeLock (is timelocked: $isTimeLocked)';
        } else {
            return 'write yield, target: $coro, values: $values, wildcard: $wildcard, timelock: $timeLock (is timelocked: $isTimeLocked)';
        }
    }
}