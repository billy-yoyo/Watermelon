package src.ast;
import haxe.web.Dispatch.MatchRule;

/**
 * ...
 * @author Billyoyo
 */
class TokenProcessor
{
    
    public var classes:Array<TokenClass>;
    public function new()
    {
        this.classes = new Array<TokenClass>();
    }
    
    public function addClass(cls:Class<Token>, match:String->Bool, partialMatch:String->Bool):TokenProcessor
    {
        classes.push(new TokenClass(cls, match, partialMatch));
        return this;
    }
    
    public function getMatches(s:String):Array<TokenClass>
    {
        var matches:Array<TokenClass> = new Array<TokenClass>();
        for (cls in classes) {
            if (cls.partialMatch(s)) {
                //trace('${Type.getClassName(cls.cls)} matches <$s>');
                matches.push(cls);
            }
        }
        return matches;
    }
    
    public function higherPriority(priority1:TokenPriority, priority2:TokenPriority):Bool
    {
        return (priority1 == TokenPriority.MAXIMUM && (priority2 == TokenPriority.HIGH || priority2 == TokenPriority.MEDIUM
                || priority2 == TokenPriority.LOW || priority2 == TokenPriority.MINIMUM)) ||
               (priority1 == TokenPriority.HIGH && (priority2 == TokenPriority.MEDIUM || priority2 == TokenPriority.LOW
                || priority2 == TokenPriority.MINIMUM)) ||
               (priority1 == TokenPriority.MEDIUM && (priority2 == TokenPriority.LOW || priority2 == TokenPriority.MINIMUM)) ||
               (priority1 == TokenPriority.LOW && priority2 == TokenPriority.MINIMUM);
        
    }
    
    public function processToken(s:String):Token
    {
        var matches:Array<TokenClass> = getMatches(s.substring(0, 1));
        var lastMatches:Array<TokenClass> = matches;
        var length:Int = 1;
        while (matches.length > 0 && length <= s.length) {
            length += 1;
            lastMatches = matches;
            matches = getMatches(s.substr(0, length));
        }
        length -= 1;
        if (lastMatches != null && lastMatches.length > 0) {
            var substr:String = s.substr(0, length);
            var tokens:Array<Token> = new Array<Token>();
            
            for (match in lastMatches) {
                if (match.match(substr)) tokens.push(Type.createInstance(match.cls, [substr]));
            }
            var token:Token = tokens[0];
            for (i in 1...tokens.length) {
                if (higherPriority(tokens[i].getPriority(), token.getPriority())) token = tokens[i];
            }
            return token;
        }
        return null;
    }
    
    public function process(s:String):Array<Token>
    {
        //trace('--- processing <$s> --- ');
        var tokens:Array<Token> = new Array<Token>();
        var token:Token = processToken(s);
        while (token != null) {
            if (!token.isDisposable()) tokens.push(token);
            s = s.substr(token.getLength());
            //trace('>>> $s');
            token = processToken(s);
        }
        //trace('--- completed $tokens ---');
        return tokens;
    }
}

private class TokenClass
{
    public var cls:Class<Token>;
    public var match:String->Bool;
    public var partialMatch:String->Bool;
    public function new(cls:Class<Token>, match:String->Bool, partialMatch:String->Bool)
    {
        this.cls = cls;
        this.match = match;
        this.partialMatch = partialMatch;
    }
    
    public function toString()
    {
        return Type.getClassName(cls);
    }
}