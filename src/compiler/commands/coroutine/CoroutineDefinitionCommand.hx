package src.compiler.commands.coroutine;
import src.ast.Token;
import src.ast.base.BlockToken;
import src.ast.base.BracketToken;
import src.ast.base.CommaToken;
import src.ast.base.KwdToken;
import src.ast.base.VariableToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.commands.FunctionArgumentCommand;
import src.compiler.commands.coroutine.CoroutineCodeCommand;
import src.compiler.commands.value.LiteralValueCommand;
import src.compiler.commands.value.ValueCommand;
import src.compiler.commands.value.VariableAccess;
import src.compiler.object.Object;
import src.compiler.object.builtin.FunctionArgument;
import src.compiler.object.builtin.FunctionCode;
import src.compiler.signals.SyntaxErrorSignal;

/**
 * ...
 * @author Billyoyo
 */
class CoroutineDefinitionCommand extends ValueCommand
{

    public static function fromTokens(scope:Scope, tokens:Array<Token>):CoroutineDefinitionCommand
    {
        var start:Token = tokens.shift();
        if (start.getName() == "KwdToken" && start.getContent() == "coro") {
            var decorators:Array<VariableAccess> = null;
            if (tokens[0].getName() == "BracketToken" && (tokens[1].getName() == "VariableToken" || tokens[1].getName() == "BracketToken")) {
                decorators = new Array<VariableAccess>();
                var spl:Array<Array<Token>> = Command.splitTokens(tokens.shift().getContent(), "CommaToken");
                for (tokens in spl) {
                    decorators.push(VariableAccess.fromTokens(scope, tokens));
                }
            }
            
            var name:String = null;
            if (tokens[0].getName() == "VariableToken") {
                name = tokens.shift().getContent(); // scope.getPool().newName('$scope.${tokens.shift().getContent()}');
            }
            var funcScope:Scope = new Scope(if (name == null) scope.nextFuncScopeName() else name, scope);
            
            if (tokens.length == 2) {
                if (tokens[0].getName() == "BracketToken" && tokens[1].getName() == "BlockToken") {
                    var argSpl:Array<Array<Token>> = Command.splitTokens(tokens[0].getContent(), "CommaToken");
                    var codeTokens:Array<Token> = tokens[1].getContent();
                    
                    var args:Array<FunctionArgumentCommand> = new Array<FunctionArgumentCommand>();
                    var collector:Bool; var forceKwd:Bool;
                    for (argTokens in argSpl) {
                        if (argTokens.length == 0) {
                            if (argSpl.length > 1) throw "Empty argument";
                        } else {
                            collector = false;
                            forceKwd = false;
                            if (argTokens[0].getName() == "MathsOperatorToken") {
                                var operator:String = argTokens.shift().getContent();
                                if (operator == "**") {
                                    collector = true;
                                    forceKwd = true;
                                } else if (operator == "*") {
                                    collector = true;
                                } else {
                                    throw new SyntaxErrorSignal('Invalid operator $operator');
                                }
                            }
                            var argName:String = argTokens[0].getContent();
                            //argName = scope.getPool().newName('$funcScope.$argName');
                            if (argTokens.length == 1 && argTokens[0].getName() == "VariableToken") {
                                args.push(new FunctionArgumentCommand(argName, false || forceKwd, collector));
                            } else if (argTokens.length > 2 && argTokens[0].getName() == "VariableToken" && argTokens[1].getName() == "AssignmentToken") {
                                args.push(new FunctionArgumentCommand(argName, true, collector, ValueCommand.fromTokens(scope, argTokens.splice(2, argTokens.length))));
                            } else {
                                throw new SyntaxErrorSignal('Invalid function argument $argTokens');
                            }
                        }
                    }
                    
                    return new CoroutineDefinitionCommand(scope, name, args, CoroutineCodeCommand.fromTokens(funcScope, codeTokens), decorators);
                } else throw new SyntaxErrorSignal("Invalid coroutine definition");
            } else throw new SyntaxErrorSignal("Invalid coroutine definition");
        } else throw new SyntaxErrorSignal("Invalid coroutine definition");
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):CoroutineDefinitionCommand
    {
        var name:String = arr.shift().convert(scope);
        var funcScope:Scope = new Scope(if (name == null) scope.nextFuncScopeName() else name, scope);
        return new CoroutineDefinitionCommand(scope, name, arr.shift().convert(scope), arr.shift().convert(funcScope), arr.shift().convert(scope));
    }
    
