package src.compiler.commands.value;
import haxe.Int64;
import src.ast.Token;
import src.ast.base.AccessToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.object.Object;
import src.compiler.signals.InvalidFieldAccessSignal;
import src.compiler.signals.SyntaxErrorSignal;

/**
 * ...
 * @author Billyoyo
 */
class VariableAccess extends Command
{
    
    public static function fromTokens(scope:Scope, tokens:Array<Token>, ?definition:Bool):VariableAccess
    {
        var spl:Array<Array<Token>> = Command.splitTokens(tokens, "AccessToken");
        var vars:Array<ValueCommand> = new Array<ValueCommand>();
        for (subtokens in spl) {
            if (subtokens.length == 1 && subtokens[0].getName() == "VariableToken") vars.push(new LiteralValueCommand(scope, subtokens[0].getContent()));
            else vars.push(ValueCommand.fromTokens(scope, subtokens));
        }
        //if (last.length == 1 && last[0].getName() == "VariableToken") vars.push(new LiteralValueCommand(scope, last[0].getContent()));
        //else throw new SyntaxErrorSignal('Invalid field $last');
        return new VariableAccess(scope, vars, definition);
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):VariableAccess
    {
        /*if (arr.length == 1) {
            var i:Int = arr.pop().convert(scope);
            return fromInt(scope, i);
        } else {
            var vars:Array<ValueCommand> = new Array<ValueCommand>();
            while(arr.length > 0) vars.push(arr.shift().convert(scope));
            return new VariableAccess(scope, vars);
        }*/
        var vars:Array<ValueCommand> = new Array<ValueCommand>();
        while(arr.length > 0) vars.push(arr.shift().convert(scope));
        return new VariableAccess(scope, vars);
    }
    
    public static function fromInt(scope:Scope, i:Int):VariableAccess
    {
        var name:String = VariableNamePool.nameFromID(i);
        return new VariableAccess(scope, [new LiteralValueCommand(scope, name)], false, true);
    }
    
    private var vars:Array<ValueCommand>;
    public function new(scope:Scope,vars:Array<ValueCommand>, ?definition:Bool, ?obfuscated:Bool) 
    {
        super(scope);
        //trace('creating variable access $vars');
        this.vars = vars;
        if (vars.length == 0) throw new SyntaxErrorSignal('Empty variable access');
        /*this.accessDirectory = "";
        this.fuzzy = false;
        for (v in vars) {
            if (v.getName() == "LiteralValueCommand") {
                this.accessDirectory += cast(v, LiteralValueCommand).getContent() + ".";
            } else {
                this.accessDirectory += "*.";
                this.fuzzy = true;
            }
        }
        this.accessDirectory = this.accessDirectory.substr(0, this.accessDirectory - 1).split(".");
        this.definition = (definition != null && definition);
        /*
        var last:ValueCommand = vars[vars.length - 1];
        if (last.getName() != "LiteralValueCommand") throw new SyntaxErrorSignal('Invalid field $last');
        else {
            var literal:LiteralValueCommand = cast(last, LiteralValueCommand);
            this.field = literal.getContent();
            if (vars.length == 1 && (obfuscated == null || obfuscated == false)) { // direct variable access, not a field
                if (definition) this.field = scope.getPool().newName('$scope.${this.field}');
                else this.field = scope.getPool().getName('$scope.${this.field}');
                literal.setContent(this.field);
            }
        }*/
    }
    
    public function getVars():Array<ValueCommand>
    {
        return vars;
    }
    
    override public function walk():Array<Command> 
    {
        var cmds:Array<Command> = new Array<Command>();
        for (x in vars) cmds.push(x);
        return cmds;
    }
    
    public function getVariable():Object
    {
        var obj:Object;
        if (vars[0].getName() == "LiteralValueCommand") obj = scope.getVariable(cast(vars[0], LiteralValueCommand).getContent());
        else obj = vars[0].run(); 
        
        var v:Object;
        for (i in 1...vars.length) {
            v = vars[i].run();
            if (!obj.hasfield(v).rawBool()) throw new InvalidFieldAccessSignal('Invalid field, $obj has no field ${v.rawString()}');
            obj = obj.getfield(v);
        }
        return obj;
        //var sfield:Object = obj._str(field);
        //if (!obj.hasfield(sfield).rawBool()) throw new InvalidFieldAccessSignal('Invalid field, $obj has no field $field');
        //return obj.getfield(sfield);
    }
    
    public function setVariable(value:Object)
    {
        if (vars.length == 1) {
            scope.setVariable(vars[0].run().rawString(), value);
            return;
        }
        var obj:Object;
        if (vars[0].getName() == "LiteralValueCommand") obj = scope.getVariable(cast(vars[0], LiteralValueCommand).getContent());
        else obj = vars[0].run(); 
        
        var v:Object;
        for (i in 1...(vars.length-1)) {
            v = vars[i].run();
            if (!obj.hasfield(v).rawBool()) throw new InvalidFieldAccessSignal('Invalid field access, $obj has no field ${v.rawString()}');
            obj = obj.getfield(v);
        }
        if (obj == null) throw new InvalidFieldAccessSignal('Null object found');
        obj.setfield(vars[vars.length - 1].run(), value);
    }
    
    public function deleteVariable()
    {
        if (vars.length == 1) {
            scope.deleteVariable(vars[0].run().rawString());
            return;
        }
        var obj:Object;
        if (vars[0].getName() == "LiteralValueCommand") obj = scope.getVariable(cast(vars[0], LiteralValueCommand).getContent());
        else obj = vars[0].run();
        
        var v:Object;
        for (i in 1...(vars.length-1)) {
            v = vars[i].run();
            if (!obj.hasfield(v).rawBool()) throw new InvalidFieldAccessSignal('Invalid field access, $obj has no field ${v.rawString()}');
            obj = obj.getfield(v);
        }
        if (obj == null) throw new InvalidFieldAccessSignal('Null object found');
        obj.delfield(vars[vars.length - 1].run());
    }
    
    override public function getName():String 
    {
        return "VariableAccess";
    }
    
    override public function getBytecode():Bytecode
    {
        /*if (vars.length == 1) {
            var literal:LiteralValueCommand = cast(vars[0], LiteralValueCommand);
            var name:String = literal.getContent();
            var id:Int = VariableNamePool.idFromName(name);
            return Bytecode.fromVariable(id);
            //return Bytecode.fromArray([id], getCodeID());
        } else return Bytecode.fromArray(vars, getCodeID());*/
        return Bytecode.fromArray(vars, getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        return new AccessToken(".").join(Command.reconstructCommands(vars));
    }
}