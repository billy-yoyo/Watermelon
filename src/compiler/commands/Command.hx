package src.compiler.commands;
import src.ast.Token;
import src.compiler.bytecode.Bytecode;
import src.compiler.bytecode.BytecodeMap;
import src.compiler.object.Object;

/**
 * ...
 * @author Billyoyo
 */
class Command
{
    public static function splitTokens(tokens:Array<Token>, splitToken:String, ?content:String, ?checker:Token->Bool):Array<Array<Token>>
    {
        var result:Array<Array<Token>> = new Array<Array<Token>>();
        var arr:Array<Token> = new Array<Token>();
        for (token in tokens) {
            if (token.getName() == splitToken && (content == null || token.getContent() == content) && (checker == null || checker(token))) {
                result.push(arr);
                arr = new Array<Token>();
            } else {
                arr.push(token);
            }
        }
        result.push(arr);
        return result;
    }
    
    public static function reconstructCommands(commands:Array<Dynamic>):Array<Token>
    {
        var tokens:Array<Token> = new Array<Token>();
        for (cmd in commands) {
            tokens.push(cmd.reconstruct());
        }
        return tokens;
    }
    
    public static function contains(tokens:Array<Token>, type:String)
    {
        for (token in tokens) {
            if (token.getName() == type) {
                return true;
            }
        }
        return false;
    }

    private var scope:Scope;
    public function new(scope:Scope) 
    {
        this.scope = scope;
    }
    
    public function run():Object
    {
        return null;
    }
    
    public function getScope():Scope
    {
        return scope;
    }
    
    public function getName():String
    {
        return "Command";
    }
    
    public function getBytecode():Bytecode
    {
        return null;
    }
    
    public function getCodeID():Int
    {
        return BytecodeMap.fromCommand(this);
    }
    
    public function walk():Array<Command> {
        return new Array<Command>();
    }
    
    public function toString():String
    {
        return '$scope.${getName()}';
    }
    
    public function reconstruct():Array<Token>
    {
        return [];
    }
}