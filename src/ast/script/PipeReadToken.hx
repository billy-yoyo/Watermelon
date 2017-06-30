package src.ast.script;
import src.ast.Token;

/**
 * ...
 * @author Billyoyo
 */
class PipeReadToken extends Token
{

    public static function match(s:String):Bool
    {
        return s == ":>" || s == "!>";
    }
    
    public static function partialMatch(s:String):Bool
    {
        return s == "!" || s == ":" || match(s);
    }
    
    override public function getName():String 
    {
        return "PipeReadToken";
    }
    
    
}