package src;

import haxe.io.Bytes;
import src.ast.GlobalProcessor;
import src.ast.Token;
import src.maths.*;
import src.ast.TokenProcessor;
import src.ast.base.RootToken;
import src.compiler.Scope;
import src.compiler.VariableNamePool;
import src.compiler.bytecode.Bytecode;
import src.compiler.bytecode.StringPool;
import src.compiler.commands.RootCommand;
import src.compiler.object.Object;
import src.compiler.object.builtin.IntObject;
import src.compiler.Core;
import src.compiler.signals.ExitCodeSignal;
import src.compiler.signals.SyntaxErrorSignal;
import sys.FileSystem;
import sys.io.File;
import sys.io.FileOutput;

/**
 * ...
 * @author Billyoyo
 */
class Watermelon
{
    /*
     *  
     */
    public static var NAME = "Watermelon";
    public static var COMMANDNAME = "watermelon";
    public static var VERSION = "0.1.0";
    public static var print:String->Void = function(s:String):Void {
        Sys.stdout().writeString(s + "\n");
        Sys.stdout().flush();
    }

    public static function main()
    {
        //trace(Sys.args());
        //var line:String = Sys.stdin().readLine();
        //var i:Int = 0;
        /*var root:RootToken = GlobalProcessor.process("hello = world; {x + 1} \"test\"; if (x == 3) {x = 4;}");
        var tree:Array<String> = Token.createTree(root);
        trace(root);
        for (line in tree) {
            trace(line);
        }*/
        //trace(tokens);
        //trace(tokens);
        //var example:Array<Int> = [1, 2, 3];
        //trace(Type.typeof(example).equals(Type.ValueType.TClass(Array)));
        //trace(IntObject.intPower(7, 5));
        //var x:Object->Object->Bool = function(x:IntObject, y:Object):Bool {
        //    return false;
        //}
        
        
         
        var args:Array<String> = Sys.args();
        //var args:Array<String> = ["examples/import_example.frt", "-compile", "examples/import_example.juc", "-no-pool"];
        //var args:Array<String> = ["examples/example.frt", "-interp"];
        //var args:Array<String> = ["examples/import_example.juc"];
        //var args:Array<String> = ["examples/pipes.juc", "-recon", "example.rcn"];
        
        if (args.length == 0) { // open shell
            shell();
        } else {
            if (args[0].substr(0, 2) == "--") {
                var cmd:String = args[0].substr(2, args[0].length);
                if (cmd == "version") {
                    print('$NAME v$VERSION');
                } else if (cmd == "help") {
                    print('$COMMANDNAME [file] {-compile [output]|-interp|-ast}   - run file');
                    print('$COMMANDNAME --version                   - show version');
                    print('$COMMANDNAME --help                      - show help');
                }
            } else {
                var mode:Mode = Mode.Run;
                var file:String = null; var flag:String; var arg:String;
                var output:String = null; var i:Int = 0; var stringPool:Bool = true;
                while (i < args.length) {
                    arg = args[i++];
                    if (arg.charAt(0) == "-") {
                        flag = arg.substr(1);
                        if (mode != Mode.Run && flag != "no-pool") {
                            mode = Mode.Exit;
                            print("Too many run flags, can only have one");
                            break;
                        }
                        if (flag == "no-pool") stringPool = false;
                        else if (flag == "compile")  {
                            mode = Mode.Compile;
                            output = args[i++];
                        }
                        else if (flag == "interp") mode = Mode.Interpret;
                        else if (flag == "ast") mode = Mode.AST;
                        else if (flag == "recon") {
                            mode = Mode.Recon;
                            output = args[i++];
                        }
                        else {
                            print('invalid flag $flag');
                            mode = Mode.Exit;
                            break;
                        }
                    } else {
                        if (file == null) file = arg;
                        else file = file + " " + arg;
                    }
                }
                if (file == null) {
                    print("No file name given");
                } else if (!FileSystem.exists(file)) {
                    print('Invalid path, no file found at "$file"');
                } else if (mode == Mode.Run) {
                    var bytes:Bytes = File.getBytes(file);
                    var start:Float = Sys.time();
                    var code:RootCommand = Core.convertBytes(bytes);
                    code.run();
                    var end:Float = Sys.time();
                    trace('took ${end - start} milliseconds to run');
                } else if (mode == Mode.Compile) {
                    var lines:String = File.getContent(file);
                    var start:Float = Sys.time();
                    var root:RootToken = GlobalProcessor.process(lines);
                    var cmd:RootCommand = Core.convertRoot(root);
                    var code:Bytecode = Core.compile(cmd, stringPool);
                    var writer:FileOutput = File.write(output);
                    var bytes:Bytes = code.getByteData();
                    writer.writeBytes(bytes, 0, bytes.length);
                    writer.flush(); writer.close();
                    var end:Float = Sys.time();
                    print('compiled to $output, took ${end - start} milliseconds to compile');
                } else if (mode == Mode.Interpret) {
                    var lines:String = File.getContent(file);
                    var start:Float = Sys.time();
                    var root:RootToken = GlobalProcessor.process(lines);
                    var cmd:RootCommand = Core.convertRoot(root);
                    cmd.run();
                    var end:Float = Sys.time();
                    trace('took ${end - start} milliseconds to run');
                } else if (mode == Mode.AST) {
                    var lines:String = File.getContent(file);
                    var root:RootToken = GlobalProcessor.process(lines);
                    var tree:Array<String> = Token.createTree(root);
                    for (line in tree) print(line);
                } else if (mode == Mode.Recon) {
                    var bytes:Bytes = File.getBytes(file);
                    var code:RootCommand = Core.convertBytes(bytes);
                    var root:RootToken = RootToken.fromRaw(code.reconstruct());
                    var s:String = root.reconstruct();
                    var writer:FileOutput = File.write(output);
                    writer.writeString(s);
                    writer.flush(); writer.close();
                    print('Reconstructed bytecode to $output');
                }
            }
        }
        
        /*
        var lines:String = 'x = "hello world"; print("hello"); y = "hello again"; print(y); print("hello once more");';
        var root:RootToken = GlobalProcessor.process(lines);
        var cmd:RootCommand = Core.convertRoot(root);
        trace('best matches: ${StringPool.getBestMatches(StringPool.getStrings(cmd))}');
        var code:Bytecode = Core.compile(cmd);
        cmd = code.convert(new Scope("root"));
        cmd.run();
        trace('compiled length: ${code.getByteData().length}, original length: ${lines.length}');
        */
        /*
        var testStrings:Array<String> = [
            "hello world",
            "lower",
            "wow",
            "what's up, hello?",
            "ok",
            "damnit",
            "hello everyone",
            "worldwide"
        ];*/
        //trace(StringPool.getBestMatches(testStrings));
        //var code:Bytecode = cmd.getBytecode();
        //cmd = code.convert(new Scope("root"));
        //cmd.run();
        //trace('compiled length: ${code.getByteData().length}, original length: ${lines.length}');
        //var recon:RootToken = RootToken.fromRoot(cmd);
        //trace(recon.reconstruct());
        
        /*
        var root:RootToken = GlobalProcessor.process('func example(f) { return func(*args) { print("test"); return f(*args); }; } test = example(func(a, b) { print(a, b); }); test(1, 2); test("a", "b");');
        //var tree:Array<String> = Token.createTree(root);
        //for (line in tree) trace(line);
        
        
        var cmd:RootCommand = Core.convertRoot(root);
        var recon:RootToken = RootToken.fromRoot(cmd);
        trace(recon.reconstruct());
        //tree = Token.createTree(recon);
        //for (line in tree) trace(line);
        cmd = Core.convertRoot(recon);
        cmd.run();
        //cmd.run();*/
        //var bytecode:Bytecode = cmd.getBytecode();
        //var converted:RootCommand = bytecode.convert(new Scope("root"));
        //converted.run();
        
        //trace("aabaab".indexOf("b", 2));
        //var pool:VariableNamePool = new VariableNamePool();
        /*var tests:Array<Int> = [1523, 412, 10, 253, 102, 5123];
        for (i in tests) {
            var s:String = VariableNamePool.nameFromID(i);
            var j:Int = VariableNamePool.idFromName(s);
            trace('$i => $s => $j');
        }*/
    }
    
    public static function shell()
    {
        var line:String;
        var scope:Scope = new Scope("root");
        var root:RootToken; var code:RootCommand;
        while (true)
        {
            try {
                Sys.stdout().writeString(">>> ");
                Sys.stdout().flush();
                line = Sys.stdin().readLine();
                root = GlobalProcessor.process(line);
                code = Core.convertRoot(root, scope);
                code.run();
            } catch (e : ExitCodeSignal) {
                break;
            } catch (e : SyntaxErrorSignal) {
                print('SyntaxError: ${e.msg}');
            }
        }
    }
    
}

enum Mode {
    Compile;
    Interpret;
    Run;
    Exit;
    AST;
    Recon;
}