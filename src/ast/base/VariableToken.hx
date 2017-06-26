package src.ast.base;
import src.ast.Token;
import src.ast.TokenPriority;

/**
 * ...
 * @author Billyoyo
 */
class VariableToken extends Token
{
    private static var regex:EReg = ~/^[a-z|A-Z|_][a-z|A-Z|0-9|_]*$/;
    
    public static function match(s:String):Bool
    {
        return regex.match(s);
    }
    
    public static function partialMatch(s:String):Bool
    {
        return s.length > 0 && match(s);
    }
    
    public override function getName():String 
    {
        return "VariableToken";
    }
    
    override public function getPriority():TokenPriority 
    {
        return TokenPriority.HIGH;
    }
}