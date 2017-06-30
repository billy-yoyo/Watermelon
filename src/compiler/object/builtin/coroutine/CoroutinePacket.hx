package src.compiler.object.builtin.coroutine;
import src.compiler.object.Object;

/**
 * ...
 * @author Billyoyo
 */
class CoroutinePacket
{

    public var object:Object;
    public var source:CoroutineObject;
    public var readBy:CoroutineObject;
    public var sent:Float;
    public function new(object:Object, source:CoroutineObject) 
    {
        this.object = object;
        this.source = source;
        this.readBy = null;
        this.sent = 0;
    }
    
    public function setTime()
    {
        this.sent = Sys.cpuTime();
    }
    
}