    private var name:String;
    private var args:Array<FunctionArgumentCommand>;
    private var code:CoroutineCodeCommand;
    private var decorators:Array<VariableAccess>;
    override public function new(scope:Scope, name:String, args:Array<FunctionArgumentCommand>, code:CoroutineCodeCommand, ?decorators:Array<VariableAccess>) 
    {
        super(scope);
        this.name = name;
        this.args = args;
        this.code = code;
        this.decorators = if (decorators == null) new Array<VariableAccess>() else decorators;
    }
    
    override public function copy(scope:Scope):Command 
    {
        var newArgs:Array<FunctionArgumentCommand> = new Array<FunctionArgumentCommand>();
        for (arg in args) newArgs.push(cast(arg.copy(scope), FunctionArgumentCommand));
        return new CoroutineDefinitionCommand(scope, name, newArgs, cast(code.copy(scope), CoroutineCodeCommand), VariableAccess.copyArray(scope, decorators));
    }
    
    override public function setScope(scope:Scope) 
    {
        super.setScope(scope);
        for (arg in args) arg.setScope(scope);
        code.getScope().setParent(scope);
        for (dec in decorators) dec.setScope(scope);
    }
    
    override public function walk():Array<Command> 
    {
        var cmds:Array<Command> = new Array<Command>();
        for (x in args) cmds.push(x);
        for (x in decorators) cmds.push(x);
        cmds.push(code);
        if (name != null) cmds.push(new LiteralValueCommand(scope, name));
        return cmds;
    }
    
    override public function run():Object 
    {
        var args:Array<FunctionArgument> = new Array<FunctionArgument>();
        for (arg in this.args) args.push(arg.getFuncArg());
        var func:Object = scope.getType("CoroutineFunctionType").createValue(new FunctionCode(code, args), scope);
        var decorator:Object;
        for (variable in decorators) {
            decorator = variable.getVariable();
            func = decorator.call([func]);
        }
        
        if (name == null) {
            return func;
        } else {
            scope.setVariable(name, func);
            return null;
        }
    }
    
    override public function getName():String 
    {
        return "CoroutineDefinitionCommand";
    }
    
    override public function getFriendlyName():String 
    {
        return "coroutine definition";
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromArray([name, args, code, decorators], getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        var argTokens:Array<Array<Token>> = new Array<Array<Token>>();
        var tokens:Array<Token>;
        for (arg in this.args) {
            tokens = arg.reconstruct();
            tokens.push(new CommaToken(","));
            argTokens.push(tokens);
        }
        var final:Array<Token> = Token.merge(argTokens);
        if (final.length > 0 && final[final.length - 1].getName() == "CommaToken") final.pop();
        if (decorators.length == 0) {
            if (name == null) {
                return Token.merge([new KwdToken("coro"), BracketToken.fromRaw(final), BlockToken.fromRaw(code.reconstruct())]);
            } else {
                return Token.merge([new KwdToken("coro"), new VariableToken(name), BracketToken.fromRaw(final), BlockToken.fromRaw(code.reconstruct())]);
            }
        } else {
            if (name == null) {
                return Token.merge([new KwdToken("coro"), BracketToken.fromRaw(new CommaToken(",").join(Command.reconstructCommands(decorators))), BracketToken.fromRaw(final), BlockToken.fromRaw(code.reconstruct())]);
            } else {
                return Token.merge([new KwdToken("coro"), BracketToken.fromRaw(new CommaToken(",").join(Command.reconstructCommands(decorators))), new VariableToken(name), BracketToken.fromRaw(final), BlockToken.fromRaw(code.reconstruct())]);
            }
        }
    }
    
}