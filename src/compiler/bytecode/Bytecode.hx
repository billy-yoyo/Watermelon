package src.compiler.bytecode;
import haxe.Constraints.Function;
import haxe.Int64;
import haxe.io.Bytes;
import haxe.io.BytesBuffer;
import haxe.io.BytesData;
import src.compiler.Scope;
import src.compiler.commands.Command;
import src.compiler.commands.value.LiteralValueCommand;
import src.compiler.commands.value.VariableAccess;

/**
 * ...
 * @author Billyoyo
 */
class Bytecode
{
    public static var currentStringPool:StringPool = null;
    
    public static function fromDynamic(el:Dynamic, ?code:Int):Bytecode
    {
        if (el == null) {
            return fromNull(code);
        } else if (Type.typeof(el) == Type.ValueType.TInt) {
            return fromInt(el, code);
        } else if (Type.typeof(el) == Type.ValueType.TBool) {
            return fromBool(el, code);
        } else if (Type.typeof(el) == Type.ValueType.TFloat) {
            return fromFloat(el, code);
        } else if (Type.getClass(el) == String) {
            return fromString(el, code);
        } else if (Type.getClass(el) == Array) {
            return fromArray(el, code);
        } else if (Type.getClass(el) == Map) {
            return fromMap(el, code);
        } else if (Std.instance(el, Command) != null) {
            return fromCommand(el);
        } else if (Std.instance(el, Bytecode) != null) {
            return el;
        } else if (Std.instance(el, StringPool) != null) {
            return fromStringPool(el, code);
        } else {
            throw 'Invalid object $el (code: $code)';
        }
    }
    
    public static function fromNull(?code:Int):Bytecode
    {
        return new Bytecode(if (code == null) BytecodeMap.fromString("Null") else code, Bytes.alloc(0));
    }
    
    public static function fromCommand(command:Command):Bytecode
    {
        return command.getBytecode();
    }
    
    public static function fromKeyword(keyword:String):Bytecode
    {
        return new Bytecode(BytecodeMap.fromString(keyword), Bytes.alloc(0));
    }
    
    public static function fromString(str:String, ?code:Int, ?allowPool:Bool):Bytecode
    {
        if (currentStringPool != null && (allowPool == null || allowPool)) {
            var pool:Array<String> = currentStringPool.getPool();
            var spl:Array<Dynamic> = [str]; var newSpl:Array<Dynamic>; var subSpl:Array<Dynamic>; var poolIndex:Int = 0;
            for (string in pool) {
                newSpl = new Array<Dynamic>();
                for (sub in spl) {
                    if (Type.typeof(sub) == Type.ValueType.TInt) newSpl.push(sub);
                    else {
                        if (sub != "") {
                            subSpl = sub.split(string);
                            
                            for (x in subSpl) {
                                newSpl.push(x);
                                newSpl.push(poolIndex);
                            }
                            newSpl.pop();
                        }
                    }
                }
                spl = newSpl;
                poolIndex++;
                /*newSpl = new Array<Dynamic>();
                for (sub in spl) {
                    if (Type.typeof(sub) != Type.ValueType.TInt) {
                        var subspl:Array<String> = sub.split(string);
                        if (subspl.length > 1 || subspl[0].length > 0) {
                            for (x in subspl) {
                                newSpl.push(x);
                                newSpl.push(poolIndex);
                            }
                        }
                    } else newSpl.push(sub);
                }
                newSpl.pop();
                spl = newSpl;
                poolIndex++;*/
            }
            if (spl.length > 1) {
                var final:Array<Dynamic> = new Array<Dynamic>();
                for (x in spl) {
                    if (x != "") final.push(x);
                }
                //trace('$str => $final');
                var buffer:BytesBuffer = new BytesBuffer();
                for (el in spl) {
                    if (Type.typeof(el) == Type.ValueType.TInt) {
                        buffer.addByte(0);
                        buffer.addByte(el);
                    } else {
                        buffer.addString(el);
                    }
                }
                return new Bytecode(if (code == null) BytecodeMap.fromString("StringPoolString") else code, buffer.getBytes());
            }
        }
        var buffer:BytesBuffer = new BytesBuffer();
        buffer.addString(str);
        return new Bytecode(if (code == null) BytecodeMap.fromString("String") else code, buffer.getBytes());
    }
    
