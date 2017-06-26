package src.ast.base;
import src.ast.GlobalProcessor;
import src.ast.Token;

/**
 * ...
 * @author Billyoyo
 */
class BracketToken extends Token
{
    
    public static function fromRaw(tokens:Array<Token>):BracketToken
    {
        var token:BracketToken = new BracketToken("");
        token.content = Token.merge(tokens);
        token.originalLength = 0;
        return token;
    }
    
    public var originalLength:Int;
    public override function new(content:String)
    {
        super(content);
        this.originalLength = content.length;
        this.content = GlobalProcessor.baseProcessor.process(content.substring(1, content.length - 1));
    }
    
    public static function count(s:String, c:String):Int
    {
        var count:Int = 0;
        var index:Int = s.indexOf(c);
        while (index >= 0) {
            count++;
            index = s.indexOf(c, index+1);
        }
        return count;
    }
    
    public static function match(s:String):Bool
    {
        return s.charAt(0) == "(" && s.charAt(s.length - 1) == ")" && BlockToken.count(s, "(") == BlockToken.count(s, ")");
    }
    
    public static function partialMatch(s:String):Bool
    {
        var openCount:Int = BlockToken.count(s, "(");
        var closeCount:Int = BlockToken.count(s, ")");
        return s.charAt(0) == "(" && ((openCount == closeCount && s.charAt(s.length - 1) == ")") || openCount > closeCount); 
    }
    
    public override function getName():String 
    {
        return "BracketToken";
    }
    
    public override function getLength():Int
    {
        return originalLength;
    }
    
    override public function reconstruct(?embed:String):String 
    {
        var reconstructed:String = "";
        var tokens:Array<Token> = content; var s:String;
        for (token in tokens) {
            s = token.reconstruct();
            if (token.getName() == "CommaToken") s += " ";
            reconstructed += s;
        }
        return '($reconstructed)';
    }
}