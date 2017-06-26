package src.ast.base;
import src.ast.Token;

/**
 * ...
 * @author Billyoyo
 */
class WhitespaceToken extends Token
{

    private static var regex:EReg = ~/^\s$/;
    
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
        return "WhitespaceToken";
    }
    
    public override function isDisposable():Bool
    {
        return true;
    }
    
}