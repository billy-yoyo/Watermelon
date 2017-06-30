package src.ast.base;
import src.ast.Token;
import src.ast.TokenPriority;

/**
 * ...
 * @author Billyoyo
 */
class KwdToken extends Token
{
    
    public static var kwds:Array<String> = [
        "if",
        "elif",
        "else",
        "for",
        "while",
        "func",
        "true",
        "false",
        "none",
        "return",
        "break",
        "continue",
        "in",
        "del",
        "type",
        "raise",
        "try",
        "catch",
        "import",
        "as",
        "coro"
    ];
    
    public static function match(s:String):Bool
    {
        return kwds.indexOf(s) != -1;
    }
    
    public static function partialMatch(s:String):Bool
    {
        if (s.length == 0) return false;
        for (kwd in kwds) {
            if (kwd.substr(0, s.length) == s) return true;
        }
        return false;
    }
    
    override public function getName():String 
    {
        return "KwdToken";
    }
    
    override public function getPriority():TokenPriority 
    {
        return TokenPriority.MAXIMUM;
    }
    
}