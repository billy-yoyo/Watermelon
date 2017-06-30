package src.compiler.object.builtin;
import haxe.macro.Expr.FunctionArg;
import src.compiler.Scope;
import src.compiler.commands.Command;
import src.compiler.commands.FunctionCodeCommand;
import src.compiler.object.Object;
import src.compiler.object.builtin.FunctionArgument;
import src.compiler.signals.InvalidArgumentSignal;

/**
 * ...
 * @author Billyoyo
 */
class FunctionObject extends ValuedObject
{
    private var code:FunctionCode;
    private var positionalCollectorArg:FunctionArgument;
    private var keywordCollectorArg:FunctionArgument;
    override public function setup(code:Dynamic) 
    {
        this.code = code;
        
        verifyArgumentIntegrity();
    }
    
    public function getCode():FunctionCode
    {
        return code;
    }
    
    public function verifyArgumentIntegrity()
    {
        var stage:Int = 0;
        for (arg in code.args) {
            if (stage == 0) {
                if (arg.isCollector() && !arg.isKwd()) {
                    stage = 1;
                    positionalCollectorArg = arg;
                }
                else if (arg.isCollector() && arg.isKwd()) {
                    stage = 3;
                    keywordCollectorArg = arg;
                }
                else if (arg.isKwd()) stage = 2;
            } else if (stage == 1) {
                if (arg.isCollector() && !arg.isKwd()) throw "Two positional argument collectors";
                else if (arg.isCollector()) {
                    stage = 3;
                    keywordCollectorArg = arg;
                }
                else if (arg.isKwd()) stage = 2;
                else throw "Required positional argument after argument collector";
            } else if (stage == 2) {
                if (arg.isCollector() && !arg.isKwd()) throw "Positional argument collector after keyword argument";
                else if (arg.isCollector()) {
                    stage = 3;
                    keywordCollectorArg = arg;
                } else if (!arg.isKwd()) throw "Positional argument after keyword argument";
            } else if (stage == 3) {
                if (arg.isCollector() && !arg.isKwd()) throw "Positional argument collector after keyword argument collector";
                else if (arg.isCollector()) throw "Two keyword argument collectors";
                else if (arg.isKwd()) throw "Keyword argument after keyword argument collector";
                else throw "Positional argument after keyword argument collector";
            }
        }
    }
    
    private function findKwdArg(key:String):FunctionArgument
    {
        for (arg in code.args) {
            if (arg.getName() == key) return arg;
        }
        return null;
    }
    
    public function setFunctionArguments(fscope:Scope, arguments:Array<Object>):Void
    {
        var index:Int = 0; var posArg:FunctionArgument;
        var positional:Int = 0;
        
        var kwdCollector:MapObject = null;
        if (keywordCollectorArg != null) kwdCollector = cast(fscope.createObject("MapType", keywordCollectorArg.getName()), MapObject);
        
        var posCollector:ListObject = null;
        if (positionalCollectorArg != null) posCollector = cast(fscope.createObject("ListType", positionalCollectorArg.getName()), ListObject);
        
        for (arg in arguments) {
            if (arg.isInstance("PairType")) { // keyword
                var pair:PairObject = cast(arg, PairObject);
                var kwdArg:FunctionArgument = findKwdArg(pair.getName());
                var key:String = kwdArg.getName();
                if (kwdArg == null) {
                    if (kwdCollector != null) {
                        kwdCollector.set(_str(key), pair.getValue());
                    } else throw new InvalidArgumentSignal('Invalid keyword argument ${pair.getName()}');
                } else if (fscope.getVariables().exists(key)) throw new InvalidArgumentSignal('Keyword argument $key assigned twice (too many positional arguments?)');
                else {
                    fscope.setVariable(key, pair.getValue());
                }
            } else { // positional
                posArg = code.args[index];
                if (posArg == null) throw new InvalidArgumentSignal('Too many positional arguments');
                if (!posArg.isKwd()) positional++;
                if (posArg.isKwd() && posArg.isCollector()) throw new InvalidArgumentSignal('Too many positional arguments given, expected between $positional and ${index-1}');
                else if (posArg.isCollector()) {
                    posCollector.getArray().push(arg);
                } else {
                    fscope.setVariable(posArg.getName(), arg);
                    index++;
                }
            }
        }
        
        for (arg in code.args) {
            if (!fscope.hasVariable(arg.getName())) {
                if (arg.isKwd()) {
                    fscope.setVariable(arg.getName(), arg.getDefault());
                } else throw new InvalidArgumentSignal('Not enough positional arguments, expected ${code.positional}, was given $positional');
            }
        }
    }
    
    override public function call(arguments:Array<Object>):Object
    {
        if (hasMember("__bound__")) arguments.insert(0, getMember("__bound__"));
        setFunctionArguments(code.code.getScope(), arguments);
        
        var object:Object = code.code.run();
        
        //fscope.reset();
        //fscope = new Scope(code.code.getName(), fscope.getParent());
        //code.code.getScope().reset();
        code.code = code.code.copy(new Scope(code.code.getScope().getName(), code.code.getScope().getParent()));
        //code.code = new FunctionCodeCommand(new Scope(code.code.getScope().getName(), code.code.getScope().getParent()), cast(code.code, FunctionCodeCommand).commands);
        return object;
    }
    
}