    public static function fromInt(x:Int, ?code:Int):Bytecode
    {
        if (x == 0) return fromKeyword("Zero");
        else if (x == 1) return fromKeyword("One");
        else if (x == 2) return fromKeyword("Two");
        else if (x == 3) return fromKeyword("Three");
        else if (x == 4) return fromKeyword("Four");
        else if (x == 5) return fromKeyword("Five");
        else if (x == 6) return fromKeyword("Six");
        else if (x == 7) return fromKeyword("Seven");
        else if (x == 8) return fromKeyword("Eight");
        else if (x == 9) return fromKeyword("Nine");
        else if (x == 10) return fromKeyword("Ten");
        
        var buffer:BytesBuffer = new BytesBuffer();
        if (x < 0xFF) {
            buffer.addByte(x);
            return new Bytecode(if (code == null) BytecodeMap.fromString("Int8") else code, buffer.getBytes());
        } else if (x < 1 << 32) { // 32 bit
            buffer.addInt32(x);
            return new Bytecode(if (code == null) BytecodeMap.fromString("Int32") else code, buffer.getBytes());
        } else {
            buffer.addInt64(x);
            return new Bytecode(if (code == null) BytecodeMap.fromString("Int64") else code, buffer.getBytes());
        }
    }
    
    public static function fromVariable(x:Int, ?code:Int):Bytecode
    {
        var buffer:BytesBuffer = new BytesBuffer();
        if (x < 0xFF) {
            buffer.addByte(x);
            return new Bytecode(if (code == null) BytecodeMap.fromString("Variable8") else code, buffer.getBytes());
        } else if (x < 1 << 32) { // 32 bit
            buffer.addInt32(x);
            return new Bytecode(if (code == null) BytecodeMap.fromString("Variable32") else code, buffer.getBytes());
        } else {
            buffer.addInt64(x);
            return new Bytecode(if (code == null) BytecodeMap.fromString("Variable64") else code, buffer.getBytes());
        }
    }
    
    public static function fromFloat(x:Float, ?code:Int, ?double:Bool):Bytecode
    {
        var buffer:BytesBuffer = new BytesBuffer();
        
        if (double == null || double) buffer.addDouble(x);
        else buffer.addFloat(x);
        
        var bytes:Bytes = buffer.getBytes();
        if (bytes.length == 4) {
            //trace('created 32 bit float');
            return new Bytecode(if (code == null) BytecodeMap.fromString("Float") else code, bytes);
        } else if (bytes.length == 8) {
            //trace('created 64 bit float (double)');
            return new Bytecode(if (code == null) BytecodeMap.fromString("Double") else code, bytes);
        } else throw 'Allocated unexpected amount of bytes for float $x (allocated ${bytes.length} bytes)';
    }
    
    public static function fromBool(b:Bool, ?code:Int):Bytecode
    {
        if (b) return fromKeyword("True");
        else return fromKeyword("False");
    }
    
    public static function fromArray(arr:Array<Dynamic>, ?code:Int):Bytecode
    {
        var codes:Array<Bytecode> = new Array<Bytecode>();
        if (code == null) code = BytecodeMap.fromString("Array");
        for (el in arr) {
            codes.push(fromDynamic(el));
        }
        return Bytecode.join(code, codes);
    }
    
    public static function fromStringPool(pool:StringPool, ?code:Int):Bytecode
    {
        var buffer:BytesBuffer = new BytesBuffer();
        buffer.addByte(pool.getPool().length);
        for (string in pool.getPool()) {
            buffer.add(lengthToBytes(string.length));
            buffer.addString(string);
        }
        return new Bytecode(BytecodeMap.fromString("StringPool"), buffer.getBytes());
    }
    
    public static function fromMap(map:Map<String, Dynamic>, ?code:Int):Bytecode
    {
        var codes:Array<Bytecode> = new Array<Bytecode>();
        if (code == null) code = BytecodeMap.fromString("Map");
        for (key in map.keys() ) {
            codes.push(fromString(key));
            codes.push(fromDynamic(map.get(key)));
        }
        return Bytecode.join(code, codes);
    }
     
    public static function lengthToBytes(length:Int):Bytes
    {
        var buffer:BytesBuffer = new BytesBuffer();
        if (length < 255) { // one byte
            buffer.addByte(length);
        } else { // four bytes
            buffer.addByte(0xFF);
            length -= 255;
            if (length < 0xFFFFFF) {
                buffer.addByte(0xFF & (length >> 16));
                buffer.addByte(0xFF & (length >> 8));
                buffer.addByte(0xFF & length);
            } else { // 8 bytes
                buffer.addByte(0xFF);
                buffer.addByte(0xFF);
                buffer.addByte(0xFF);
                length -= 0xFFFFFF;
                if (length >= 1 << 32) throw "Length too long (max supported length is 4,311,744,765)";
                else {
                    buffer.addInt32(length);
                }
            }
        }
        return buffer.getBytes();
    }
    
