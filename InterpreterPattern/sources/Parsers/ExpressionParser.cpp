#include "Parsers/ExpressionParser.hpp"
#include "Interfaces/IToken.hpp"
#include "NonterminalExpressions/AdditionExpression.hpp"
#include "NonterminalExpressions/MultiplicationExpression.hpp"
#include "NonterminalExpressions/SubtractionExpression.hpp"
#include "NonterminalExpressions/DivisionExpression.hpp"
#include "TerminalExpressions/NumberExpression.hpp"
#include "Tokens/NumberToken.hpp"
#include <string>

IExpression *ExpressionParser::eatFactor(iterator &firstToken, iterator &lastToken)
{
    if (firstToken == lastToken)
        return (nullptr);
    if ((*firstToken)->getType() == TokenType::number)
    {
        IExpression *num = new NumberExpression(
            std::stoi((dynamic_cast<NumberToken *>(*firstToken))->getValue()));
        ++firstToken;
        return (num);
    }
    else if ((*firstToken)->getType() == TokenType::leftpar)
    {
        ++firstToken; // consume leftpar
        IExpression *sum = eatTerm(firstToken, lastToken);
        ++firstToken; // consume rightpar
        return (sum);
    }
    else
        throw std::domain_error("Expected Number expression but found " + (*firstToken)->getName());
    return (nullptr);
}

IExpression *ExpressionParser::eatProduct(iterator &firstToken, iterator &lastToken)
{
    if (firstToken == lastToken)
        return (nullptr);
    IExpression *left = eatFactor(firstToken, lastToken);
    while (firstToken != lastToken && ((*firstToken)->getType() == TokenType::multiplication
        || (*firstToken)->getType() == TokenType::division))
    {
        TokenType operation = (*firstToken)->getType();
        ++firstToken;
        IExpression *right = eatFactor(firstToken, lastToken);
        if (right == nullptr)
            break ;
        switch (operation)
        {
            case TokenType::multiplication:
                left = new MultiplicationExpression(left, right);
                break ;
            case TokenType::division:
                left = new DivisionExpression(left, right);
                break ;
            default:
                throw std::domain_error("Unsupported Token Type");
        }
    }
    return (left);
}

IExpression *ExpressionParser::eatTerm(iterator &firstToken, iterator &lastToken)
{
    IExpression *left = eatProduct(firstToken, lastToken);
    while (firstToken != lastToken && ((*firstToken)->getType() == TokenType::addition
        || (*firstToken)->getType() == TokenType::subtraction))
    {
        TokenType operation = (*firstToken)->getType();
        ++firstToken;
        IExpression *right = eatProduct(firstToken, lastToken);
        if (right == nullptr)
            break ;
        switch (operation)
        {
            case TokenType::addition:
                left = new AdditionExpression(left, right);
                break ;
            case TokenType::subtraction:
                left = new SubtractionExpression(left, right);
                break ;
            default:
                throw std::domain_error("Unsupported Token Type");
        }
    }
    return (left);
}

IExpression *ExpressionParser::parseToken(iterator firstToken, iterator lastToken)
{
    return (eatTerm(firstToken, lastToken));
}

// "(5+3)*8+5"