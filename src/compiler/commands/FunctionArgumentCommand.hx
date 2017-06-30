package src.compiler.commands;
import src.ast.Token;
import src.ast.base.VariableToken;
import src.ast.maths.MathsOperatorToken;
import src.ast.script.AssignmentToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.commands.value.ValueCommand;
import src.compiler.object.builtin.FunctionArgument;

/**
 * ...
 * @author Billyoyo
 */
class FunctionArgumentCommand extends Command
{
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):FunctionArgumentCommand
    {
        return new FunctionArgumentCommand(arr.shift().convert(scope), arr.shift().convert(scope), arr.shift().convert(scope), arr.shift().convert(scope));
    }
    
    private var name:String;
    private var kwd:Bool;
    private var collector:Bool;
    private var _default:ValueCommand;
    override public function new(name:String, kwd:Bool, collector:Bool, ?_default:ValueCommand)
    {
        super(null);
        this.name = name;
        this.kwd = kwd;
        this.collector = collector;
        this._default = _default;
    }
    
    override public function copy(scope:Scope):Command 
    {
        return new FunctionArgumentCommand(name, kwd, collector, if (_default == null) null else cast(_default.copy(scope), ValueCommand));
    }
    
    override public function setScope(scope:Scope) 
    {
        super.setScope(scope);
        if (_default != null) _default.setScope(scope);
    }
    
    public function getFuncArg():FunctionArgument
    {
        if (_default == null) return new FunctionArgument(name, kwd, collector);
        else return new FunctionArgument(name, kwd, collector, _default.run());
    }
    
    override public function getName():String 
    {
        return "FunctionArgumentCommand";
    }
    
    override public function getFriendlyName():String 
    {
        return "function argument";
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromArray([name, kwd, collector, _default], getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        if (kwd) {
            if (collector) {
                return Token.merge([new MathsOperatorToken("**"), new VariableToken(name), new AssignmentToken("="), _default.reconstruct()]);
            } else {
                return Token.merge([new VariableToken(name), new AssignmentToken("="),  _default.reconstruct()]);
            }
        } else {
            if (collector) {
                return [new MathsOperatorToken("*"), new VariableToken(name)];
            } else {
                return [new VariableToken(name)];
            }
        }
    }
}