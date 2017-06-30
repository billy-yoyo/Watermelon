package src.compiler.commands;
import src.ast.Token;
import src.ast.base.KwdToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.signals.FunctionReturnSignal;
import src.compiler.commands.value.ValueCommand;
import src.compiler.commands.value.ObjectValueCommand;
import src.compiler.object.Object;

/**
 * ...
 * @author Billyoyo
 */
class ReturnCommand extends Command
{

    public static function fromTokens(scope:Scope, tokens:Array<Token>)
    {
        var end:Token = tokens.pop();
        if (end.getName() != "EndLineToken") throw "Return must end in endline";
        
        var start:Token = tokens.shift();
        if (start.getName() != "KwdToken" || start.getContent() != "return") throw "Invalid return keyword";
        
        if (tokens.length == 0) return new ReturnCommand(scope, null);
        else return new ReturnCommand(scope, ValueCommand.fromTokens(scope, tokens));
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):ReturnCommand
    {
        return new ReturnCommand(scope, arr.shift().convert(scope));
    }
    
    private var value:ValueCommand;
    override public function new(scope:Scope, value:ValueCommand) 
    {
        super(scope);
        this.value = value;
    }
    
    override public function copy(scope:Scope):Command 
    {
        return new ReturnCommand(scope, cast(value.copy(scope), ValueCommand));
    }
    
    override public function setScope(scope:Scope) 
    {
        super.setScope(scope);
        value.setScope(scope);
    }
    
    override public function walk():Array<Command> 
    {
        return value.walk();
    }
    
    override public function run():Object 
    {
        if (value != null) throw new FunctionReturnSignal(value.run());
        else throw new FunctionReturnSignal(null);
    }
    
    override public function getName():String 
    {
        return "ReturnCommand";
    }
    
    override public function getFriendlyName():String 
    {
        return "return";
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromArray([value], getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        return Token.merge([new KwdToken("return"), value.reconstruct()]);
    }
}