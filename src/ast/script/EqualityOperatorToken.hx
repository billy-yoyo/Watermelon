package src.ast.script;
import src.ast.Token;

/**
 * ...
 * @author Billyoyo
 */
class EqualityOperatorToken extends Token
{

    public static function match(s:String):Bool
    {
        return s == "==" || s == "!=" || s == ">=" || s == "<=" || s == "<" || s == ">";
    }
    
    public static function partialMatch(s:String):Bool
    {
        return s == "=" || s == "!" || match(s);
    }
    
    override public function getName():String 
    {
        return "EqualityOperatorToken";
    }
}