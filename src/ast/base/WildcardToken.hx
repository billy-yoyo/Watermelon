package src.ast.base;
import src.ast.Token;

/**
 * ...
 * @author Billyoyo
 */
class WildcardToken extends Token
{

    public static function match(s:String):Bool
    {
        return s == "?";
    }
    
    public static function partialMatch(s:String):Bool
    {
        return match(s);
    }
    
    override public function getName():String 
    {
        return "WildcardToken";
    }
    
}