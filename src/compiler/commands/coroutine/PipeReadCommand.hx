package src.compiler.commands.coroutine;
import src.ast.Token;
import src.ast.base.BracketToken;
import src.ast.base.CommaToken;
import src.ast.script.PipeReadToken;
import src.ast.base.VariableToken;
import src.ast.base.WildcardToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.commands.value.ValueCommand;
import src.compiler.commands.value.VariableAccess;
import src.compiler.object.Object;
import src.compiler.object.builtin.coroutine.CoroutineObject;
import src.compiler.signals.CoroutineEmptyReadSignal;
import src.compiler.signals.IteratorExitSignal;
import src.compiler.signals.SyntaxErrorSignal;
import src.compiler.signals.ValueErrorSignal;
import src.compiler.signals.YieldSignal;

/**
 * ...
 * @author Billyoyo
 */
class PipeReadCommand extends Command
{
    
    public static function fromTokens(scope:Scope, tokens:Array<Token>):PipeReadCommand
    {
        if (tokens.length == 0 || tokens.pop().getName() != "EndLineToken") throw new SyntaxErrorSignal("Invalid pipe read command (must end in endline)");
        var isTimeLocked:Bool = false;
        for (token in tokens) {
            if (token.getName() == "PipeReadToken" && token.getContent() == "!>") {
                isTimeLocked = true;
                break;
            }
        }
        var spl:Array<Array<Token>> = Command.splitTokens(tokens, "PipeReadToken");
        if (spl.length == 1) throw new SyntaxErrorSignal("Invalid pipe read command");
        if (spl.length > 2) throw new SyntaxErrorSignal("Invalid pipe read command, can only do one read in a single command");
        var left:Array<Token> = spl[0];
        var right:Array<Token> = spl[1];
        
        var timeLock:ValueCommand = null;
        if (isTimeLocked) {
            timeLock = ValueCommand.fromToken(scope, left.pop());
        }
        
        var source:ValueCommand = null;
        var wildcard:String = null;
        if (left.length > 0) {
            if (left[0].getName() == "WildcardToken") {
                left.shift();
                if (left.length > 1 || (left.length == 1 && left[0].getName() != "VariableToken")) throw new SyntaxErrorSignal("Invalid wildcard name, must be a single variable");
                if (left.length == 1) wildcard = left[0].getContent();
                else wildcard = "";
            } else {
                source = ValueCommand.fromTokens(scope, left);
            }
        }
        var vars:Array<String> = new Array<String>();
        if (right.length > 0) {
            var varSpl:Array<Array<Token>> = Command.splitTokens(right, "CommaToken");
            for (subtokens in varSpl) {
                if (subtokens.length != 1 || subtokens[0].getName() != "VariableToken") throw new SyntaxErrorSignal("Invalid output variable name, must be a list of variable names");
                vars.push(subtokens[0].getContent());
            }
        }
        return new PipeReadCommand(scope, source, vars, wildcard, timeLock);
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):PipeReadCommand
    {
        return new PipeReadCommand(scope, arr.shift().convert(scope), arr.shift().convert(scope), arr.shift().convert(scope), arr.shift().convert(scope));
    }
    
    public var cachedSource:CoroutineObject = null;
    public var cacheEnabled:Bool = false;
    private var source:ValueCommand;
    private var vars:Array<String>;
    private var wildcard:String;
    private var timeLock:ValueCommand;
    override public function new(scope:Scope, source:ValueCommand, vars:Array<String>, wildcard:String, timeLock:ValueCommand) 
    {
        super(scope);
        this.source = source;
        this.vars = vars;
        this.wildcard = wildcard;
        this.timeLock = timeLock;
    }
    
    public function getVars():Array<String>
    {
        return vars;
    }
    
    override public function copy(scope:Scope):Command 
    {
        return new PipeReadCommand(scope, if (source == null) null else cast(source.copy(scope), ValueCommand), vars.copy(), wildcard, if (timeLock == null) null else cast(timeLock.copy(scope), ValueCommand));
    }
    
    override public function setScope(scope:Scope) 
    {
        super.setScope(scope);
        if (source != null) source.setScope(scope);
        if (timeLock != null) timeLock.setScope(scope);
    }
    
    override public function getName():String 
    {
        return "PipeReadCommand";
    }
    
    override public function getFriendlyName():String 
    {
        
        return "pipe read";
    }
    
    override public function run():Object 
    {
        var coro:CoroutineObject = this.getScope().coroutineObject;
        if (coro == null) throw new SyntaxErrorSignal("Pipe read command used outside of a coroutine");
        
        var source:CoroutineObject = null;
        if (this.source != null) {
            if (this.cachedSource == null) {
                var rawSource:Object = this.source.run();
                if (!rawSource.isInstance("CoroutineType")) throw new ValueErrorSignal("Can only read from a coroutine");
                source = cast(rawSource, CoroutineObject);
                if (!source.isQueued()) source.queue();
                if (cacheEnabled) this.cachedSource = source;
            } else {
                source = this.cachedSource;
                source.addVars(vars);
            }
            /*
            if (source.isFinished() && source.outputStack.length == 0) {
                var emptyInput:Bool = true;
                for (packet in coro.inputStack) {
                    if (packet.source == source) {
                        emptyInput = false;
                        break;
                    }
                }
                if (emptyInput) throw new CoroutineEmptyReadSignal("Read too many values from coroutine");
            }*/
        }
        
        if (timeLock != null) throw YieldSignal.readYield(source, vars.copy(), wildcard, timeLock.run().rawFloat());
        else throw YieldSignal.readYield(source, vars.copy(), wildcard);
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromArray([source, vars, wildcard, timeLock], getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        var tokens:Array<Token> = new Array<Token>();
        if (timeLock == null) tokens.push(new PipeReadToken(":>"));
        else tokens.push(BracketToken.fromRaw(timeLock.reconstruct()));
        
        if (source != null) {
            tokens = source.reconstruct().concat(tokens);
        } else if (wildcard != null) {
            if (wildcard != "") tokens = [new WildcardToken("?"), new VariableToken(wildcard)].concat(tokens)
            else tokens.insert(0, new WildcardToken("?"));
        } 
        var varTokens:Array<Token> = new Array<Token>();
        for (v in vars) {
            varTokens.push(new VariableToken(v));
            varTokens.push(new CommaToken(","));
        }
        if (varTokens.length > 1) varTokens.pop();
        return tokens.concat(varTokens);
    }
    
}