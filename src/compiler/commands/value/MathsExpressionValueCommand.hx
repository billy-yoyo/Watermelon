package src.compiler.commands.value;
import src.ast.Token;
import src.ast.maths.MathsOperatorToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.object.Object;
import src.compiler.signals.SyntaxErrorSignal;

/**
 * ...
 * @author Billyoyo
 */
class MathsExpressionValueCommand extends ValueCommand
{
    
    public static function fromTokens(scope:Scope, tokens:Array<Token>):MathsExpressionValueCommand
    {
        var state:Int = 7;
        for (token in tokens) {
            if (token.getName() == "MathsOperatorToken") {
                var op:String = token.getContent();
                if (op == "-") state = 0;                    // subtraction
                else if (op == "+" && state > 1) state = 1;  // addition
                else if (op == "*" && state > 2) state = 2;  // multiplication
                else if (op == "/" && state > 3) state = 3;  // division
                else if (op == "//" && state > 4) state = 4; // int div
                else if (op == "%" && state > 5) state = 5;  // modulo
                else if (op == "**" && state > 6) state = 6; // indicies (power)
            }
        }
        
        
        if (state == 7) { // no operator found?
            if (tokens.length == 1) { // look for brackets, number or variable
                return new MathsExpressionValueCommand(scope, state, [ValueCommand.fromToken(scope, tokens[0])]);
            } else throw new SyntaxErrorSignal('Invalid mathematical expression $tokens');
        } else {
            var op:String = ["-", "+", "*", "/", "//", "%", "**"][state];
            var spl:Array<ValueCommand> = ValueCommand.splitTokens(scope, tokens, "MathsOperatorToken", false, op);
            return new MathsExpressionValueCommand(scope, state, spl);
        }
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):MathsExpressionValueCommand
    {
        var op:Int = arr.shift().convert(scope);
        var values:Array<ValueCommand> = new Array<ValueCommand>();
        while (arr.length > 0) values.push(arr.shift().convert(scope));
        return new MathsExpressionValueCommand(scope, op, values);
    }

    private var operator:Int;
    private var values:Array<ValueCommand>;
    override public function new(scope:Scope, operator:Int, values:Array<ValueCommand>) 
    {
        super(scope);
        this.operator = operator;
        this.values = values;
    }
    
    override public function walk():Array<Command> 
    {
        var cmds:Array<Command> = new Array<Command>();
        for (x in values) cmds.push(x);
        return cmds;
    }
    
    override public function run():Object 
    {
        if (operator == 0) { // sub
            var result:Object = values[values.length - 1].run();
            for (i in 2...values.length+1) {
                result = values[values.length - i].run().sub(result);
            }
            return result;
        } else if (operator == 1) { // add
            var result:Object = values[0].run();
            for (i in 1...values.length) {
                result = result.add(values[i].run());
            }
            return result;
        } else if (operator == 2) { // mult
            var result:Object = values[0].run();
            for (i in 1...values.length) {
                result = result.mult(values[i].run());
            }
            return result;
        } else if (operator == 3) { // div
            var result:Object = values[values.length - 1].run();
            for (i in 2...values.length+1) {
                result = values[values.length - i].run().div(result);
            }
            return result;
        } else if (operator == 4) { // int div
            var result:Object = values[values.length - 1].run();
            for (i in 2...values.length+1) {
                result = values[values.length - i].run().intdiv(result);
            }
            return result;
        } else if (operator == 5) { // mod
            var result:Object = values[values.length - 1].run();
            for (i in 2...values.length+1) {
                result = values[values.length - i].run().mod(result);
            }
            return result;
        } else if (operator == 6) { // pow
            var result:Object = values[values.length - 1].run();
            for (i in 2...values.length+1) {
                result = values[values.length - i].run().pow(result);
            }
            return result;
        } else if (values.length == 1) { // single value
            return values[0].run();
        }
        throw 'Invalid operator $operator'; // oh no
    }
    
    override public function getName():String 
    {
        return "MathsExpressionValueCommand";
    }
    
    override public function getBytecode():Bytecode 
    {
        var op:Bytecode = Bytecode.fromInt(operator);
        var arr:Array<Dynamic> = values.copy();
        arr.insert(0, op);
        return Bytecode.fromArray(arr, getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        var op:String = ["-", "+", "*", "/", "//", "%", "**"][operator];
        return new MathsOperatorToken(op).join(Command.reconstructCommands(values));
    }
    
}