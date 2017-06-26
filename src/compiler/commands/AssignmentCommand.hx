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
        //trace('LHS: $lhs, RHS: $rhs (index: $index, tokens: $tokens)');
        
        var vars:Array<VariableAccess> = new Array<VariableAccess>();
        var spl:Array<Array<Token>> = Command.splitTokens(lhs, "CommaToken");
        for (subtokens in spl) {
            vars.push(VariableAccess.fromTokens(scope, subtokens, true));
        }
        
        return new AssignmentCommand(scope, vars, ValueCommand.fromTokens(scope, rhs));
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):AssignmentCommand
    {
        return new AssignmentCommand(scope, arr.shift().convert(scope), arr.shift().convert(scope));
    }
    
    private var variables:Array<VariableAccess>;
    private var value:ValueCommand;
    public function new(scope:Scope, variables:Array<VariableAccess>, value:ValueCommand)
    {
        super(scope);
        this.variables = variables;
        this.value = value;
    }
    
    override public function walk():Array<Command> 
    {
        var cmds:Array<Command> = new Array<Command>();
        for (x in variables) cmds.push(x);
        cmds.push(value);
        return cmds;
    }
    
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
    }
    
    public static function assign(scope:Scope, variables:Array<VariableAccess>, obj:Object)
    {
        if (variables.length == 1) {
            variables[0].setVariable(obj);
        } else {
            var len:Int = obj.len().rawInt();
            if (obj.len().rawInt() == variables.length) {
                for (i in 0...len) {
                    variables[i].setVariable(obj.get(obj._int(i)));
                }
            } else throw new InvalidArgumentSignal('Mismatched lengths for amount of variables, expected ${variables.length}, found $len');
        }
    }
    
    override public function run():Object 
    {
        var obj:Object = value.run();
        assign(scope, variables, obj);
        return null;
    }
    
    override public function getName():String 
    {
        return "AssignmentCommand";
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromArray([variables, value], getCodeID());
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