    public static function bytesToLength(bytes:Bytes, index:Int):Int
    {
        var length:Int = 0;
        length = bytes.get(index);
        if (length == 0xFF) {
            var x:Int = bytes.get(index+1) + (bytes.get(index+2) >> 8) + (bytes.get(index+3) >> 8);
            length += x;
            if (x == 0xFFFFFF) {
                length = length + bytes.getInt32(index+4);
            }
        }
        return length;
    }
    
    public static function lengthOfLength(length:Int):Int
    {
        if (length < 0xFF) return 1
        else if (length < 0xFFFFFF + 0xFF) return 4;
        else return 8;
    }
    
    public static function join(code:Int, arr:Array<Bytecode>) {
        var length:Int = 0; var codeLength:Int;
        var buffer:BytesBuffer = new BytesBuffer();
        for (code in arr) {
            buffer.add(code.getByteData());
        }
        return new Bytecode(code, buffer.getBytes());
    }
    
    public static function isKeyword(cmd:String):Bool
    {
        return cmd == "Null" || cmd == "Zero" || cmd == "One" || cmd == "Two" || cmd == "Three" || cmd == "Four" || cmd == "Five" 
               || cmd == "Six" || cmd == "Seven" || cmd == "Eight" || cmd == "Nine" || cmd == "Ten" || cmd == "True" || cmd == "False";
    }
    
    public static function fromBytes(bytes:Bytes, ?scope:Scope):Array<Bytecode> {
        var result:Array<Bytecode> = new Array<Bytecode>();
        var code:Int; var index:Int; var length:Int; 
        while (bytes.length > 0) {
            code = bytes.get(0);
            var cmd:String = BytecodeMap.getCommand(code);
            if (cmd == "StringPool") { // immediatly process and throw away this command
                var strings:Array<String> = new Array<String>();
                var amount:Int = bytes.get(1); var stringLength:Int = 0;
                length = 0;
                index = 2;
                for (i in 0...amount) {
                    stringLength = bytesToLength(bytes, index);
                    index += lengthOfLength(stringLength);
                    strings.push(bytes.getString(index, stringLength));
                    index += stringLength;
                }
                if (scope != null) scope.getRoot().stringPool = strings;
                else trace('no scope given for string pool');
                //length = index - 1;
                bytes = bytes.sub(index, bytes.length - index);
            } else {
                if (cmd == "Int8" || cmd == "Int32" || cmd == "Int64" || cmd == "Variable8" || cmd == "Variable32" || cmd == "Variable64" 
                    || cmd == "Float" || cmd == "Double" || isKeyword(cmd)) {
                    length = 1;
                    if (cmd == "Int32" || cmd == "Float" || cmd == "Variable32") length = 4;
                    else if (cmd == "Int64" || cmd == "Double" || cmd == "Variable64") length = 8;
                    else if (isKeyword(cmd)) length = 0;
                    index = 1;
                } else {
                    length = bytesToLength(bytes, 1);
                    index = 1 + lengthOfLength(length);
                    //trace('getting $length bytes from ${bytes.length} (${BytecodeMap.getCommand(code)})');
                }
                if (length == 0) result.push(new Bytecode(code, Bytes.alloc(0)))
                else result.push(new Bytecode(code, bytes.sub(index, length)));
                bytes = bytes.sub(index + length, bytes.length - (index + length));
            }
        }
        return result;
    }
    
    private var code:Int;
    private var data:Bytes;
    private var lengthBytes:Bytes = null;
    public function new(code:Int, data:Bytes)
    {
        this.code = code;
        this.data = data;
        var cmd:String = BytecodeMap.getCommand(code);
        if (cmd != "Int8" && cmd != "Int32" && cmd != "Int64" && cmd != "Variable8" && cmd != "Variable32" && cmd != "Variable64"
            && cmd != "Float" && cmd != "Double" && !isKeyword(cmd) && cmd != "StringPool") {
            this.lengthBytes = lengthToBytes(data.length);
        }
    }
    
    public function getCode():Int
    {
        return code;
    }
    
    public function getData():Bytes
    {
        return data;
    }
    
    public function getLengthBytes():Bytes
    {
        return lengthBytes;
    }
    
