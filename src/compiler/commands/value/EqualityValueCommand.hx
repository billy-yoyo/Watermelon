package src.compiler.commands.value;
import src.ast.Token;
import src.ast.script.EqualityOperatorToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.object.Object;
import src.compiler.signals.SyntaxErrorSignal;

/**
 * ...
 * @author Billyoyo
 */
class EqualityValueCommand extends ValueCommand
{

    public static function fromTokens(scope:Scope, tokens:Array<Token>):EqualityValueCommand
    {
        var operators:Array<Int> = new Array<Int>();
        for (token in tokens) {
            if (token.getName() == "EqualityOperatorToken") {
                operators.push(["==", "!=", ">=", "<=", ">", "<"].indexOf(token.getContent()));
            }
        }
        
        var values:Array<ValueCommand> = ValueCommand.splitTokens(scope, tokens, "EqualityOperatorToken");
        if (values.length == 1) throw "Single value in equality";
        else {
            return new EqualityValueCommand(scope, values, operators);
        }
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):EqualityValueCommand
    {
        return new EqualityValueCommand(scope, arr.shift().convert(scope), arr.shift().convert(scope));
    }

    private var values:Array<ValueCommand>;
    private var checkers:Array<Object->Object->Bool>;
    private var _operators:Array<Int>;
    public function new(scope:Scope, values:Array<ValueCommand>, operators:Array<Int>) 
    {
        super(scope);
        this.values = values;
        this.checkers = new Array<Object->Object->Bool>();
        this._operators = operators;
        if (this.values.length != operators.length + 1) throw new SyntaxErrorSignal("Invalid amount of operators and values");
        for (operator in operators) {
            if (operator == 0) {
                checkers.push(function(left:Object, right:Object):Bool {
                    return left.eq(right).rawBool();
                });
            } else if (operator == 1) {
                checkers.push(function(left:Object, right:Object):Bool {
                    return left.neq(right).rawBool();
                });
            } else if (operator == 2) {
                checkers.push(function(left:Object, right:Object):Bool {
                    return left.greq(right).rawBool();
                });
            } else if (operator == 3) {
                checkers.push(function(left:Object, right:Object):Bool {
                    return left.lseq(right).rawBool();
                });
            } else if (operator == 4) {
                checkers.push(function(left:Object, right:Object):Bool {
                    return left.ls(right).rawBool();
                });
            } else if (operator == 5) {
                checkers.push(function(left:Object, right:Object):Bool {
                    return left.gr(right).rawBool();
                });
            } else {
                throw 'Invalid operator $operator';
            }
        }
    }
    
    override public function walk():Array<Command> 
    {
        var cmds:Array<Command> = new Array<Command>();
        for (x in values) cmds.push(x);
        return cmds;
    }
    
    override public function run():Object
    {
        var result:Bool = true;
        var lastObj:Object = values[0].run(); var obj:Object;
        for (i in 1...values.length) {
            obj = values[i].run();
            if (!checkers[i - 1](lastObj, obj)) {
                result = false;
                break;
            }
        }
        return scope.getType("BoolType").createValue(result);
    }
    
    override public function getName():String 
    {
        return "EqualityValueCommand";
    }
    
    override public function getBytecode():Bytecode 
    {
        var arr:Array<Dynamic> = new Array<Dynamic>();
        arr.push(values[0]);
        for (i in 0..._operators.length) {
            arr.push(_operators[i]);
            arr.push(values[i + 1]);
        }
        return Bytecode.fromArray(arr, getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        var tokens:Array<Token> = new Array<Token>();
        var values:Array<ValueCommand> = this.values.copy();
        var operators:Array<String> = new Array<String>();
        for (op in _operators) operators.push(["==", "!=", ">=", "<=", ">", "<"][op]);
        tokens.concat(values.shift().reconstruct());
        while (values.length > 0) {
            tokens.push(new EqualityOperatorToken(operators.shift()));
            tokens.concat(values.shift().reconstruct());
        }
        return tokens;
    }
    
}