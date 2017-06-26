package src.compiler.commands.value;
import src.ast.Token;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.signals.InvalidFieldAccessSignal;
import src.compiler.object.Object;

/**
 * ...
 * @author Billyoyo
 */
class VariableValueCommand extends ValueCommand
{
    
    public static function fromTokens(scope:Scope, tokens:Array<Token>):VariableValueCommand
    {
        return new VariableValueCommand(scope, VariableAccess.fromTokens(scope, tokens));
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):VariableValueCommand
    {
        return new VariableValueCommand(scope, arr.shift().convert(scope));
    }
    
    private var variable:VariableAccess; 
    override public function new(scope:Scope, variable:VariableAccess) 
    {
        super(scope);
        this.variable = variable;
    }
    
    override public function walk():Array<Command> 
    {
        return [variable];
    }
    
    override public function run():Object 
    {
        //trace('looking for variable $variable');
        return variable.getVariable();
    }
    
    override public function getName():String 
    {
        return "VariableValueCommand";
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromArray([variable], getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        return variable.reconstruct();
    }
}