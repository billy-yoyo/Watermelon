package src.ast.base;
import src.ast.Token;

/**
 * ...
 * @author Billyoyo
 */
class StringToken extends Token
{

    private static var regex:EReg = ~/^"[^"]*"$/;
    private static var partialRegex:EReg = ~/^"[^"]*"?$/;
    public override function new(content:String)
    {
        super(content.substring(1, content.length - 1));
    }
    
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
        return "StringToken";
    }
    
    public override function getLength():Int
    {
        return content.length + 2;
    }
    
    override public function reconstruct(?embed:String):String 
    {
        return '"$content"';
    }
}