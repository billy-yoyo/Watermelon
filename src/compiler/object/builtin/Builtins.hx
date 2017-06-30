package src.compiler.object.builtin;
import src.compiler.Scope;
import src.compiler.object.Object;
import src.compiler.object.builtin.BoolObject;
import src.compiler.object.builtin.ListObject;
import src.compiler.object.ObjectType;
import src.compiler.object.builtin.coroutine.CoroutineFunctionObject;
import src.compiler.object.builtin.coroutine.CoroutineLoop;
import src.compiler.object.builtin.coroutine.CoroutineObject;
import src.compiler.object.builtin.coroutine.YieldObject;
import src.compiler.signals.ExitCodeSignal;
import src.compiler.signals.InvalidArgumentSignal;
import src.compiler.signals.ValueErrorSignal;

/**
 * ...
 * @author Billyoyo
 */
class Builtins
{
    
    public var builtinFuncType:ObjectType;
    public var functionType:ObjectType;
    public var listType:ObjectType;
    public var tupleType:ObjectType;
    public var mapType:ObjectType;
    public var stringType:ObjectType;
    public var intType:ObjectType;
    public var floatType:ObjectType;
    public var boolType:ObjectType;
    public var noneType:ObjectType;
    public var objTypeType:ObjectType;
    public var pairType:ObjectType;
    public var iteratorType:ObjectType;
    public var bytesType:ObjectType;
    public var spliceType:ObjectType;
    public var moduleType:ObjectType;
    public var signalType:ObjectType;
    public var coroType:ObjectType;
    public var coroFuncType:ObjectType;
    public var coroLoopType:ObjectType;
    public var yieldType:ObjectType;
    
    public var types:Array<ObjectType>;
    public var objects:Map<String, Object>;
    
    private var root:Scope;
    public function new(scope:Scope) {
        root = scope.getRoot();
        
        init();
    }
    
    public function init() {
        builtinFuncType = new ObjectType(root, "BuiltinFunctionType", null, BuiltinFunction);
        functionType = new ObjectType(root, "FunctionType", null, FunctionObject);
        listType = new ObjectType(root, "ListType", [
            "append" => builtinFuncType.createValue(function(args:Array<Object>):Object {
                var obj:ListObject = cast(args.shift(), ListObject);
                if (args.length == 0) throw "Not enough arguments";
                else if (args.length > 1) throw "Too many arguments";
                else {
                    obj.arr.push(args[0]);
                }
                return null;
            }, root),
            "remove" => builtinFuncType.createValue(function(args:Array<Object>):Object {
                var obj:ListObject = cast(args.shift(), ListObject);
                if (args.length == 0) throw "Not enough arguments";
                else if (args.length > 1) throw "Too many arguments";
                else {
                    obj.arr.remove(args[0]);
                }
                return null;
            }, root)
        ], ListObject);
        tupleType = new ObjectType(root, "TupleType", null, TupleObject);
        mapType = new ObjectType(root, "MapType", null, MapObject);
        stringType = new ObjectType(root, "StringType", null, StringObject);
        intType = new ObjectType(root, "IntType", null, IntObject);
        floatType = new ObjectType(root, "FloatType", null, FloatObject);
        boolType = new ObjectType(root, "BoolType", null, BoolObject);
        noneType = new ObjectType(root, "NoneType", null, NoneObject);
        objTypeType = new ObjectType(root, "ObjectTypeType", null, ObjectTypeObject);
        pairType = new ObjectType(root, "PairType", [
            "name" => builtinFuncType.createValue(function(args:Array<Object>):Object {
                var pair:PairObject = cast(args.shift(), PairObject);
                if (args.length > 0) throw new InvalidArgumentSignal('Expected 0 arguments, found ${args.length}');
                return pair._str(pair.getName());
            }, root),
            "value" => builtinFuncType.createValue(function(args:Array<Object>):Object {
                var pair:PairObject = cast(args.shift(), PairObject);
                if (args.length > 0) throw new InvalidArgumentSignal('Expected 0 arguments, found ${args.length}');
                return pair.getValue();
            }, root)
        ], PairObject);
        iteratorType = new ObjectType(root, "IteratorType", null, IteratorObject);
        bytesType = new ObjectType(root, "BytesType", null, BytesObject);
        spliceType = new ObjectType(root, "SpliceType", null, SpliceObject);
        moduleType = new ObjectType(root, "ModuleType", null, ModuleObject);
        signalType = new ObjectType(root, "SignalType", null, SignalObject);
        coroType = new ObjectType(root, "CoroutineType", null, CoroutineObject);
        coroFuncType = new ObjectType(root, "CoroutineFunctionType", null, CoroutineFunctionObject);
        coroLoopType = new ObjectType(root, "CoroutineLoopType", [
            "start" => builtinFuncType.createValue(function(args:Array<Object>):Object {
                var loop:CoroutineLoop = cast(args.shift(), CoroutineLoop);
                for (arg in args) {
                    if (!arg.isInstance("CoroutineType")) throw new ValueErrorSignal("Can only start a loop with coroutines");
                    loop.startTask(cast(arg, CoroutineObject));
                }
                loop.start();
                return null;
            }, root)
        ], CoroutineLoop);
        yieldType = new ObjectType(root, "CoroutineYieldType", null, YieldObject);
        
        types = [builtinFuncType, functionType, listType, tupleType, mapType, stringType, 
                 intType, floatType, boolType, noneType, objTypeType, pairType, iteratorType,
                 bytesType, spliceType, moduleType, signalType, coroType, coroFuncType, coroLoopType, yieldType];
    
        objects = [
            "print" => builtinFuncType.createValue(function(args:Array<Object>):Object {
                var words:Array<String> = new Array<String>();
                for (obj in args) words.push(if(obj == null) "null" else obj.rawString());
                Watermelon.print(words.join(" "));
                return null;
            }, root),
            "range" => builtinFuncType.createValue(function(args:Array<Object>):Object {
                var start:Object = intType.createValue(0, root); var end:Object = intType.createValue(0, root); var step:Object = intType.createValue(1, root);
                if (args.length == 1) {
                    end = args[0];
                } else if (args.length == 2) {
                    start = args[0];
                    end = args[1];
                } else if (args.length == 3) {
                    start = args[0];
                    end = args[1];
                    step = args[2];
                } else throw new InvalidArgumentSignal('Expected between 1 and 3 arguments, found ${args.length}');
                if (start.isInstance("IntType") && end.isInstance("IntType") && step.isInstance("IntType")) {
                    return new IntRangeObject(start.getScope(), iteratorType, start.rawInt(), end.rawInt(), step.rawInt());
                } else {
                    return new RangeObject(start.getScope(), iteratorType, start.rawFloat(), end.rawFloat(), step.rawFloat());
                }
            }, root),
            "exit" => builtinFuncType.createValue(function(args:Array<Object>):Object {
                throw new ExitCodeSignal();
            }, root)
        ];
    }

    
}

class IntRangeObject extends Object
{
    private var start:Int;
    private var end:Int;
    private var step:Int;
    private var progress:Int;
    override public function new(scope:Scope, type:ObjectType, start:Int, end:Int, step:Int)
    {
        super(scope, type, null, null);
        this.start = start;
        this.end = end;
        this.step = step;
        this.progress = start;
    }
    
    override public function next():Object 
    {
        var last:Int = progress;
        progress = progress + step;
        return _int(last);
    }
    
    override public function hasNext():BoolObject 
    {
        return _bool(progress < end);
    }
}

