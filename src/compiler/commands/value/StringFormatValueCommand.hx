package src.compiler.commands.value;
import src.ast.GlobalProcessor;
import src.ast.Token;
import src.ast.base.RootToken;
import src.ast.base.StringToken;
import src.ast.base.VariableToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.object.Object;

/**
 * ...
 * @author Billyoyo
 */
class StringFormatValueCommand extends ValueCommand
{
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):StringFormatValueCommand
    {
        var result:Array<Dynamic> = new Array<Dynamic>();
        while (arr.length > 0) result.push(arr.shift().convert(scope));
        return new StringFormatValueCommand(scope, "", result);
    }


    private var content:Array<Dynamic>;
    override public function new(scope:Scope, content:String, ?raw:Array<Dynamic>) 
    {
        super(scope);
        if (raw != null) this.content = raw;
        else {
            this.content = new Array<Dynamic>();
            
            
            var index:Int = 0;
            var escaped:Bool; var i:Int; var end:Int = 0;
            while (index > -1) {
                escaped = false; i = index - 1;
                while (i >= 0 && content.charAt(i) == "\\") {
                    escaped = escaped == false;
                    i--;
                }
                index = content.indexOf("$", end);
                if (end < index - 1) {
                    if (escaped) this.content.push(ValueCommand.processStringEscapes(content.substring(end, index-2)));
                    else this.content.push(ValueCommand.processStringEscapes(content.substring(end, index-1)));
                }
                
                
                if (!escaped) {
                    if (index < content.length - 1 && content.charAt(index + 1) == "{") {
                        end = content.indexOf("}", index);
                        var token:RootToken = GlobalProcessor.process(content.substring(index + 2, end));
                        var cmd:ValueCommand = ValueCommand.fromTokens(scope, token.getContent());
                        this.content.push(cmd);
                        end++;
                    } else {
                        end = content.indexOf(" ", index);
                        var name:String = content.substring(index + 1, end);
                        var cmd:VariableAccess = VariableAccess.fromTokens(scope, [new VariableToken(name)]);
                        this.content.push(cmd);
                        end++;
                    }
                } else {
                    this.content.push("$");
                    end = index + 1;
                }
            }
        }
    }
    
    override public function copy(scope:Scope):Command 
    {
        var newContent:Array<Dynamic> = new Array<Dynamic>();
        for (x in content) {
            if (Std.instance(x, Command) != null) {
                newContent.push(x.copy(scope));
            } else {
                newContent.push(x);
            }
        }
        return new StringFormatValueCommand(scope, null, newContent);
    }
    
    override public function run():Object 
    {
        var s:String = "";
        for (el in content) {
            if (Type.getClass(el) == String) s += el;
            else s += el.run().rawString();
        }
        return scope.getType("StringType").createValue(s, scope);
    }
    
    
    override public function getName():String 
    {
        return "StringFormatValueCommand";
    }
    
    override public function getFriendlyName():String 
    {
        return "string format";
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromArray(content, getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        return [new StringToken('f"$content"')];
    }
}