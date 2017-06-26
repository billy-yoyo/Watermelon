package src.compiler.commands.value;
import src.ast.Token;
import src.ast.base.KwdToken;
import src.compiler.Scope;
import src.compiler.object.Object;
import src.compiler.commands.value.VariableValueCommand;
import src.compiler.signals.SyntaxErrorSignal;

/**
 * ...
 * @author Billyoyo
 */
class ValueCommand extends Command
{
    
    public static function splitTokens(scope:Scope, tokens:Array<Token>, splitToken:String, ?singular:Bool, ?content:String):Array<ValueCommand>
    {
        if (singular == null) singular = false;
        var result:Array<ValueCommand> = new Array<ValueCommand>();
        var arr:Array<Token> = new Array<Token>();
        for (token in tokens) {
            if (token.getName() == splitToken && (content == null || token.getContent() == content)) {
                if (!singular || (singular && arr.length == 1)) {
                    result.push(ValueCommand.fromTokens(scope, arr));
                    arr = new Array<Token>();
                } else throw 'Invalid number of tokens, expected 1 per split, found ${arr.length}';
            } else {
                arr.push(token);
            }
        }
        result.push(ValueCommand.fromTokens(scope, arr));
        return result;
    }
    
    public static function fromTokens(scope:Scope, tokens:Array<Token>):ValueCommand
    {
        if (tokens.length == 0) throw "Empty value command";
        if (tokens.length == 1) {
            return fromToken(scope, tokens[0]);
        } else { // either: function call, tuple of values, mathematical expression, boolean expression or equality expression
            
            if (((tokens.length == 2 && tokens[0].getName() == "VariableToken") || Command.contains(tokens, "AccessToken")) && tokens[tokens.length - 1].getName() == "BracketToken") { // function call
                return FunctionCallValueCommand.fromTokens(scope, tokens.splice(0, tokens.length - 1), tokens.pop());
            }
            
            if (tokens.length == 2 && tokens[1].getName() == "ListToken") { // array access
                return ObjectArrayAccessValueCommand.fromTokens(scope, tokens);
            }
            
            var isFunc:Bool = false;
            var isIn:Bool = false;
            var isTuple:Bool = false;
            var isBool:Bool = false;
            var isEquality:Bool = false;
            var isVarAccess:Bool = false;
            var isMathsExpression:Bool = false;
            var isBinaryExpression:Bool = false;
            
            for (token in tokens) {
                if (token.getName() == "KwdToken" && token.getContent() == "in") isIn = true;
                if (token.getName() == "KwdToken" && token.getContent() == "func") isFunc = true;
                if (token.getName() == "CommaToken") isTuple = true;
                if (token.getName() == "BooleanOperatorToken") isBool = true;
                if (token.getName() == "EqualityOperatorToken") isEquality = true;
                if (token.getName() == "AccessToken") isVarAccess = true;
                if (token.getName() == "MathsOperatorToken") isMathsExpression = true;
                if (token.getName() == "BinaryOperatorToken") isBinaryExpression = true;
            }
            
            if (isTuple) { // tuple of values
                return TupleValueCommand.fromTokens(scope, tokens);
            } else if(isEquality) { // equality expression
                return EqualityValueCommand.fromTokens(scope, tokens);
            } else if (isBool) { // boolean expression
                return BoolExpressionValueCommand.fromTokens(scope, tokens);
            } else if (isIn) { // contains expression
                return ContainsValueCommand.fromTokens(scope, tokens);
            } else if (isFunc) { // shorthand function definition
                return FunctionDefinitionCommand.fromTokens(scope, tokens);
            } else if (isBinaryExpression) {
                return BinaryExpressionValueCommand.fromTokens(scope, tokens);
            } else if (isMathsExpression) { // mathematical expression
                return MathsExpressionValueCommand.fromTokens(scope, tokens);
            } else if (isVarAccess) {
                return VariableValueCommand.fromTokens(scope, tokens);
            } else {
                throw new SyntaxErrorSignal('Invalid value command $tokens');
            }
        }
    }
    
    public static function fromToken(scope:Scope, token:Token):ValueCommand
    {
        var name = token.getName();
        if (name == "VariableToken") {
            return VariableValueCommand.fromTokens(scope, [token]);
        } else if (name == "ListToken") { // list
            return ListValueCommand.fromTokens(scope, token.getContent());
        } else if (name == "BlockToken") { // map
            return MapValueCommand.fromTokens(scope, token.getContent());
        } else if (name == "BracketToken") { // value
            return fromTokens(scope, token.getContent());
        } else if (name == "KwdToken") {
            var content:String = token.getContent();
            if (content == "true") {
                return new ObjectValueCommand(scope, true, "BoolType");
            } else if (content == "false") {
                return new ObjectValueCommand(scope, false, "BoolType");
            } else if (content == "none") {
                return new ObjectValueCommand(scope, null, "NoneType");
            } else {
                throw 'Keyword token being used as a value, $content';
            }
        } else if (name == "IntegerToken" || name == "HexToken") {
            return new ObjectValueCommand(scope, Std.parseInt(token.getContent()), "IntType");
        } else if (name == "FloatToken") {
            return new ObjectValueCommand(scope, Std.parseFloat(token.getContent()), "FloatType");
        } else if (name == "StringToken") {
            return new ObjectValueCommand(scope, token.getContent(), "StringType");
        } else {
            throw 'Invalid value token $name';
        }
    }
    
    override public function getName():String 
    {
        return "ValueCommand";
    }
}