    public function getByteData():Bytes
    {
        var total:BytesBuffer = new BytesBuffer();
        var cmd:String = BytecodeMap.getCommand(code);
        total.addByte(code);
        if (cmd != "Int8" && cmd != "Int32" && cmd != "Int64" && cmd != "Variable8" && cmd != "Variable32" && cmd != "Variable64"
            && cmd != "Float" && cmd != "Double" && !isKeyword(cmd) && cmd != "StringPool") total.add(lengthBytes);
        total.add(data);
        return total.getBytes();
    }
    
    public function convert(scope:Scope):Dynamic
    {
        var cmd:String = BytecodeMap.getCommand(code);
        if (code <= BytecodeMap.fromString("Null")) { // raw value
            if (cmd == "Int8") {
                return data.get(0);
            } else if (cmd == "Int32") {
                return data.getInt32(0);
            } else if (cmd == "Int64") {
                var i64:Int64 = data.getInt64(0);
                return i64.low + (i64.high >> 32);
            } else if (cmd == "Float") {
                return data.getFloat(0);
            } else if (cmd == "Double") {
                return data.getDouble(0);
            } else if (cmd == "Variable8") {
                return VariableAccess.fromInt(scope, data.get(0));
            } else if (cmd == "Variable32") {
                return VariableAccess.fromInt(scope, data.getInt32(0));
            } else if (cmd == "Variable64") {
                var i64:Int64 = data.getInt64(0);
                return VariableAccess.fromInt(scope, i64.low + (i64.high >> 32));
            } else if (cmd == "String") {
                var s:String = data.getString(0, data.length);
                //trace('created string $s');
                return s;
            } else if (cmd == "Literal") {
                var s:String = data.getString(0, data.length);
                //trace('created string $s');
                return new LiteralValueCommand(scope, s);
            } else if (isKeyword(cmd)) {
                if (cmd == "Null") return null;
                else if (cmd == "True") return true;
                else if (cmd == "False") return false;
                else if (cmd == "Zero") return 0;
                else if (cmd == "One") return 1;
                else if (cmd == "Two") return 2;
                else if (cmd == "Three") return 3;
                else if (cmd == "Four") return 4;
                else if (cmd == "Five") return 5;
                else if (cmd == "Six") return 6;
                else if (cmd == "Seven") return 7;
                else if (cmd == "Eight") return 8;
                else if (cmd == "Nine") return 9;
                else if (cmd == "Ten") return 10;
                else return null;
            } else if (cmd == "Array") {
                var codes:Array<Bytecode> = fromBytes(data, scope);
                var result:Array<Dynamic> = new Array<Dynamic>();
                for (code in codes) result.push(code.convert(scope));
                return result;
            } else if (cmd == "Map") {
                var codes:Array<Bytecode> = fromBytes(data, scope);
                var result:Map<String, Dynamic> = new Map<String, Dynamic>();
                var i:Int = 0;
                if (codes.length % 2 == 1) throw "Invalid map code, key with no pair";
                while (i < codes.length) {
                    result.set(codes[i].convert(scope), codes[i + 1].convert(scope));
                    i = i + 2;
                }
                return result;
            } else if (cmd == "StringPoolString") {
                var pool:Array<String> = scope.getRoot().stringPool;
                var poolString:String; var poolIndex:Int;
                var s:String = "";
                var index:Int = 0;
                var length:Int = 1;
                while (index < data.length) {
                    if (data.get(index) == 0) { // from pool
                        poolIndex = data.get(index + 1);
                        if (poolIndex < 0 || poolIndex >= pool.length) throw 'Invalid pool index $poolIndex';
                        s += pool[poolIndex];
                        index += 2;
                    } else {
                        while (data.get(index + length) != 0 && index + length < data.length) length++;
                        s += data.getString(index, length);
                        index += length;
                    }
                }
                return s;
            } else {
                throw "Invalid raw value";
            }
        } else {
            var bytecodes:Array<Bytecode> = fromBytes(data, scope);
            //var result:Array<Dynamic> = new Array<Dynamic>();
            //for (bytecode in bytecodes) result.push(bytecode.convert());
            var name:String = BytecodeMap.getCommand(code);
            //trace('creating command $name');
            var converter:Scope-> Array<Bytecode>->Command = BytecodeMap.getConverter(name);
            var command:Command = converter(scope, bytecodes);
            if (bytecodes.length > 0) {
                var codes:Array<String> = new Array<String>();
                for (bytecode in bytecodes) codes.push(BytecodeMap.getCommand(bytecode.getCode()));
                throw 'Unprocessed commands: ${codes.join(", ")}';
            } else {
                //trace('created command $command');
            }
            return command;
        }
    }
}