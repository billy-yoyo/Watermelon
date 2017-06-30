package src.compiler.commands;
import src.ast.Token;
import src.ast.base.CommaToken;
import src.ast.base.VariableToken;
import src.ast.script.AssignmentToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.commands.value.ValueCommand;
import src.compiler.object.Object;
import src.compiler.commands.value.VariableValueCommand;
import src.compiler.commands.value.VariableAccess;
import src.compiler.signals.InvalidArgumentSignal;
import src.compiler.signals.InvalidFieldAccessSignal;
import src.compiler.signals.SyntaxErrorSignal;

/**
 * ...
 * @author Billyoyo
 */
class AssignmentCommand extends Command
{

    public static function fromTokens(scope:Scope, tokens:Array<Token>):AssignmentCommand
    {
        var end:Token = tokens.pop();
        if (end.getName() != "EndLineToken") throw new SyntaxErrorSignal('Assignments should end with and EndLineToken');
        
        var index:Int = 0;
        while (tokens[index].getName() != "AssignmentToken") index += 1;
        var lhs:Array<Token> = tokens.splice(0, index);
        var rhs:Array<Token> = tokens.splice(1, tokens.length);
        
        if (lhs.length == 0) throw new SyntaxErrorSignal("Empty left hand side of assignment");
        if (rhs.length == 0) throw new SyntaxErrorSignal("Empty right hand side of assignment");
        
        var operator:Int = 0;
        var opToken:Token = lhs[lhs.length - 1];
        if (opToken.getName() == "MathsOperatorToken") {
            // in order: (default) =, +=, -=, *=, /=, //=, **=, >>=, <<=, %=
            var op:String = lhs.pop().getContent();
            if (op == "+") operator = 1;
            else if (op == "-") operator = 2;
            else if (op == "*") operator = 3;
            else if (op == "/") operator = 4;
            else if (op == "//") operator = 5;
            else if (op == "**") operator = 6;
            else if (op == "%") operator = 9;
        } else if (opToken.getName() == "BinaryOperatorToken") {
            var op:String = opToken.getContent();
            if (op == ">>" || op == "<<") {
                lhs.pop();
                if (op == ">>") operator = 7;
                else operator = 8;
            }
        }
        //trace('LHS: $lhs, RHS: $rhs (index: $index, tokens: $tokens)');
        
        var vars:Array<VariableAccess> = new Array<VariableAccess>();
        var spl:Array<Array<Token>> = Command.splitTokens(lhs, "CommaToken");
        for (subtokens in spl) {
            vars.push(VariableAccess.fromTokens(scope, subtokens, true));
        }
        
        return new AssignmentCommand(scope, vars, ValueCommand.fromTokens(scope, rhs), operator);
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):AssignmentCommand
    {
        return new AssignmentCommand(scope, arr.shift().convert(scope), arr.shift().convert(scope), arr.shift().convert(scope));
    }
    
    private var variables:Array<VariableAccess>;
    private var value:ValueCommand;
    private var operator:Int;
    public function new(scope:Scope, variables:Array<VariableAccess>, value:ValueCommand, operator:Int)
    {
        super(scope);
        this.variables = variables;
        this.value = value;
        this.operator = operator; // in order: (default) =, +=, -=, *=, /=, //=, **=, >>=, <<=, %=
    }
    
    override public function copy(scope:Scope):Command 
    {
        return new AssignmentCommand(scope, VariableAccess.copyArray(scope, variables), cast(value.copy(scope), ValueCommand), operator);
    }
    
    override public function setScope(scope:Scope) 
    {
        super.setScope(scope);
        for (v in variables) v.setScope(scope);
        value.setScope(scope);
    }
    
    override public function walk():Array<Command> 
    {
        var cmds:Array<Command> = new Array<Command>();
        for (x in variables) cmds.push(x);
        cmds.push(value);
        return cmds;
    }
    /*
    public static function assignVariable(scope:Scope, variable:Array<String>, obj:Object)
    {
        if (variable.length == 1) {
            scope.setVariable(variable[0], obj);
        } else {
            var o:Object = scope.getVariable(variable[0]); var s:Object;
            for (i in 1...variable.length - 1) {
                s = o._str(variable[i]);
                if (!o.hasfield(s).rawBool()) throw new InvalidFieldAccessSignal('Object $o has no field ${variable[i]}');
                o = o.getfield(s);
            }
            o.setfield(o._str(variable[variable.length - 1]), obj);
        }
    }*/
    
    public static function setVariable(variable:VariableAccess, obj:Object, operator:Int)
    {
        // (default) =, +=, -=, *=, /=, //=, **=, >>=, <<=, %=
        if (operator == 0) {
            variable.setVariable(obj);
            return;
        }
        var original:Object = variable.getVariable();
        if (operator == 1) { // addition assign
            variable.setVariable(original.add(obj));
        } else if (operator == 2) { // subtraction assign
            variable.setVariable(original.sub(obj));
        } else if (operator == 3) { // mult assign
            variable.setVariable(original.mult(obj));
        } else if (operator == 4) { // div assign
            variable.setVariable(original.div(obj));
        } else if (operator == 5) { // intdiv assign
            variable.setVariable(original.intdiv(obj));
        } else if (operator == 6) { // pow assign
            variable.setVariable(original.pow(obj));
        } else if (operator == 7) { // rshift assign
            variable.setVariable(original.shiftright(obj));
        } else if (operator == 8) { // lshift assign
            variable.setVariable(original.shiftleft(obj));
        } else if (operator == 9) { // modulo assign
            variable.setVariable(original.mod(obj));
        } else throw new SyntaxErrorSignal("Invalid assignment operator");
    }
    
    public static function assign(variables:Array<VariableAccess>, obj:Object, operator:Int)
    {
        if (variables.length == 1) {
            setVariable(variables[0], obj, operator);
        } else {
            var len:Int = obj.len().rawInt();
            if (obj.len().rawInt() == variables.length) {
                for (i in 0...len) {
                    setVariable(variables[i], obj.get(obj._int(i)), operator);
                }
            } else throw new InvalidArgumentSignal('Mismatched lengths for amount of variables, expected ${variables.length}, found $len');
        }
    }
    
    override public function run():Object 
    {
        var obj:Object = value.run();
        assign(variables, obj, operator);
        return null;
    }
    
    override public function getName():String 
    {
        return "AssignmentCommand";
    }
    
    override public function getFriendlyName():String 
    {
        return "assignment";
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromArray([variables, value, operator], getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        var varTokens:Array<Array<Token>> = new Array<Array<Token>>();
        var tokens:Array<Token>;
        for (v in variables) {
            tokens = v.reconstruct();
            tokens.push(new CommaToken(","));
            varTokens.push(tokens);
        }
        var final:Array<Token> = Token.merge(varTokens);
        if (final.length > 0 && final[final.length - 1].getName() == "CommaToken") final.pop();
        return Token.merge([final, new AssignmentToken("="), value.reconstruct()]);
    }
    
}