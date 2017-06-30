package src.compiler.commands;
import haxe.io.Bytes;
import haxe.io.Path;
import src.ast.GlobalProcessor;
import src.ast.Token;
import src.ast.base.RootToken;
import src.compiler.Scope;
import src.compiler.bytecode.Bytecode;
import src.compiler.commands.Command;
import src.compiler.object.Object;
import src.compiler.object.builtin.ModuleObject;
import src.compiler.signals.ExitCodeSignal;
import src.compiler.signals.ExitSignal;
import src.compiler.signals.ImportErrorSignal;
import src.compiler.signals.SyntaxErrorSignal;
import src.compiler.signals.ValueErrorSignal;
import sys.FileSystem;
import sys.io.File;

/**
 * ...
 * @author Billyoyo
 */
class ImportCommand extends Command
{
    
    public static function fromTokens(scope:Scope, tokens:Array<Token>):ImportCommand
    {
        if (tokens.pop().getName() != "EndLineToken") throw new SyntaxErrorSignal("Import must end with an endline");
        var importAs:String = null; var dir:Array<String> = new Array<String>();
        var start:Token = tokens.shift();
        if (start.getName() != "KwdToken" || start.getContent() != "import") throw new SyntaxErrorSignal("import must start with import keyword");
        if (tokens.length > 2 && tokens[tokens.length - 2].getName() == "KwdToken") {
            var nameToken:Token = tokens.pop();
            var end:Token = tokens.pop();
            if (end.getContent() != "as") throw new SyntaxErrorSignal("invalid keyword (import as name must be a single word)");
            if (nameToken.getName() != "VariableToken") throw new SyntaxErrorSignal("invalid import as name");
            importAs = nameToken.getContent();
        }
        var dirTokens:Array<Array<Token>> = Command.splitTokens(tokens, "AccessToken");
        for (subtokens in dirTokens) {
            if (subtokens.length != 1 || subtokens[0].getName() != "VariableToken") throw new SyntaxErrorSignal("Invalid import");
            dir.push(subtokens[0].getContent());
        }
        if (dir.length == 0) throw new SyntaxErrorSignal("Empty import directory");
        return new ImportCommand(scope, dir, importAs);
    }
    
    public static function fromBytecode(scope:Scope, arr:Array<Bytecode>):ImportCommand
    {
        var importAs:String = arr.shift().convert(scope);
        var dir:Array<String> = new Array<String>();
        while (arr.length > 0) dir.push(arr.shift().convert(scope));
        return new ImportCommand(scope, dir, importAs);
    }

    public static function getModule(scope:Scope, dir:Array<String>, name:String):ModuleObject
    {
        // first check local directory
        var path:String = null; var compiled:Bool = false;
        var relPath:String = Path.join(dir);
        if (FileSystem.exists(relPath + ".juc")) { // import compiled file
            path = relPath + ".juc";
            compiled = true;
        } else if (FileSystem.exists(relPath + ".frt")) { // import source file
            path = relPath + ".frt";
        } else { // check library directory
            var libDir:Array<String> = dir.copy();
            libDir.insert(0, Path.directory(Sys.programPath()));
            libDir.insert(0, "modules");
            var libPath:String = Path.join(libDir);
            if (FileSystem.exists(libPath + ".juc")) { // import compiled file from installed modules
                path = libPath + ".juc";
                compiled = true;
            } else if (FileSystem.exists(libPath + ".frt")) { // import source file from installed modules
                path = libPath + ".frt";
            } else { // check builtins
                //throw new ImportErrorSignal(
                //return null;
                
            }
            
        }
        if (path == null) throw new ImportErrorSignal('Invalid import directory ${dir.join(".")}');
        var code:RootCommand;
        
        if (compiled) {
            var bytes:Bytes = File.getBytes(path);
            code = Core.convertBytes(bytes, scope.getRoot(), name);
        } else {
            var lines:String = File.getContent(path);
            var root:RootToken = GlobalProcessor.process(lines);
            code = Core.convertRoot(root, scope.getRoot(), name);
        }
        
        code.handleErrors = false;
        var command:Command = null;
        try {
            for (i in 0...code.commands.length) {
                command = code.commands[i];
                command.run();
            }
        } catch (e : ExitSignal) {
            if (e.getName() == "ExitCodeSignal") throw new ExitCodeSignal();
            RootCommand.throwUncaughtError(command, '(Error in import ${dir.join(".")}) ${e.getName()}: ${e.msg}');
        }
        var module:ModuleObject = cast(scope.getType("ModuleType").createValue(code.scope, scope.getRoot()), ModuleObject);
        trace('created module: ${code.scope} with variables ${code.scope.getVariables()}');
        return module;
    }
    
    public var dir:Array<String>;
    public var importAs:String;
    override public function new(scope:Scope, dir:Array<String>, importAs:String) 
    {
        super(scope);
        this.dir = dir;
        this.importAs = if (importAs == null) dir[dir.length - 1] else importAs;
    }
    
    override public function copy(scope:Scope):Command 
    {
        return new ImportCommand(scope, dir.copy(), importAs);
    }
    
    override public function getName():String 
    {
        return "ImportCommand";
    }
    
    override public function getFriendlyName():String 
    {
        return "import";
    }
    
    override public function run():Object 
    {
        var module:ModuleObject = getModule(scope, dir, importAs);
        scope.getRoot().setVariable(importAs, module);
        return null;
    }
    
    override public function getBytecode():Bytecode 
    {
        var arr:Array<Dynamic> = new Array<Dynamic>();
        arr.push(importAs);
        for (x in dir) arr.push(x);
        return Bytecode.fromArray(arr, getCodeID());
    }
    
    override public function reconstruct():Array<Token> 
    {
        return super.reconstruct();
    }
    
}