package src.compiler.commands;
import src.ast.Token;
import src.ast.base.BlockToken;
import src.ast.base.BracketToken;
import src.ast.base.CommaToken;
import src.ast.base.KwdToken;
import src.ast.base.VariableToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.commands.value.LiteralValueCommand;
import src.compiler.commands.value.VariableAccess;
import src.compiler.object.Object;
import src.compiler.object.ObjectType;
import src.compiler.object.builtin.ObjectTypeObject;
import src.compiler.signals.InvalidArgumentSignal;
import src.compiler.signals.SyntaxErrorSignal;
import src.compiler.commands.value.VariableValueCommand;
import src.compiler.signals.YieldSignal;

/**
 * ...
 * @author Billyoyo
 */
class TypeDefinitionCommand extends Command
{
    public static function fromTokens(scope:Scope, tokens:Array<Token>):TypeDefinitionCommand
    {
        var start:Token = tokens.shift();
        if (start.getName() != "KwdToken" || start.getContent() != "type") throw new SyntaxErrorSignal("Type definition must start with type keyword");
        
        var extensions:Array<VariableAccess> = null;
        if (tokens[0].getName() == "BracketToken" && (tokens[1].getName() == "VariableToken" || tokens[1].getName() == "BracketToken")) {
            extensions = new Array<VariableAccess>();
            var spl:Array<Array<Token>> = Command.splitTokens(tokens.shift().getContent(), "CommaToken");
            for (tokens in spl) {
                extensions.push(VariableAccess.fromTokens(scope, tokens));
            }
        }
        
        var name:String = null;
        if (tokens[0].getName() == "VariableToken") {
            name = tokens.shift().getContent(); // scope.getPool().newName('$scope.${tokens.shift().getContent()}');
        }
        
        var codeToken:Token = tokens.pop();
        var typeScope:Scope = new Scope(if (name == null) scope.nextTypeScopeName() else name, scope);
        if (codeToken.getName() != "BlockToken") throw new SyntaxErrorSignal("Type definition must end in block");
        var code:Array<Command> = Core.convert(typeScope, codeToken.getContent());
        
        return new TypeDefinitionCommand(scope, typeScope, name, extensions, code);
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):TypeDefinitionCommand
    {
        var name:String = arr.shift().convert(scope);
        var typeScope:Scope = new Scope(if (name == null) scope.nextTypeScopeName() else name, scope);
        return new TypeDefinitionCommand(scope, typeScope, name, arr.shift().convert(scope), arr.shift().convert(typeScope));
    }

    private var typeScope:Scope;
    private var name:String;
    private var extensions:Array<VariableAccess>;
    private var code:Array<Command>;
    public function new(scope:Scope, typeScope:Scope, name:String, extensions:Array<VariableAccess>, code:Array<Command>) 
    {
        super(scope);
        this.typeScope = typeScope;
        this.name = name;
        this.extensions = extensions;
        if (extensions == null) this.extensions = new Array<VariableAccess>();
        this.code = code;
    }
    
    override public function copy(scope:Scope):Command 
    {
        var typeScope:Scope = new Scope(typeScope.getName(), scope);
        return new TypeDefinitionCommand(scope, typeScope, name, VariableAccess.copyArray(scope, extensions), Command.copyArray(scope, code));
    }
    
    override public function setScope(scope:Scope) 
    {
        super.setScope(scope);
        typeScope.setParent(scope);
        for (ext in extensions) ext.setScope(scope);
        for (cmd in code) cmd.setScope(scope);
    }
    
    override public function walk():Array<Command> 
    {
        var cmds:Array<Command> = code.copy();
        for (ext in extensions) cmds.push(ext);
        if (name != null) cmds.push(new LiteralValueCommand(scope, name));
        return cmds;
    }
    
    override public function run():Object 
    {
        try {
            for (cmd in code) cmd.run();
        } catch (e : YieldSignal) {
            throw new SyntaxErrorSignal("Cannot yield from within a type definition");
        }
        var members:Map<String, Object> = new Map<String, Object>();
        for (name in typeScope.getVariables().keys()) {
            members.set(name, typeScope.getVariables().get(name));
        }
        for (name in typeScope.getTypes().keys()) {
            members.set(name, typeScope.getTypes().get(name));
        }
        var parents:Array<ObjectType> = new Array<ObjectType>();
        for (variable in extensions) {
            var obj:Object = variable.getVariable();
            if (!obj.isInstance("ObjectTypeType")) throw new InvalidArgumentSignal("None-Type extension given");
            parents.push(cast(obj, ObjectTypeObject).getValue());
        }
        if (this.name != null) {
            scope.setType(this.name, new ObjectType(scope, this.name, members, null, parents), true);
            return null;
        } else {
            return scope.getType("ObjectTypeType").createValue(new ObjectType(scope, scope.getName(), members, null, parents), scope);
        }
       
    }
    
    override public function getName():String 
    {
        return "TypeDefinitionCommand";
    }
    
    override public function getFriendlyName():String 
    {
        return "type definition";
    }
    
    override public function getBytecode():Bytecode 
    {
        return Bytecode.fromArray([name, extensions, code], getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        if (extensions.length == 0) {
            if (name == null) {
                return Token.merge([new KwdToken("type"), BlockToken.fromRaw(Command.reconstructCommands(code))]);
            } else {
                return Token.merge([new KwdToken("type"), new VariableToken(name), BlockToken.fromRaw(Command.reconstructCommands(code))]);
            }
        } else {
            if (name == null) {
                return Token.merge([new KwdToken("type"), new KwdToken("extends"), BracketToken.fromRaw(new CommaToken(",").join(Command.reconstructCommands(extensions))), BlockToken.fromRaw(Command.reconstructCommands(code))]);
            } else {
                return Token.merge([new KwdToken("type"), new VariableToken(name), new KwdToken("extends"), BracketToken.fromRaw(new CommaToken(",").join(Command.reconstructCommands(extensions))), BlockToken.fromRaw(Command.reconstructCommands(code))]);
            }
        }
    }
}