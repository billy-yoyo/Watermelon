package src.compiler.commands;
import haxe.crypto.BaseCode;
import src.ast.Token;
import src.ast.base.BlockToken;
import src.ast.base.BracketToken;
import src.ast.base.CommaToken;
import src.ast.base.EndLineToken;
import src.ast.base.KwdToken;
import src.ast.base.VariableToken;
import src.ast.script.AssignmentToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.commands.TryCatchCommand.CatchStatement;
import src.compiler.object.Object;
import src.compiler.object.builtin.Signal;
import src.compiler.signals.CustomErrorSignal;
import src.compiler.signals.ExitSignal;
import src.compiler.signals.SyntaxErrorSignal;

/**
 * ...
 * @author Billyoyo
 */
class TryCatchCommand extends Command
{
    public static function fromTokens(scope:Scope, tokens:Array<Token>):TryCatchCommand
    {
        // try {  } catch () {} catch () {}
        var start:Token = tokens.shift();
        if (start.getName() != "KwdToken" || start.getContent() != "try") throw new SyntaxErrorSignal("Try/Catch must start with try keyword");
        var mainToken:Token = tokens.shift();
        if (mainToken.getName() != "BlockToken") throw new SyntaxErrorSignal("Try code block must come straight after the try");
        
        var catches:Array<CatchStatement> = new Array<CatchStatement>();
        var kwd:Token; var typesToken:Token; var blockToken:Token;
        var declTokens:Array<Token>; var declSpl:Array<Array<Token>>; var typesSpl:Array<Array<Token>>;
        var nameToken:Token; var types:Array<String>; var elseCode:Array<Command> = null;
        while (tokens.length > 0) {
            kwd = tokens.shift(); 
            if (kwd.getName() == "KwdToken" && kwd.getContent() == "else") {
                blockToken = tokens.shift();
                if (blockToken.getName() != "BlockToken") throw new SyntaxErrorSignal("Else code must come after type declaration");
                elseCode = Core.convert(scope, blockToken.getContent());
                break;
            }
            if (kwd.getName() != "KwdToken" || kwd.getContent() != "catch") throw new SyntaxErrorSignal("Catch statement must start with catch keyword");
            typesToken = tokens.shift(); blockToken = tokens.shift();
            if (typesToken.getName() != "BracketToken") throw new SyntaxErrorSignal("Catch type declaration must come after keyword");
            if (blockToken.getName() != "BlockToken") throw new SyntaxErrorSignal("Catch code must come after type declaration");
            
            declTokens = typesToken.getContent();
            declSpl = Command.splitTokens(declTokens, "AssignmentToken");
            if (declSpl.length == 1) throw new SyntaxErrorSignal("Catch type declaration missing assignment token");
            if (declSpl.length > 2) throw new SyntaxErrorSignal("Catch type declaration has too many assignment tokens");
            nameToken = declSpl[0][0];
            if (nameToken.getName() != "VariableToken") throw new SyntaxErrorSignal("Catch type declaration invalid name");
            
            typesSpl = Command.splitTokens(declSpl[1], "CommaToken");
            types = new Array<String>();
            for (type in typesSpl) {
                if (type.length != 1 || type[0].getName() != "VariableToken") throw new SyntaxErrorSignal("Catch type declaration invalid type");
                types.push(type[0].getContent());
            }
            
            var code:Array<Command> = Core.convert(scope, blockToken.getContent());
            catches.push(new CatchStatement(nameToken.getContent(), types, code));
        }
        if (tokens.length > 0) throw new SyntaxErrorSignal("Else must come at the end of the catch statement");
        if (catches.length == 0) throw new SyntaxErrorSignal("Try statement with no catch statement");
        return new TryCatchCommand(scope, Core.convert(scope, mainToken.getContent()), catches, elseCode);
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):TryCatchCommand
    {
        var catches:Array<CatchStatement> = new Array<CatchStatement>();
        var code:Array<Command> = arr.shift().convert(scope);
        var elseCode:Array<Command> = arr.shift().convert(scope);
        while (arr.length > 0) {
            var arr:Array<Dynamic> = arr.shift().convert(scope);
            catches.push(new CatchStatement(arr[0], arr[1], arr[2]));
        }
        return new TryCatchCommand(scope, code, catches, elseCode);
    }

    public var code:Array<Command>;
    public var catches:Array<CatchStatement>;
    public var elseCode:Array<Command>;
    
    private var codeProgress:Int = 0;
    private var runningCatches:Array<StaticCatchStatement>;
    private var elseCodeProgress:Int = 0;
    override public function new(scope:Scope, code:Array<Command>, catches:Array<CatchStatement>, elseCode:Array<Command>) 
    {
        super(scope);
        this.code = code;
        this.catches = catches;
        this.elseCode = elseCode;
    }
    
    override public function copy(scope:Scope):Command 
    {
        var newCatches:Array<CatchStatement> = new Array<CatchStatement>();
        for (x in catches) newCatches.push(x.copy(scope));
        return new TryCatchCommand(scope, Command.copyArray(scope, code), newCatches, if (elseCode == null) null else Command.copyArray(scope, elseCode));
    }
    
