package src.ast.base;
import src.ast.GlobalProcessor;
import src.ast.Token;
import src.compiler.commands.RootCommand;
import src.compiler.signals.SyntaxErrorSignal;

/**
 * ...
 * @author Billyoyo
 */
class RootToken extends Token
{
    public static function fromRaw(tokens:Array<Token>):RootToken
    {
        var token:RootToken = new RootToken("");
        token.content = tokens;
        return token;
    }
    
    public static function fromRoot(cmd:RootCommand):RootToken
    {
        return fromRaw(cmd.reconstruct());
    }
    
    public override function new(content:String) 
    {
        super(content);
        this.content = GlobalProcessor.baseProcessor.process(content);
    }
    
    public static function match(s:String):Bool 
    {
        return false;
    }
    
    public static function partialMatch(s:String):Bool
    {
        return false;
    }
    
    override public function getLength():Int 
    {
        return 0;
    }
    
    override public function getName():String 
    {
        return "RootToken";
    }
    
    override public function reconstruct(?embed:String):String 
    {
        var reconstructed:String = "";
        var tokens:Array<Token> = content; var s:String;
        var first:Bool = true;
        for (token in tokens) {
            s = token.reconstruct();
            if (token.getName() == "EndLineToken" || (token.getName() == "BlockToken" && !cast(token, BlockToken).isMap())) {
                s += "\n";
                first = true;
            } else if (token.getName() == "KwdToken" || token.getName() == "FloatToken" 
                       || token.getName() == "IntegerToken" || token.getName() == "VariableToken"
                       || token.getName() == "VariableAccessToken" || token.getName() == "AssignmentToken"
                       || token.getName() == "MathsOperatorToken" || token.getName() == "BooleanOperatorToken"
                       || token.getName() == "EqualityOperatorToken") {
                if (!first) s = " " + s;
                first = false;
            } else first = false;
            reconstructed += s;
        }
        return reconstructed;
    }
    
}