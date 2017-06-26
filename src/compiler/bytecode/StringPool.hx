package src.compiler.bytecode;
import src.compiler.commands.Command;
import src.compiler.commands.RootCommand;
import src.compiler.commands.value.LiteralValueCommand;
import src.compiler.commands.value.ObjectValueCommand;
import src.compiler.commands.value.VariableAccess;

/**
 * ...
 * @author Billyoyo
 */
class StringPool
{
    private var pool:Array<String>;
    public function new(root:RootCommand) 
    {
        pool = getBestMatches(getStrings(root));
        trace(pool);
    }
    
    public static function getBestMatches(strings:Array<String>):Array<String>
    {
        var bestMatches:Array<String> = new Array<String>();
        var matches:Array<String> = getMatches(strings); var newStrings:Array<String>;
        while (matches.length > 0 && bestMatches.length < 255) {
            var best:String = getBest(strings, matches);
            if (best == "") break;
            bestMatches.push(best);
            newStrings = new Array<String>();
            for (string in strings) {
                newStrings = newStrings.concat(string.split(best));
            }
            strings = newStrings;
            matches = getMatches(strings);
        }
        return bestMatches;
    }
    
    public function getPool():Array<String>
    {
        return pool;
    }
    
    public static function getStrings(root:RootCommand):Array<String>
    {
        var strings:Array<String> = new Array<String>();
        var todo:Array<Command> = root.walk();
        var next:Array<Command>; var arr:Array<Command>;
        while (todo.length > 0) {
            next = new Array<Command>();
            for (cmd in todo) {
                if (cmd.getName() == "ObjectValueCommand") {
                    var ovc:ObjectValueCommand = cast(cmd, ObjectValueCommand);
                    if (ovc.type == "StringType") strings.push(ovc.value);
                } else if (cmd.getName() == "LiteralValueCommand") {
                    var lvc:LiteralValueCommand = cast(cmd, LiteralValueCommand);
                    strings.push(lvc.getContent());
                } else {
                    arr = cmd.walk();
                    if (arr != null && arr.length > 0) next = next.concat(arr);
                }
            }
            todo = next;
        }
        //trace(strings);
        return strings;
    }
    
    public static function getMatches(strings:Array<String>):Array<String>
    {
        var matches:Array<String> = new Array<String>();
        var window:Int; var max:Int; var maxPos:Int; var s0:String; var s1:String; var check:String;
        for (si in 0...strings.length) {
            s0 = strings[si];
            for (sj in (si+1)...strings.length) {
                s1 = strings[sj];
                window = s0.length;
                if (s1.length < window) window = s1.length;
                while (window > 2) {
                    for (i in 0...((s0.length - window) + 1)) {
                        check = s0.substr(i, window);
                        if (s1.indexOf(check) >= 0) {
                            if (matches.indexOf(check) == -1) matches.push(check);
                        }
                    }
                    window--;
                }
            }
        }
        return matches;
    }
    
    public static function getBest(strings:Array<String>, matches:Array<String>):String
    {
        var bestScore:Int = 0;
        var bestMatch:String = "";
        var index:Int;
        for (match in matches) {
            var count:Int = 0;
            for (string in strings) {
                index = string.indexOf(match);
                while (index >= 0) {
                    count++;
                    index = string.indexOf(match, index + 1);
                }
            }
            var score:Int = (count * match.length) - ((2 * count) + match.length + Bytecode.lengthOfLength(match.length));
            if (score > bestScore) {
                bestScore = score;
                bestMatch = match;
            }
        }
        return bestMatch;
    }
    
}

class MatchFound {
    public function new() {}
}