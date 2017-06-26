package src.ast;

/**
 * ...
 * @author Billyoyo
 */
class Token
{
    
    private static function createPrefix(len:Int):String
    {
        var s:String = "";
        while (s.length < len) {
            s += " ";
        }
        return s;
    }
    
    public static function createTree(t:Token):Array<String>
    {
        var content:Dynamic = t.getContent();
        if (Type.typeof(content).equals(Type.ValueType.TClass(Array)))
        {
            var arr:Array<Token> = content;
            if (arr.length == 0) return [t.getName()];
            else {
                var text:String = t.getName();
                
                var tree:Array<String> = new Array<String>();
                var middle:Int; var lines:Array<String>;
                var treeMiddle:Int = Math.floor(arr.length / 2);
                var start:String;
                var prefix:String = Token.createPrefix(text.length);
                for (ti in 0...arr.length) {
                    start = ' $prefix ';
                    if (ti == treeMiddle) start = '$text -';
                    lines = Token.createTree(arr[ti]);
                    middle = Math.floor(lines.length / 2);
                    for (i in 0...lines.length) {
                        if (lines[i].charAt(0) != " ") {
                            middle = i; break;
                        }
                    }
                    for (i in 0...lines.length) {
                        if (i == middle) tree.push('$start+- ${lines[i]}');
                        else if ((ti == 0 && i > middle) || (ti == arr.length - 1 && i < middle) || (ti != 0 && ti != arr.length - 1)) {
                            tree.push(' $prefix |  ${lines[i]}');
                        } else tree.push(' $prefix    ${lines[i]}');
                        
                    }
                }
                return tree;
            }
        } else {
            return [t.getName()];
        }
    }
    
    public static function match(s:String):Bool
    {
        return false;
    }
    
    public static function partialMatch(s:String):Bool
    {
        return false;
    }
    
    public var content:Dynamic;
    public function new(content:String) 
    {
        this.content = content;
    }
    
    public function getContent():Dynamic
    {
        return content;
    }
    
    public function getLength():Int
    {
        return content.length;
    }
    
    public function getName():String
    {
        return "Token";
    }
    
    public function isDisposable():Bool
    {
        return false;
    }
    
    public function getPriority():TokenPriority
    {
        return TokenPriority.LOW;
    }
    
    public function toString():String
    {
        return '${getName()}($content)';
    }
    
    public function reconstruct(?embed:String):String
    {
        return content;
    }
    
    public function join(tokens:Array<Token>, ?end:Bool):Array<Token>
    {
        tokens = tokens.copy();
        var result:Array<Token> = new Array<Token>();
        if (tokens.length > 0) result.push(tokens.shift());
        while (tokens.length > 0) {
            result.push(this);
            result.push(tokens.shift());
        }
        if (end != null && end) result.push(this);
        return result;
    }
    
    public static function merge(els:Array<Dynamic>):Array<Token>
    {
        var tokens:Array<Token> = new Array<Token>();
        for (el in els) {
            if (Type.getClass(el) == Array) {
                for (token in merge(el)) {
                    tokens.push(token);
                }
            } else {
                tokens.push(el);
            }
        }
        return tokens;
    }
    
    public static function reconstructTokens(tokens:Array<Token>):String
    {
        var s:String = "";
        for (token in tokens) {
            s = " " + token.reconstruct();
        }
        return s;
    }
}