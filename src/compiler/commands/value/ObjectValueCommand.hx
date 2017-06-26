package src.compiler.commands.value;
import src.ast.Token;
import src.ast.base.KwdToken;
import src.ast.base.StringToken;
import src.ast.maths.FloatToken;
import src.ast.maths.IntegerToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.object.Object;

/**
 * ...
 * @author Billyoyo
 */
class ObjectValueCommand extends ValueCommand
{
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):ObjectValueCommand
    {
        return new ObjectValueCommand(scope, arr.shift().convert(scope), ["IntType", "FloatType", "StringType", "BoolType"][arr.shift().convert(scope)]);
    }
    
    public var value:Dynamic;
    public var type:String;
    public function new(scope:Scope, value:Dynamic, type:String) 
    {
        super(scope);
        this.value = value;
        this.type = type;
    }
    
    override public function run():Object 
    {
        return scope.getType(type).createValue(value);
    }
    
    override public function getName():String 
    {
        return "ObjectValueCommand";
    }
    
    override public function getBytecode():Bytecode 
    {
        var op:Bytecode;
        if (type == "IntType") op = Bytecode.fromKeyword("Zero");
        else if (type == "FloatType") op = Bytecode.fromKeyword("One");
        else if (type == "StringType") op = Bytecode.fromKeyword("Two");
        else if (type == "BoolType") op = Bytecode.fromKeyword("Three");
        else throw 'Unexpected type $type';
        return Bytecode.fromArray([value, op], getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        if (type == "IntType") {
            var i:Int = value;
            return [new IntegerToken('$i')];
        } else if (type == "FloatType") {
            var f:Float = value;
            return [new FloatToken('$f')];
        } else if (type == "StringType") {
            var s:String = value;
            return [new StringToken('"$s"')];
        } else if (type == "BoolType") {
            var b:Bool = value;
            var kwd:String = if (b) "true" else "false";
            return [new KwdToken(kwd)];
        } else throw 'Unexpected type $type';
    }
}