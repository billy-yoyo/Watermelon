package src.ast;
import src.ast.Token;
import src.ast.TokenProcessor;
import src.ast.base.*;
import src.ast.maths.*;
import src.ast.script.*;

/**
 * ...
 * @author Billyoyo
 */
class GlobalProcessor
{

    public static var baseProcessor:TokenProcessor = new TokenProcessor().addClass(
        BlockToken, BlockToken.match, BlockToken.partialMatch
    ).addClass(
        BracketToken, BracketToken.match, BracketToken.partialMatch
    ).addClass(
        StringToken, StringToken.match, StringToken.partialMatch
    ).addClass(
        VariableToken, VariableToken.match, VariableToken.partialMatch
    ).addClass(
        WhitespaceToken, WhitespaceToken.match, WhitespaceToken.partialMatch
    ).addClass(
        EndLineToken, EndLineToken.match, EndLineToken.partialMatch
    ).addClass(
        AssignmentToken, AssignmentToken.match, AssignmentToken.partialMatch
    ).addClass(
        BooleanOperatorToken, BooleanOperatorToken.match, BooleanOperatorToken.partialMatch
    ).addClass(
        EqualityOperatorToken, EqualityOperatorToken.match, EqualityOperatorToken.partialMatch
    ).addClass(
        IntegerToken, IntegerToken.match, IntegerToken.partialMatch
    ).addClass(
        FloatToken, FloatToken.match, FloatToken.partialMatch
    ).addClass(
        MathsOperatorToken, MathsOperatorToken.match, MathsOperatorToken.partialMatch
    ).addClass(
        KwdToken, KwdToken.match, KwdToken.partialMatch
    ).addClass(
        CommaToken, CommaToken.match, CommaToken.partialMatch
    ).addClass(
        ListToken, ListToken.match, ListToken.partialMatch
    ).addClass(
        AccessToken, AccessToken.match, AccessToken.partialMatch
    ).addClass(
        HexToken, HexToken.match, HexToken.partialMatch
    ).addClass(
        BinaryOperatorToken, BinaryOperatorToken.match, BinaryOperatorToken.partialMatch
    );
    
    public static function process(s:String):RootToken
    {
        return new RootToken(s);
    }
    
}