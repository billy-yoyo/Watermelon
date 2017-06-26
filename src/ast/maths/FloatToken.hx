package src.ast.maths;

import src.ast.Token;

/**
 * ...
 * @author Billyoyo
 */
class FloatToken extends Token
{
    private static var regex:EReg = ~/^(([0-9]+)\.([0-9]+))$/;
    private static var partialRegex:EReg = ~/^[0-9]+(\.[0-9]*)?$/;
    
    public static function match(s:String):Bool 
    {
        return regex.match(s);
    }
    
    public static function partialMatch(s:String):Bool 
    {
        return partialRegex.match(s);
    }
    
    public override function getName():String 
    {
        return "FloatToken";
    }
    
}