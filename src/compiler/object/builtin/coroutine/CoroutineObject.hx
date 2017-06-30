package src.compiler.object.builtin.coroutine;
import src.compiler.Scope;
import src.compiler.commands.coroutine.CoroutineCodeCommand;
import src.compiler.object.Object;
import src.compiler.object.ObjectType;
import src.compiler.signals.CoroutineEmptyReadSignal;
import src.compiler.signals.ValueErrorSignal;
import src.compiler.signals.YieldSignal;

/**
 * ...
 * @author Billyoyo
 */
class CoroutineObject extends Object
{
    public static var emptyPacketType:ObjectType = new ObjectType(null, "EmptyPacketType", null);
    /*
     *   Four types of interaction:
     *       coro :> value   (read a value from the coroutine)
     *       ? :> value      (read a value from any coroutine)
     *       value :> coro   (write a value to a coroutine)
     *       value :> ?      (write a value to any coroutine)
     */
    
    public var inputStack:Array<CoroutinePacket>;
    public var outputStack:Array<CoroutinePacket>;
    
    private var readingFrom:CoroutineObject;
    private var reading:Bool;
    private var vars:Array<String>;
    
    private var writingTo:CoroutineObject;
    private var writing:Bool;
    private var values:Array<Object>;
    private var waitForRead:CoroutinePacket;
    
    private var wildcardName:String;
    
    private var timeLock:Float;
    private var locked:Bool;
    private var finished:Bool;
    private var queued:Bool;
    
    private var loop:CoroutineLoop;
    private var code:CoroutineCodeCommand;
    
    override public function new(scope:Scope, type:ObjectType, members:Map<String, Object>, loop:CoroutineLoop, code:CoroutineCodeCommand, codeScope:Scope, ?args:Array<Object>)
    {
        super(scope, type, members, args);
        this.loop = loop;
        this.code = code.copy(codeScope);
        inputStack = new Array<CoroutinePacket>();
        outputStack = new Array<CoroutinePacket>();
        readingFrom = null;
        reading = false;
        timeLock = 0;
        locked = false;
        writing = false;
        values = new Array<Object>();
        writingTo = null;
        waitForRead = null;
        vars = new Array<String>();
        wildcardName = null;
        finished = false;
        queued = false;
    }
    
    public function addVars(vars:Array<String>)
    {
        for (v in vars) this.vars.push(v);
    }
    
    override public function setScope(scope:Scope) 
    {
        super.setScope(scope);
        var source:CoroutineObject = scope.getClosestCoroutine();
        if (source != null) {
            loop = source.getLoop();
        }
    }
    
    public function getLoop():CoroutineLoop
    {
        return loop;
    }
    
    public function setLoop(loop:CoroutineLoop):Void
    {
        this.loop = loop;
    }
    
    public function isFinished():Bool
    {
        return finished;
    }
    
    public function startTimeLock(delay:Float)
    {
        this.timeLock = Sys.time() + delay;
        this.locked = true;
    }
    
    public function isQueued():Bool 
    {
        return queued;
    }
    
    public function queue()
    {
        if (loop == null) throw new ValueErrorSignal("Coroutine queued before being assigned a loop, can only read from coroutines inside other coroutines!");
        loop.startTask(this);
        queued = true;
    }
    
    public function startRead(vars:Array<String>, from:CoroutineObject, wildcard:String)
    {
        this.vars = vars;
        this.readingFrom = from;
        this.wildcardName = wildcard;
        this.reading = true;
        if (from != null && !from.isQueued()) from.queue();
    }
    
    public function writeObject(obj:Object):CoroutinePacket
    {
        var packet:CoroutinePacket = new CoroutinePacket(obj, this);
        outputStack.push(packet);
        packet.setTime();
        //trace('writing packet $packet');
        return packet;
    }
    
    public function writeObjectToCoro(obj:Object, coro:CoroutineObject):CoroutinePacket
    {
        var packet:CoroutinePacket = new CoroutinePacket(obj, this);
        coro.inputStack.push(packet);
        packet.setTime();
        //trace('writing packet $packet to $coro');
        return packet;
    }
    
    public function readObject():CoroutinePacket
    {
        var packet:CoroutinePacket = inputStack.shift();
        packet.readBy = this;
        //trace('read packet $packet');
        return packet;
    }
    
