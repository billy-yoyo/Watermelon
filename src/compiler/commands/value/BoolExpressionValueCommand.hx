package src.compiler.commands.value;
import src.ast.Token;
import src.ast.script.BooleanOperatorToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.bytecode.BytecodeMap;
import src.compiler.commands.Command;
import src.compiler.object.Object;

/**
 * ...
 * @author Billyoyo
 */
class BoolExpressionValueCommand extends ValueCommand
{
    public static function fromTokens(scope:Scope, tokens:Array<Token>):BoolExpressionValueCommand
    {
        var spl:Array<Array<Token>> = Command.splitTokens(tokens, "BooleanOperatorToken", "||");
        if (spl.length > 1)
        {
            var values:Array<ValueCommand> = new Array<ValueCommand>();
            for (tokens in spl) {
                values.push(ValueCommand.fromTokens(scope, tokens));
            }
            return new BoolExpressionValueCommand(scope, 1, values);
        } else if (spl.length == 0) throw "Empty boolean expression";
        else {
            spl = Command.splitTokens(spl[0], "BooleanOperatorToken", "&&");
            if (spl.length > 1)
            {
                var values:Array<ValueCommand> = new Array<ValueCommand>();
                for (tokens in spl) {
                    values.push(ValueCommand.fromTokens(scope, tokens));
                }
                return new BoolExpressionValueCommand(scope, 0, values);
            } else if (spl.length == 0) throw "Empty boolean expression";
            else {
                tokens = spl[0];
                if (tokens.length == 2 && tokens[0].getName() == "BooleanOperatorToken") {
                    return new BoolExpressionValueCommand(scope, 2, [ValueCommand.fromToken(scope, tokens[1])]);
                } else throw "Invalid negation expression";
            }
        }
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):BoolExpressionValueCommand
    {
        var op:Int = arr.shift().convert(scope);
        var values:Array<ValueCommand> = new Array<ValueCommand>();
        while (arr.length > 0) values.push(arr.shift().convert(scope));
        return new BoolExpressionValueCommand(scope, op, values);
    }
    
    private var operator:Int;
    private var values:Array<ValueCommand>;
    override public function new(scope:Scope, operator:Int, values:Array<ValueCommand>) 
    {
        super(scope);
        this.operator = operator;
        this.values = values;
    }
    
    override public function copy(scope:Scope):Command 
    {
        return new BoolExpressionValueCommand(scope, operator, ValueCommand.copyArray(scope, values));
    }
    
    override public function setScope(scope:Scope) 
    {
        super.setScope(scope);
        for (value in values) value.setScope(scope);
    }
    
    override public function walk():Array<Command> 
    {
        var cmds:Array<Command> = new Array<Command>();
        for (x in values) cmds.push(x);
        return cmds;
    }
    
    override public function run():Object 
    {
        if (operator == 0) {
            for (value in values) {
                if (!value.run().rawBool()) return scope.getType("BoolType").createValue(false, scope);
            }
            return scope.getType("BoolType").createValue(true, scope);
        } else if (operator == 1) {
            for (value in values) {
                if (value.run().rawBool()) return scope.getType("BoolType").createValue(true, scope);
            }
            return scope.getType("BoolType").createValue(false, scope);
        } else if (operator == 2) {
            return values[0].run().not();
        }
        return null;
    }
    
    override public function getName():String 
    {
        return "BoolExpressionValueCommand";
    }
    
    override public function getFriendlyName():String 
    {
        return "boolean expression";
    }
    
    override public function getBytecode():Bytecode 
    {
        var op:Bytecode = Bytecode.fromInt(operator);
        var arr:Array<Dynamic> = values;
        arr.insert(0, op);
        return Bytecode.fromArray(arr, getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        var op:String = ["&&", "||", "!"][operator];
        return new BooleanOperatorToken(op).join(Command.reconstructCommands(values));
    }
    
}
