package src.ast.script;
import src.ast.Token;

/**
 * ...
 * @author Billyoyo
 */
class PipeWriteToken extends Token
{

    public static function match(s:String):Bool
    {
        return s == "<:" || s == "<!";
    }
    
    public static function partialMatch(s:String):Bool
    {
        return s == "<" || match(s);
    }
    
    override public function getName():String 
    {
        return "PipeWriteToken";
    }
    
    
}