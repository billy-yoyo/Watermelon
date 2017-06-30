package src.compiler.object.builtin.coroutine;
import src.compiler.object.Object;
import src.compiler.signals.ValueErrorSignal;

/**
 * ...
 * @author Billyoyo
 */
class CoroutineLoop extends Object
{
    
    private var queue:Array<CoroutineObject> = new Array<CoroutineObject>();
    override public function init(args:Array<Object>):Void 
    {
        for (obj in args) {
            if (!obj.isInstance("CoroutineType")) throw new ValueErrorSignal("Loop can only be started with coroutines");
            startTask(cast(obj, CoroutineObject));
        }
    }
    
    public function startTask(coro:CoroutineObject)
    {
        queue.push(coro);
        if (coro.getLoop() != null && coro.getLoop() != this) throw new ValueErrorSignal("Coroutine already belongs to another loop");
        else if (coro.getLoop() == null) coro.setLoop(this);
        //trace('started task $coro');
    }
    
    public function start():Void
    {
        trace('starting with ${queue.length} coroutines');
        var i:Int; var coro:CoroutineObject;
        while (queue.length > 0) {
            i = 0;
            while (i < queue.length) {
                coro = queue[i];
                if (coro.check()) { // coro finished
                    queue.remove(coro);
                } else i++;
            }
        }
    }
    
    public function startWithGlobalLock(lock:Float)
    {
        var i:Int; var coro:CoroutineObject;
        while (queue.length > 0) {
            i = 0;
            while (i < queue.length) {
                coro = queue[i];
                if (coro.check()) { // coro finished
                    queue.remove(coro);
                } else i++;
            }
            Sys.sleep(lock);
        }
    }
}