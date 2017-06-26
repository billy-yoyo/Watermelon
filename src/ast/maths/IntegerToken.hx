package src.ast.maths;

import src.ast.Token;

/**
 * ...
 * @author Billyoyo
 */
class IntegerToken extends Token
{
    private static var regex:EReg = ~/^([0-9]+)$/;
    
    public static function match(s:String):Bool 
    {
        return regex.match(s);
    }
    
    public static function partialMatch(s:String):Bool
    {
        return match(s);
    }
    
    public override function getName():String 
    {
        return "IntegerToken";
    }
}