package src.ast.maths;
import src.ast.Token;

/**
 * ...
 * @author Billyoyo
 */
class BinaryOperatorToken extends Token
{

    public static function match(s:String):Bool
    {
        return s == "|" || s == "&" || s == "^" || s == "~" || s == ">>" || s == "<<";
    }
    
    public static function partialMatch(s:String):Bool
    {
        return s == "<" || s == ">" || match(s);
    }
    
    public override function getName():String 
    {
        return "BinaryOperatorToken";
    }
    
}