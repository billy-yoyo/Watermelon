package src.compiler.commands;
import src.ast.Token;
import src.ast.base.BlockToken;
import src.ast.base.BracketToken;
import src.ast.base.EndLineToken;
import src.ast.base.KwdToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.commands.IfCommand.CondAndExpr;
import src.compiler.commands.value.ValueCommand;
import src.compiler.object.Object;
import src.compiler.signals.SyntaxErrorSignal;

/**
 * ...
 * @author Billyoyo
 */
class IfCommand extends ValueCommand
{ 
    public static function getCondAndExprFromBytes():Scope-> Array<Bytecode>->Command
    {
        return CondAndExpr.fromBytecode;
    }
    
    public static function fromTokens(scope:Scope, tokens:Array<Token>):IfCommand
    {
        var ifs:Array<Token> = new Array<Token>();
        for (token in tokens) {
            if (token.getName() == "KwdToken" && (token.getContent() == "if" || token.getContent() == "elif" || token.getContent() == "else")) ifs.push(token);
        }
        if (ifs.shift().getContent() != "if") throw new SyntaxErrorSignal("If statement must start with if");
        var endIf:Token = ifs.pop();
        for (elif in ifs) {
            if (elif.getContent() != "elif") throw new SyntaxErrorSignal("if or else found in the middle of the if block (should be elif)");
        }
        
        var spl:Array<Array<Token>> = Command.splitTokens(tokens, "KwdToken", null, function(token:Token):Bool {
            return token.getContent() == "if" || token.getContent() == "elif" || token.getContent() == "else";
        });
        if (spl[0].length == 0) spl.shift();
        if (tokens[0].getName() == "KwdToken" && tokens[0].getContent() == "if") { 
            var elseCode:Array<Command> = null;
            if (endIf != null && endIf.getContent() == "else") {
                var lastTokens:Array<Token> = spl.pop();
                if (lastTokens.length == 1 && lastTokens[0].getName() == "BlockToken") {
                    elseCode = Core.convert(scope, lastTokens[0].getContent());
                } else elseCode = Core.convert(scope, lastTokens);
            }
            // everything else is if/elif
            // either: if|elif (cond) {expr}
            //     or: if|elif (cond) expr
            trace(spl);
            var ifCodes:Array<CondAndExpr> = new Array<CondAndExpr>();
            for (tokens in spl) {
                trace(tokens);
                if (tokens[0].getName() != "BracketToken") throw new SyntaxErrorSignal("If condition must be surrounded in brackets");
                var cond:ValueCommand = ValueCommand.fromTokens(scope, tokens.shift().getContent());
                if (tokens.length == 1 && tokens[0].getName() == "BlockToken") {
                    ifCodes.push(new CondAndExpr(cond, Core.convert(scope, tokens[0].getContent())));
                } else {
                    if (tokens[tokens.length - 1].getName() != "EndLineToken") tokens.push(new EndLineToken(";"));
                    ifCodes.push(new CondAndExpr(cond, Core.convert(scope, tokens)));
                }
            }
            return new IfCommand(scope, ifCodes, elseCode);
        } else { // shorthand: [expr] if [cond] (else [expr])
            spl[0].push(new EndLineToken(";"));
            if (spl[1][spl[1].length - 1].getName() == "EndLineToken") spl[1].pop();
            var ifCode:CondAndExpr = new CondAndExpr(ValueCommand.fromTokens(scope, spl[1]), Core.convert(scope, spl[0]));
            if (spl.length == 2) { // [expr] if [cond]
                return new IfCommand(scope, [ifCode]);
            } else if (spl.length == 3) { // [expr] if [cond] else [expr]
                if (spl[2][spl[2].length - 1].getName() != "EndLineToken") spl[2].push(new EndLineToken(";"));
                return new IfCommand(scope, [ifCode], Core.convert(scope, spl[2]));
            } else throw new SyntaxErrorSignal("Shorthand if statement must be of the form .. if .. else .. OR .. if ..");
        }
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):IfCommand
    {
        var elseCode:Array<Command> = arr.shift().convert(scope);
        var ifCodes:Array<CondAndExpr> = new Array<CondAndExpr>();
        while (arr.length > 0) ifCodes.push(arr.shift().convert(scope));
        return new IfCommand(scope, ifCodes, elseCode);
    }

    private var ifCodes:Array<CondAndExpr>;
    private var elseCode:Array<Command>;
    override public function new(scope:Scope, ifCodes:Array<CondAndExpr>, ?elseCode:Array<Command>) 
    {
        super(scope);
        this.ifCodes = ifCodes;
        this.elseCode = elseCode;
    }
    
    override public function walk():Array<Command> 
    {
        var cmds:Array<Command> = new Array<Command>();
        for (x in ifCodes) cmds.push(x);
        for (x in elseCode) cmds.push(x);
        return cmds;
    }
    
    override public function run():Object 
    {
        for (condAndExpr in ifCodes) {
            if (condAndExpr.cond.run().rawBool()) {
                for (cmd in condAndExpr.code) {
                    cmd.run();
                }
                return null;
            }
        }
        if (elseCode != null) {
            for (cmd in elseCode) {
                cmd.run();
            }
        }
        return null;
    }
    
    override public function getName():String 
    {
        return "IfCommand";
    }
    
    override public function getBytecode():Bytecode 
    {
        var arr:Array<Dynamic> = ifCodes.copy();
        arr.insert(0, elseCode);
        return Bytecode.fromArray(arr, getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        var tokens:Array<Array<Token>> = new Array<Array<Token>>();
        var text:String = "if";
        for (cexpr in ifCodes) {
            tokens.push([new KwdToken(text), BracketToken.fromRaw(cexpr.cond.reconstruct()), BlockToken.fromRaw(new EndLineToken(";").join(Command.reconstructCommands(cexpr.code)))]);
            if (text == "if") text = "elif";
        }
        if (elseCode != null) {
            tokens.push([new KwdToken("else"), BlockToken.fromRaw(new EndLineToken(";").join(Command.reconstructCommands(elseCode)))]);
        }
        return Token.merge(tokens);
    }
    
}

class CondAndExpr extends Command {
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):CondAndExpr
    {
        return new CondAndExpr(arr.shift().convert(scope), arr.shift().convert(scope));
    }
    
    public var cond:ValueCommand;
    public var code:Array<Command>;
    override public function new(cond:ValueCommand, code:Array<Command>)
    {
        super(null);
        this.cond = cond;
        this.code = code;
    }
    
    override public function walk():Array<Command> 
    {
        var cmds:Array<Command> = code.copy();
        cmds.push(cond);
        return cmds;
    }
    
    override public function getName():String 
    {
        return "CondAndExpr";
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromArray([cond, code], getCodeID());
    }
}