    public function readObjectFromCoro(coro:CoroutineObject):CoroutinePacket
    {
        var packet:CoroutinePacket = coro.outputStack.shift();
        packet.readBy = this;
        //trace('read packet $packet');
        return packet;
    }
    
    public function check():Bool
    {
        if (locked) {
            if (Sys.cpuTime() < timeLock) return false; // still time locked
            else {
                locked = false;
                timeLock = 0;
            }
        }
        if (reading) {
            var packet:CoroutinePacket = null;
            if (readingFrom == null && inputStack.length > 0) {
                packet = readObject();
            } else if (readingFrom != null) {
                var recentInput:CoroutinePacket = null;
                for (inp in inputStack) {
                    if (inp.source == readingFrom) {
                        recentInput = inp;
                        break;
                    }
                }
                var recentOutput:CoroutinePacket = null;
                if (readingFrom.outputStack.length > 0) recentOutput = readingFrom.outputStack[0];
                
                if (recentInput == null && recentOutput == null) {
                    if (readingFrom.isFinished()) {
                        packet = new CoroutinePacket(emptyPacketType.createObject(scope), readingFrom);
                        packet.setTime();
                        packet.readBy = this;
                        //throw new CoroutineEmptyReadSignal("Read too many values from coroutine");
                    } else return false;
                }
                else if (recentInput == null) {
                    packet = readObjectFromCoro(readingFrom);
                } else if (recentOutput == null || recentInput.sent < recentOutput.sent) {
                    inputStack.remove(recentInput);
                    recentInput.readBy = this;
                    packet = recentInput;
                } else { // recentOutput.sent < recentInput.sent
                    packet = readObjectFromCoro(readingFrom);
                }
            } else {
                return false; // need to wait longer
            }
            
            if (vars.length > 0) {
                var name:String = vars.shift();
                this.code.getScope().setVariable(name, packet.object);
                if (readingFrom == null && wildcardName != null && wildcardName != "") {
                    this.code.getScope().setVariable(wildcardName, packet.source);
                }
            }
            if (vars.length > 0) {
                return false; // more variables to read
            }
            reading = false;
            readingFrom = null;
            wildcardName = null;
        }
        if (writing) {
            //trace('writing');
            if (waitForRead == null) {
                if (writingTo == null) {
                    if (wildcardName != null) {
                        if (values.length > 1) throw new ValueErrorSignal("Can only wait for a single value to be read");
                        if (values.length == 0) waitForRead = writeObject(null);
                        else waitForRead = writeObject(values[0]);
                        return false;
                    } else {
                        if (values.length == 0) writeObject(null);
                        else {
                            for (value in values) writeObject(value);
                        }
                        writing = false;
                        values = new Array<Object>();
                    }
                } else {
                    for (value in values) writeObjectToCoro(value, writingTo);
                    writing = false;
                    writingTo = null;
                    values = new Array<Object>();
                }
            } else if (wildcardName == null) {
                writing = false;
                waitForRead = null;
                values = new Array<Object>();
            } else {
                if (waitForRead.readBy != null) { // packet was read, set wildcard to source
                    if (wildcardName != "") this.code.getScope().setVariable(wildcardName, waitForRead.readBy);
                    writing = false;
                    waitForRead = null;
                    values = new Array<Object>();
                    writingTo = null;
                } else return false; // still waiting for packet to be read
            }
        }
        
        var rawResult:Object = this.code.run();
        //trace('got result: $rawResult');
        if (rawResult == null) {
            //trace('coroutine finished, output: $outputStack');
            finished = true;
            return true; // returned or finished
        }
        else { // more code left to run, wait to read the yield
            var result:YieldSignal = cast(rawResult, YieldObject).yield;
            if (result.isTimeLocked) {
                timeLock = Sys.cpuTime() + result.timeLock;
                locked = true;
                //trace('locking until $timeLock (current time: ${Sys.time()})');
            }
            wildcardName = result.wildcard;
            if (result.isRead) {
                reading = true;
                readingFrom = result.coro;
                vars = result.vars;
            } else {
                writing = true;
                writingTo = result.coro;
                values = result.values;
            }
            return false;
        }
    }
    
}