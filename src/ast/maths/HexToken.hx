package src.ast.maths;

/**
 * ...
 * @author Billyoyo
 */
class HexToken extends Token
{

    private static var regex:EReg = ~/^(0|b)x([0-9]+)$/;
    
    public var isBytes:Bool = false;
    override public function new(content:String)
    {
        if (content.charAt(0) == "b") {
            content = "0" + content.substr(1, content.length - 1);
            isBytes = true;
        }
        super(content);
    }
    
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