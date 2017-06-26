package src.ast.base;
import src.ast.GlobalProcessor;
import src.ast.Token;

/**
 * ...
 * @author Billyoyo
 */
class BlockToken extends Token
{
    
    public static function fromRaw(tokens:Array<Token>):BlockToken
    {
        var token:BlockToken = new BlockToken("");
        token.content = Token.merge(tokens);
        token.originalLength = 0;
        return token;
    }
    
    private var originalLength:Int;
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
        return s.charAt(0) == "{" && s.charAt(s.length - 1) == "}" && BlockToken.count(s, "{") == BlockToken.count(s, "}");
    }
    
    public static function partialMatch(s:String):Bool
    {
        var openCount:Int = BlockToken.count(s, "{");
        var closeCount:Int = BlockToken.count(s, "}");
        return s.charAt(0) == "{" && ((openCount == closeCount && s.charAt(s.length - 1) == "}") || openCount > closeCount); 
    }
    
    public override function getName():String 
    {
        return "BlockToken";
    }
    
    public override function getLength():Int
    {
        return originalLength;
    }
    
    public function isMap():Bool
    {
        var tokens:Array<Token> = content;
        var hasComma:Bool = false; 
        for (token in tokens) {
            if (token.getName() == "CommaToken") hasComma = true;
            if (token.getName() == "hasEndline") return false;
        }
        return hasComma;
    }
    
    override public function reconstruct(?embed:String):String 
    {
        if (embed == null) embed = "";
        var lastEmbed:String = embed;
        embed += "    ";
        
        var reconstructed:String = "";
        var tokens:Array<Token> = content;
        var map:Bool = false; var s:String;
        var first:Bool = true; var token:Token;
        for (i in 0...tokens.length) {
            token = tokens[i];
            s = token.reconstruct(embed);
            if (token.getName() == "CommaToken") {
                map = true;
                if (i < tokens.length - 1) s += '\n$embed';
                first = true;
            } else if (token.getName() == "EndLineToken") {
                if (i < tokens.length - 1) s += '\n$embed';
                first = true;
            } else if (token.getName() == "KwdToken" || token.getName() == "FloatToken" 
                       || token.getName() == "IntegerToken" || token.getName() == "VariableToken"
                       || token.getName() == "VariableAccessToken" || token.getName() == "AssignmentToken"
                       || token.getName() == "MathsOperatorToken" || token.getName() == "BooleanOperatorToken"
                       || token.getName() == "EqualityOperatorToken") {
                           
                if (!first) s = ' $s';
                first = false;
            } else first = false;
            reconstructed += s;
        }
        if (map) return '{$reconstructed}}';
        else return ' {\n$embed$reconstructed\n$lastEmbed}';
    }
}