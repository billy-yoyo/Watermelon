package src.compiler.commands;
import src.ast.Token;
import src.ast.base.KwdToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.commands.value.ValueCommand;
import src.compiler.object.Object;
import src.compiler.signals.CustomErrorSignal;
import src.compiler.signals.ValueErrorSignal;

/**
 * ...
 * @author Billyoyo
 */
class RaiseCommand extends Command
{

    public static function fromTokens(scope:Scope, tokens:Array<Token>):RaiseCommand
    {
        var end:Token = tokens.pop();
        if (end.getName() != "EndLineToken") throw "Raise must end in endline";
        
        var start:Token = tokens.shift();
        if (start.getName() != "KwdToken" || start.getContent() != "raise") throw "Invalid raise keyword";
        
        if (tokens.length == 0) return new RaiseCommand(scope, null);
        else return new RaiseCommand(scope, ValueCommand.fromTokens(scope, tokens));
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):RaiseCommand
    {
        return new RaiseCommand(scope, arr.shift().convert(scope));
    }
    
    private var value:ValueCommand;
    override public function new(scope:Scope, value:ValueCommand) 
    {
        super(scope);
        this.value = value;
    }
    
    override public function copy(scope:Scope):Command 
    {
        return new RaiseCommand(scope, cast(value.copy(scope), ValueCommand));
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
        var obj:Object = value.run();
        if (value != null) throw new CustomErrorSignal(obj);
        else throw new ValueErrorSignal("Cannot raise nothing");
    }
    
    override public function getName():String 
    {
        return "RaiseCommand";
    }
    
    override public function getFriendlyName():String 
    {
        return "raise";
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromArray([value], getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        return Token.merge([new KwdToken("raise"), value.reconstruct()]);
    }
    
}