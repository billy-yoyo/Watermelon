package src.compiler.commands;
import src.ast.Token;
import src.ast.base.BracketToken;
import src.ast.base.KwdToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.commands.value.ValueCommand;
import src.compiler.commands.value.VariableAccess;
import src.compiler.object.Object;
import src.compiler.signals.SyntaxErrorSignal;
import src.compiler.signals.InvalidFieldAccessSignal;
import src.compiler.commands.value.VariableValueCommand;

/**
 * ...
 * @author Billyoyo
 */
class DeleteCommand extends Command
{
    public static function fromTokens(scope:Scope, tokens:Array<Token>):DeleteCommand
    {
        if (tokens.length == 0) throw new SyntaxErrorSignal("Empty command");
        var start:Token = tokens.shift();
        if (start.getName() != "KwdToken" || start.getContent() != "del") throw new SyntaxErrorSignal("Invalid delete command, keyword must be at the start");
        var end:Token = tokens.pop();
        if (end.getName() != "EndLineToken") throw new SyntaxErrorSignal("Invalid delete command, must end with an end line");
        
        if (tokens.length == 0) throw new SyntaxErrorSignal("Empty delete command");
        
        if (tokens.length > 1 && tokens[tokens.length - 1].getName() == "ListToken") { // delete element
            return new DeleteCommand(scope, VariableAccess.fromTokens(scope, tokens.splice(0, tokens.length - 1)), ValueCommand.fromTokens(scope, tokens.pop().getContent())); 
        } else {
            return new DeleteCommand(scope, VariableAccess.fromTokens(scope, tokens));
        }
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):DeleteCommand
    {
        return new DeleteCommand(scope, arr.shift().convert(scope), arr.shift().convert(scope));
    }
    
    private var element:ValueCommand;
    private var variable:VariableAccess;
    public function new(scope:Scope, variable:VariableAccess, ?element:ValueCommand) 
    {
        super(scope);
        this.element = element;
        this.variable = variable;
    }
    
    override public function copy(scope:Scope):Command 
    {
        return new DeleteCommand(scope, cast(variable.copy(scope), VariableAccess), if (element == null) null else cast(element.copy(scope), ValueCommand));
    }
    
    override public function setScope(scope:Scope) 
    {
        super.setScope(scope);
        element.setScope(scope);
        variable.setScope(scope);
    }
    
    override public function walk():Array<Command> 
    {
        return [element, variable];
    }
    
    override public function run():Object 
    {
        if (element == null) { // delete variable
            variable.deleteVariable();
        } else {
            var obj:Object = variable.getVariable();
            obj.delete(element.run());
        }
        return null;
    }
    
    override public function getName():String 
    {
        return "DeleteCommand";
    }
    
    override public function getFriendlyName():String 
    {
        return "deletion";
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromArray([variable, element], getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        if (element == null) {
            return Token.merge([new KwdToken("del"), variable.reconstruct()]);
        } else {
            return Token.merge([new KwdToken("del"), variable.reconstruct(), BracketToken.fromRaw(element.reconstruct())]);
        }
    }
    
}