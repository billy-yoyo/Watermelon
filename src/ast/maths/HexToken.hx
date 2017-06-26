package src.ast.maths;

/**
 * ...
 * @author Billyoyo
 */
class HexToken extends Token
{

    private static var regex:EReg = ~/^0x([0-9]+)$/;
    
    public static function match(s:String):Bool 
    {
        return regex.match(s);
    }
    
    public static function partialMatch(s:String):Bool
    {
        return s == "0" || s == "0x" || match(s);
    }
    
    public override function getName():String 
    {
        return "HexToken";
    }
    
}