package src.compiler.commands.value;
import src.ast.Token;
import src.ast.maths.BinaryOperatorToken;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.object.Object;
import src.compiler.signals.SyntaxErrorSignal;
import src.compiler.signals.ValueErrorSignal;

/**
 * ...
 * @author Billyoyo
 */
class BinaryExpressionValueCommand extends ValueCommand
{

    public static function fromTokens(scope:Scope, tokens:Array<Token>):BinaryExpressionValueCommand
    {
        var state:Int = 7;
        for (token in tokens) {
            if (token.getName() == "BinaryOperatorToken") {
                var op:String = token.getContent();
                if (op == "|") state = 0;                    // or
                else if (op == "^" && state > 1) state = 1;  // xor
                else if (op == "&" && state > 2) state = 2;  // and
                else if (op == "<<" && state > 3) state = 3;  // left shift
                else if (op == ">>" && state > 4) state = 4; // right shift
                else if (op == "~" && state > 5) state = 5; // complement
            }
        }
        
        
        if (state == 7) { // no operator found?
            if (tokens.length == 1) { // look for brackets, number or variable
                return new BinaryExpressionValueCommand(scope, state, [ValueCommand.fromToken(scope, tokens[0])]);
            } else throw new SyntaxErrorSignal('Invalid binary expression $tokens');
        } else {
            var op:String = ["|", "^", "&", "<<", ">>", "~"][state];
            var spl:Array<ValueCommand> = ValueCommand.splitTokens(scope, tokens, "BinaryOperatorToken", false, op);
            return new BinaryExpressionValueCommand(scope, state, spl);
        }
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):BinaryExpressionValueCommand
    {
        var op:Int = arr.shift().convert(scope);
        var values:Array<ValueCommand> = new Array<ValueCommand>();
        while (arr.length > 0) values.push(arr.shift().convert(scope));
        return new BinaryExpressionValueCommand(scope, op, values);
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
        if (operator == 0) { // or
            var result:Object = values[0].run();
            for (i in 1...values.length) {
                result = result.or(values[i].run());
            }
            return result;
        } else if (operator == 1) { // xor
            var result:Object = values[0].run();
            for (i in 1...values.length) {
                result = result.xor(values[i].run());
            }
            return result;
        } else if (operator == 2) { // and
            var result:Object = values[0].run();
            for (i in 1...values.length) {
                result = result.and(values[i].run());
            }
            return result;
        } else if (operator == 3) { // left shift
            var result:Object = values[values.length - 1].run();
            for (i in 2...values.length+1) {
                result = values[values.length - i].run().shiftleft(result);
            }
            return result;
        } else if (operator == 4) { // right shift
            var result:Object = values[values.length - 1].run();
            for (i in 2...values.length+1) {
                result = values[values.length - i].run().shiftright(result);
            }
            return result;
        } else if (operator == 5) { // complement
            if (values.length > 1) throw new ValueErrorSignal("Cannot take the complement of more than one value");
            return values[0].run().complement();
        }
        throw 'Invalid operator $operator'; // oh no
    }
    
    override public function getName():String 
    {
        return "BinaryExpressionValueCommand";
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
        var op:String = ["|", "^", "&", "<<", ">>", "~"][operator];
        return new BinaryOperatorToken(op).join(Command.reconstructCommands(values));
    }
    
    
}