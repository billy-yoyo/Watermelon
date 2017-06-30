package src.compiler.object.builtin.coroutine;
import src.compiler.Scope;
import src.compiler.commands.coroutine.CoroutineCodeCommand;
import src.compiler.object.Object;
import src.compiler.object.builtin.FunctionObject;

/**
 * ...
 * @author Billyoyo
 */
class CoroutineFunctionObject extends FunctionObject
{
    
    override public function call(arguments:Array<Object>):Object 
    {
        var cscope:Scope = new Scope(scope.nextCoroScopeName(), scope);
        if (hasMember("__bound__")) arguments.insert(0, getMember("__bound__"));
        setFunctionArguments(cscope, arguments);
        
        var source:CoroutineObject = scope.getClosestCoroutine();
        var loop:CoroutineLoop = null;
        if (source != null) {
            loop = source.getLoop();
        }
        
        var coro:CoroutineObject = new CoroutineObject(scope, scope.getType("CoroutineType"), null, loop, cast(code.code, CoroutineCodeCommand), cscope);
        cscope.coroutineObject = coro;
        return coro;
    }
}