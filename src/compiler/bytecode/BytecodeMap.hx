package src.compiler.bytecode;
import src.compiler.Scope;
import src.compiler.commands.*;
import src.compiler.commands.value.*;
import src.compiler.commands.coroutine.*;

/**
 * ...
 * @author Billyoyo
 */
class BytecodeMap
{

    private static var codeMap:Array<String> = [
        "StringPool",
        "Variable8",
        "Variable32",
        "Variable64",
        "String",
        "StringPoolString",
        "Int8",
        "Int32",
        "Int64",
        "Float",
        "Double",
        "True",
        "False",
        "Zero",
        "One", 
        "Two", 
        "Three", 
        "Four", 
        "Five", 
        "Six", 
        "Seven", 
        "Eight", 
        "Nine", 
        "Ten",
        "Array",
        "Literal",
        "Map",
        "Null",
        "BoolExpressionValueCommand",
        "ContainsValueCommand",
        "EqualityValueCommand",
        "FunctionCallValueCommand",
        "ListValueCommand",
        "MapValueCommand",
        "MathsExpressionValueCommand",
        "ObjectArrayAccessValueCommand",
        "ObjectArrayAssignmentCommand",
        "ObjectIndexPair",
        "ObjectValueCommand",
        "TupleValueCommand",
        "VariableValueCommand",
        "AssignmentCommand",
        "BreakCommand",
        "ContinueCommand",
        "DeleteCommand",
        "ForLoopCommand",
        "FunctionCodeCommand",
        "FunctionDefinitionCommand",
        "IfCommand",
        "IteratorCommand",
        "LoopCodeCommand",
        "ReturnCommand",
        "RootCommand",
        "TypeDefinitionCommand",
        "WhileLoopCommand",
        "Argument",
        "ValueCommandPair",
        "CondAndExpr",
        "FunctionArgumentCommand",
        "VariableAccess",
        "BinaryExpressionValueCommand",
        "SpliceValueCommand",
        "NegationValueCommand",
        "StringFormatValueCommand",
        "RaiseCommand",
        "TryCatchCommand",
        "ImportCommand",
        "CoroutineCodeCommand",
        "CoroutineDefinitionCommand",
        "PipeReadCommand",
        "PipeWriteCommand",
        "CoroutineForLoopCommand"
    ];
    
    private static var fromBytecodeMap:Map <String, Scope->Array<Bytecode>->Command> = [
        "BoolExpressionValueCommand" => BoolExpressionValueCommand.fromBytecode,
        "ContainsValueCommand" => ContainsValueCommand.fromBytecode,
        "EqualityValueCommand" => EqualityValueCommand.fromBytecode,
        "FunctionCallValueCommand" => FunctionCallValueCommand.fromBytecode,
        "ListValueCommand" => ListValueCommand.fromBytecode,
        "MapValueCommand" => MapValueCommand.fromBytecode,
        "MathsExpressionValueCommand" => MathsExpressionValueCommand.fromBytecode,
        "ObjectArrayAccessValueCommand" => ObjectArrayAccessValueCommand.fromBytecode,
        "ObjectArrayAssignmentCommand" => ObjectArrayAssignmentCommand.fromBytecode,
        "ObjectIndexPair" => ObjectIndexPair.fromBytecode,
        "ObjectValueCommand" => ObjectValueCommand.fromBytecode,
        "TupleValueCommand" => TupleValueCommand.fromBytecode,
        "VariableValueCommand" => VariableValueCommand.fromBytecode,
        "AssignmentCommand" => AssignmentCommand.fromBytecode,
        "BreakCommand" => BreakCommand.fromBytecode,
        "ContinueCommand" => ContinueCommand.fromBytecode,
        "DeleteCommand" => DeleteCommand.fromBytecode,
        "ForLoopCommand" => ForLoopComand.fromBytecode,
        "FunctionCodeCommand" => FunctionCodeCommand.fromBytecode,
        "FunctionDefinitionCommand" => FunctionDefinitionCommand.fromBytecode,
        "IfCommand" => IfCommand.fromBytecode,
        "IteratorCommand" => IteratorCommand.fromBytecode,
        "LoopCodeCommand" => LoopCodeCommand.fromBytecode,
        "ReturnCommand" => ReturnCommand.fromBytecode,
        "RootCommand" => RootCommand.fromBytecode,
        "TypeDefinitionCommand" => TypeDefinitionCommand.fromBytecode,
        "WhileLoopCommand" => WhileLoopCommand.fromBytecode,
        "Argument" => FunctionCallValueCommand.getArgumentFromBytes(), // special
        "ValueCommandPair" => MapValueCommand.getValueCommandPairFromBytes(),
        "CondAndExpr" => IfCommand.getCondAndExprFromBytes(), // special
        "FunctionArgumentCommand" => FunctionArgumentCommand.fromBytecode,
        "VariableAccess" => VariableAccess.fromBytecode,
        "BinaryExpressionValueCommand" => BinaryExpressionValueCommand.fromBytecode,
        "StringFormatValueCommand" => StringFormatValueCommand.fromBytecode,
        "SpliceValueCommand" => SpliceValueCommand.fromBytecode,
        "NegationValueCommand" => NegationValueCommand.fromBytecode,
        "RaiseCommand" => RaiseCommand.fromBytecode,
        "TryCatchCommand" => TryCatchCommand.fromBytecode,
        "ImportCommand" => ImportCommand.fromBytecode,
        "CoroutineCodeCommand" => CoroutineCodeCommand.fromBytecode,
        "CoroutineDefinitionCommand" => CoroutineDefinitionCommand.fromBytecode,
        "PipeReadCommand" => PipeReadCommand.fromBytecode,
        "PipeWriteCommand" => PipeWriteCommand.fromBytecode,
        "CoroutineForLoopCommand" => CoroutineForLoopCommand.fromBytecode
    ];  
    
    public static function fromCommand(command:Command):Int
    {
        return fromString(command.getName());
    }
    
    public static function fromString(s:String):Int
    {
        var index:Int = codeMap.indexOf(s);
        if (index == -1) throw 'Failed to find command $s';
        return index;
    }
    
    public static function getCommand(code:Int):String
    {
        return codeMap[code];
    }
    
    public static function getConverter(cmd:String):Scope-> Array<Bytecode>->Command
    {
        return fromBytecodeMap.get(cmd);
    }
    
    public static  function getConverterFromID(code:Int):Scope-> Array<Bytecode>->Command
    {
        return getConverter(getCommand(code));
    }
    
}