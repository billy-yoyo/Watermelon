package src.compiler.commands.value;
import src.ast.Token;
import src.ast.base.SpliceToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.object.Object;
import src.compiler.object.builtin.SpliceObject;
import src.compiler.signals.SyntaxErrorSignal;
import src.compiler.signals.ValueErrorSignal;

/**
 * ...
 * @author Billyoyo
 */
class SpliceValueCommand extends ValueCommand
{
    public static function fromTokens(scope:Scope, tokens:Array<Token>):SpliceValueCommand
    {
        var spl:Array<Array<Token>> = Command.splitTokens(tokens, "SpliceToken");
        if (spl.length == 1) throw new SyntaxErrorSignal("Splice must have at least two values");
        if (spl.length > 3) throw new SyntaxErrorSignal("Splice can have a max of 3 values");
        
        var start:ValueCommand = null;
        if (spl[0].length > 0) start = ValueCommand.fromTokens(scope, spl[0]);
        
        var end:ValueCommand = null;
        if (spl[1].length > 0) end = ValueCommand.fromTokens(scope, spl[1]);
        
        var step:ValueCommand = null;
        if (spl.length > 2 && spl[2].length > 0) step = ValueCommand.fromTokens(scope, spl[2]);
        
        return new SpliceValueCommand(scope, start, end, step);
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):SpliceValueCommand
    {
        return new SpliceValueCommand(scope, arr.shift().convert(scope), arr.shift().convert(scope), arr.shift().convert(scope));
    }

    private var start:ValueCommand;
    private var end:ValueCommand;
    private var step:ValueCommand;
    public function new(scope:Scope, start:ValueCommand, end:ValueCommand, step:ValueCommand) 
    {
        super(scope);
        this.start = start;
        this.end = end;
        this.step = step;
    }
    
    override public function copy(scope:Scope):Command 
    {
        return new SpliceValueCommand(scope, if (start == null) null else cast(start.copy(scope), ValueCommand), if (end == null) null else cast(end.copy(scope), ValueCommand), if (step == null) null else cast(step.copy(scope), ValueCommand));
    }
    
    override public function setScope(scope:Scope) 
    {
        super.setScope(scope);
        if (start != null) start.setScope(scope);
        if (end != null) end.setScope(scope);
        if (step != null) step.setScope(scope);
    }
    
    override public function getName():String 
    {
        return "SpliceValueCommand";
    }
    
    override public function getFriendlyName():String 
    {
        return "splice";
    }
    
    override public function run():Object 
    {
        var start:Int = 0; var end:Int = 0; var step:Int = 1;
        if (this.start != null) start = this.start.run().rawInt();
        if (this.step != null) step = this.step.run().rawInt();
        if (this.end != null) end = this.end.run().rawInt();
        return new SpliceObject(scope, scope.getType("SpliceType"), start, end, step, this.start != null, this.end != null, this.step != null);
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromArray([start, end, step], getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        var tokens:Array<Token> = new Array<Token>();
        if (start != null) tokens = tokens.concat(start.reconstruct());
        tokens.push(new SpliceToken(":"));
        if (end != null) tokens = tokens.concat(end.reconstruct());
        tokens.push(new SpliceToken(":"));
        if (step != null) tokens = tokens.concat(step.reconstruct());
        return tokens;
    }
    
}