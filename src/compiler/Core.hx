package src.compiler;
import haxe.io.Bytes;
import src.ast.Token;
import src.ast.script.PipeWriteToken;
import src.ast.base.RootToken;
import src.compiler.commands.*;
import src.compiler.commands.value.*;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.coroutine.CoroutineDefinitionCommand;
import src.compiler.commands.coroutine.CoroutineForLoopCommand;
import src.compiler.commands.coroutine.PipeReadCommand;
import src.compiler.commands.coroutine.PipeWriteCommand;
import src.compiler.signals.SyntaxErrorSignal;

/**
 * ...
 * @author Billyoyo
 */
class Core
{
    
    public static function _opcap(end:Dynamic, ?startContent:Dynamic, ?endContent:Dynamic, ?checkOverride:Dynamic->Token->Token->Bool):OperativeCapture
    {
        if (Type.getClass(end) == String) end = [end];
        if (startContent != null && Type.getClass(startContent) == String) startContent = [startContent];
        if (endContent != null && Type.getClass(endContent) == String) endContent = [endContent];
        return new OperativeCapture(end, startContent, endContent, checkOverride);
    }
    
    public static var operativeMap:Map<String, Array<OperativeCapture>> = [
        "AssignmentToken" => [_opcap("EndLineToken")],
        "EndLineToken" => [_opcap("EndLineToken")],
        "KwdToken" => [
            _opcap("BlockToken", "func"), 
            _opcap("BlockToken", "coro"), 
            _opcap("EndLineToken", "return"), 
            _opcap(["EndLineToken", "BlockToken"], "for"), 
            _opcap("EndLineToken", "del"),
            _opcap(["EndLineToken", "BlockToken"], "while"),
            _opcap("", "if", "", function(lastVal:Dynamic, token:Token, nextToken:Token):Bool {
                if (token.getName() == "BlockToken") {
                    return nextToken == null || nextToken.getName() != "KwdToken" || (nextToken.getContent() != "else" && nextToken.getContent() != "elif");
                } else if (token.getName() == "EndLineToken") {
                    return true;
                }
                return false;
            }),
            _opcap("EndLineToken", "break"),
            _opcap("EndLineToken", "continue"),
            _opcap("BlockToken", "type"),
            _opcap("EndLineToken", "raise"),
            _opcap("", "try", "", function(lastVal:Dynamic, token:Token, nextToken:Token):Bool {
                return token.getName() == "BlockToken" && (nextToken == null || nextToken.getName() != "KwdToken" || (nextToken.getContent() != "catch" && nextToken.getContent() != "else"));
            }),
            _opcap("EndLineToken", "import")
        ],
        "PipeWriteToken" => [_opcap("EndLineToken")],
        "PipeReadToken" => [_opcap("EndLineToken")]
    ];
    
    
    public static function convertRoot(root:RootToken, ?scope:Scope, ?moduleName:String):RootCommand
    {
        if (scope == null) scope = new Scope("root");
        if (moduleName == null) moduleName = "__main__";
        
        var moduleScope:Scope = new Scope(moduleName, scope);
        return new RootCommand(moduleScope, convert(moduleScope, root.getContent()));
    }
    
    public static function convert(scope:Scope, tokens:Array<Token>):Array<Command>
    {
        tokens = tokens.copy();
        var subTokens:Array<Token> = new Array<Token>();
        var groups:Array<Command> = new Array<Command>();
        
        var operativeToken:Token = null;
        var opCapture:OperativeCapture = null;
        while (tokens.length > 0) {
            var token:Token = tokens.shift();
            subTokens.push(token);
            if (operativeToken == null) {
                if (operativeMap.exists(token.getName())) {
                    var arr:Array<OperativeCapture> = operativeMap.get(token.getName());
                    for (capture in arr) {
                        if (capture.isStart(token)) {
                            operativeToken = token;
                            opCapture = capture;
                            break;
                        }
                    }
                }
            }
            if (operativeToken != null && opCapture != null && opCapture.isEnd(token, if (tokens.length == 0) null else tokens[0])) {
                groups.push(convertBlock(scope, operativeToken, subTokens));
                subTokens = new Array<Token>();
                operativeToken = null;
                opCapture = null;
            }
        }
        if (subTokens.length > 0) {
            var reconstructed:Array<String> = new Array<String>();
            for (token in subTokens) reconstructed.push(token.reconstruct());
            throw new SyntaxErrorSignal('Failed to process ${reconstructed.join(" ")} (missing endline?)');
        }
        return groups;
    }
    