    override public function setScope(scope:Scope) 
    {
        super.setScope(scope);
        for (cmd in code) cmd.setScope(scope);
        if (elseCode != null) {
            for (cmd in elseCode) cmd.setScope(scope);
        }
    }
    
    override public function getName():String 
    {
        return "TryCatchCommand";
    }
    
    override public function getFriendlyName():String 
    {
        return "try/catch";
    }
    
    override public function run():Object 
    {
        var command:Command = null;
        if (runningCatches == null) {
            try {
                while (codeProgress < code.length) {
                    command = code[codeProgress];
                    if (command.getName() == "PipeReadCommand" || command.getName() == "PipeWriteCommand") {
                        codeProgress++;
                        command.run();
                    } else {
                        command.run();
                        codeProgress++;
                    }
                }
            } catch ( e : ExitSignal ) {
                var type:String = e.getName(); var source:Dynamic = e.msg;
                if (type == "CustomErrorSignal") {
                    source = cast(e, CustomErrorSignal).source;
                    type = source.getType().getName();
                }
                runningCatches = new Array<StaticCatchStatement>();
                for (statement in catches) {
                    if (statement.checkType(type)) {
                        runningCatches.push(new StaticCatchStatement(statement, scope, type, source));
                    }
                }
                if (runningCatches.length == 0) throw e;
            }
        }
        if (runningCatches == null || runningCatches.length == 0) { // success, run else code
            while (elseCodeProgress < elseCode.length) {
                command = elseCode[elseCodeProgress];
                if (command.getName() == "PipeReadCommand" || command.getName() == "PipeWriteCommand") {
                    elseCodeProgress++;
                    command.run();
                } else {
                    command.run();
                    elseCodeProgress++;
                }
            }
        } else {
            while (runningCatches.length > 0) {
                var statement:StaticCatchStatement = runningCatches[0];
                statement.statement.run(statement.scope, statement.type, statement.source);
                runningCatches.shift();
            }
        }
        return null;
    }
    
    override public function getBytecode():Bytecode 
    {
        var arr:Array<Dynamic> = new Array<Dynamic>();
        arr.push(code);
        arr.push(elseCode);
        for (statement in catches) {
            arr.push([statement.name, statement.types, statement.code]);
        }
        return Bytecode.fromArray(arr, getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        var tokens:Array<Token> = new Array<Token>();
        tokens.push(new KwdToken("try"));
        tokens.push(BlockToken.fromRaw(new EndLineToken(";").join(Command.reconstructCommands(code), true)));
        for (x in catches) {
            tokens.push(new KwdToken("catch"));
            var types:Array<Token> = new Array<Token>();
            types.push(new VariableToken(x.name));
            types.push(new AssignmentToken("="));
            for (type in x.types) {
                types.push(new VariableToken(type));
                types.push(new CommaToken(","));
            }
            types.pop();
            tokens.push(BracketToken.fromRaw(types));
            tokens.push(BlockToken.fromRaw(new EndLineToken(";").join(Command.reconstructCommands(x.code), true)));
        }
        if (elseCode != null) {
            tokens.push(BlockToken.fromRaw(new EndLineToken(";").join(Command.reconstructCommands(elseCode), true)));
        }
        return tokens;
    }
}

/*  try {} catch ( e = ObjectIndexErrorException, ArgumentException )
 * 
 */

class CatchStatement
{
    
    public var name:String;
    public var types:Array<String>;
    public var code:Array<Command>;
    private var progress:Int = 0;
    private var valueSet:Bool = false;
    public function new(name:String, types:Array<String>, code:Array<Command>)
    {
        this.name = name;
        this.types = types;
        this.code = code;
    }
    
    public function copy(scope:Scope):CatchStatement
    {
        return new CatchStatement(name, types.copy(), Command.copyArray(scope, code));
    }
    
    public function run(scope:Scope, type:String, source:Dynamic) {
        if (!valueSet) {
            scope.setVariable(name, scope.getType("SignalType").createValue(new Signal(type, source), scope));
            valueSet = true;
        }
        var cmd:Command;
        while (progress < code.length) {
            cmd = code[progress];
            if (cmd.getName() == "PipeReadCommand" || cmd.getName() == "PipeWriteCommand") {
                progress++;
                cmd.run();
            } else {
                cmd.run();
                progress++;
            }
        }
    }
    
    public function checkType(type:String):Bool
    {
        for (x in types) {
            if (x == type) return true;
        }
        return false;
    }
}

class StaticCatchStatement
{
    public var statement:CatchStatement;
    public var scope:Scope;
    public var type:String;
    public var source:Dynamic;
    public function new(statement:CatchStatement, scope:Scope, type:String, source:Dynamic)
    {
        this.statement = statement;
        this.scope = scope;
        this.type = type;
        this.source = source;
    }
}