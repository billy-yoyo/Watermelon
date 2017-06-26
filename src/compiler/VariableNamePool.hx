package src.compiler;
import src.compiler.object.Object;

/**
 * ...
 * @author Billyoyo
 */
class VariableNamePool
{
    private static var alphabet:String = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_";

    private var pool:Map<String, String> = new Map<String, String>();
    private var last:Int = 0;
    public function new() 
    {
        throw "Not in use";
    }
    
    public static function nameFromID(id:Int):String
    {
        throw "Not in use";
        var char:Int;
        var s:String = "";
        while (true) {
            char = id % alphabet.length;
            id = Math.floor(id / alphabet.length);
            s += alphabet.charAt(char);
            if (id == 0) break;
            id--;
        }
        return s;
    }
    
    public static function idFromName(name:String):Int
    {
        throw "Not in use";
        var i:Int = alphabet.indexOf(name.charAt(0));
        var pow:Int = alphabet.length;
        for (n in 1...name.length) {
            i += (alphabet.indexOf(name.charAt(n)) + 1) * pow;
            pow *= alphabet.length;
        }
        return i;
    }
    
    public function nextName():String
    {
        return nameFromID(last++);
    }
    
    public function getName(variable:String):String // eg root.example.x
    {
        throw "Not in use";
        var path:Array<String> = variable.split(".");
        var name:String = path.pop(); var absName:String;
        while (path.length > 0) {
            absName = path.join(".") + "." + name;
            if (pool.exists(absName)) return pool.get(absName);
            path.pop();
        }
        if (pool.exists(name)) return pool.get(name);
        
        return newName(variable);
    }
    
    public function newName(variable:String):String
    {
        throw "Not in use";
        var next:String = nextName();
        trace('assigned value $variable to $next');
        pool.set(variable, next);
        return next;
    }
    
    public function add(variable:String, name:String)
    {
        throw "Not in use";
        pool.set(variable, name);
    }
    
    public function getVariable(name:String)
    {
        throw "Not in use";
        for (variable in pool.keys()) {
            if (pool.get(variable) == name) return variable;
        }
        return null;
    }
    
}