    public static function convertBlock(scope:Scope, operative:Token, tokens:Array<Token>):Command
    {
        
        if (operative.getName() == "AssignmentToken") {
            if (tokens.length >= 3 && tokens[2].getName() == "AssignmentToken" && tokens[1].getName() == "ListToken") { // object array access assignment
                return ObjectArrayAssignmentCommand.fromTokens(scope, tokens);
            }
            return AssignmentCommand.fromTokens(scope, tokens);
        } else if (operative.getName() == "PipeReadToken") {
            return PipeReadCommand.fromTokens(scope, tokens);
        } else if (operative.getName() == "PipeWriteToken") {
            return PipeWriteCommand.fromTokens(scope, tokens);
        } else if (operative.getName() == "EndLineToken") {
            tokens.pop(); // remove end line;
            // not sure what this should be, so try making it a value
            return ValueCommand.fromTokens(scope, tokens);
        } else if (operative.getName() == "KwdToken") {
            if (operative.getContent() == "func") return FunctionDefinitionCommand.fromTokens(scope, tokens);
            else if (operative.getContent() == "coro") return CoroutineDefinitionCommand.fromTokens(scope, tokens);
            else if (operative.getContent() == "return") return ReturnCommand.fromTokens(scope, tokens);
            else if (operative.getContent() == "del") return DeleteCommand.fromTokens(scope, tokens);
            else if (operative.getContent() == "for") {
                if (tokens.length >= 2 && tokens[1].getName() == "BracketToken") {
                    var subtokens:Array<Token> = tokens[1].getContent();
                    for (token in subtokens) {
                        if (token.getName() == "PipeReadToken") return CoroutineForLoopCommand.fromTokens(scope, tokens);
                    }
                }
                return ForLoopComand.fromTokens(scope, tokens);
            } else if (operative.getContent() == "while") return WhileLoopCommand.fromTokens(scope, tokens);
            else if (operative.getContent() == "if") return IfCommand.fromTokens(scope, tokens);
            else if (operative.getContent() == "break") return BreakCommand.fromTokens(scope, tokens);
            else if (operative.getContent() == "continue") return ContinueCommand.fromTokens(scope, tokens);
            else if (operative.getContent() == "type") return TypeDefinitionCommand.fromTokens(scope, tokens);
            else if (operative.getContent() == "raise") return RaiseCommand.fromTokens(scope, tokens);
            else if (operative.getContent() == "try") return TryCatchCommand.fromTokens(scope, tokens);
            else if (operative.getContent() == "import") return ImportCommand.fromTokens(scope, tokens);
        }
        return null;
    }
    
    public static function convertBytes(bytes:Bytes, ?scope:Scope, ?moduleName:String):RootCommand
    {
        if (scope == null) scope = new Scope("root");
        if (moduleName == null) moduleName = "__main__";
        
        var moduleScope:Scope = new Scope(moduleName, scope);
        return RootCommand.fromBytecode(moduleScope, Bytecode.fromBytes(bytes, scope));
    }
    
    public static function compile(root:RootCommand, ?stringPool:Bool):Bytecode
    {
        if (stringPool == null) stringPool = true;
        root.useStringPool = stringPool;
        var code:Bytecode = root.getBytecode();
        if (stringPool) {
            root.getScope().getRoot().stringPool = new Array<String>();
            Bytecode.currentStringPool = null;
        }
        return code;
    }
    
}

private class OperativeCapture
{   
    public var end:Array<String>;
    public var startContent:Array<String>;
    public var endContent:Array<String>;
    public var checkOverride:Dynamic->Token->Token->Bool;
    public var lastData:Dynamic = null;
    public function new(end:Array<String>, ?startContent:Array<String>, ?endContent:Array<String>, ?checkOverride:Dynamic->Token->Token->Bool) 
    {
        this.end = end;
        this.startContent = startContent;
        this.endContent = endContent;
        this.checkOverride = checkOverride;
    }
    
    public function isStart(token:Token):Bool
    {
        return startContent == null || startContent.indexOf(token.getContent()) >= 0;
    }
    
    public function isEnd(token:Token, nextToken:Token):Bool
    {
        if (checkOverride != null) {
            return checkOverride(lastData, token, nextToken);
        } else {
            return end.indexOf(token.getName()) >= 0 && (endContent == null || endContent.indexOf(token.getContent()) >= 0);
        }
    }
}