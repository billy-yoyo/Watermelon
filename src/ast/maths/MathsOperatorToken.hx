package src.ast.maths;

import src.ast.Token;
/**
 * ...
 * @author Billyoyo
 */
class MathsOperatorToken extends Token
{

    
    public static function match(s:String):Bool
    {
        return s == "*" || s == "+" || s == "-" || s == "/" || s == "**" || s == "//" || s == "%";
    }
    
    public static function partialMatch(s:String):Bool
    {
        return match(s);
    }
    
    public override function getName():String 
    {
        return "MathsOperatorToken";
    }
}