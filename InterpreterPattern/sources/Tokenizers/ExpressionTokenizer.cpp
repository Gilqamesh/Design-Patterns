#include "Tokenizers/ExpressionTokenizer.hpp"
#include "Tokens/AdditionToken.hpp"
#include "Tokens/MultiplicationToken.hpp"
#include "Tokens/SubtractionToken.hpp"
#include "Tokens/LeftparToken.hpp"
#include "Tokens/RightparToken.hpp"
#include "Tokens/NumberToken.hpp"
#include "Tokens/DivisionToken.hpp"
#include "Singletons/Singleton.hpp"
#include <exception>
#include <iostream>

ExpressionTokenizer::ExpressionTokenizer()
{
    nonterminalTokens["("] = Singleton<LeftparToken>::getInstance();
    nonterminalTokens[")"] = Singleton<RightparToken>::getInstance();
    nonterminalTokens["+"] = Singleton<AdditionToken>::getInstance();
    nonterminalTokens["-"] = Singleton<SubtractionToken>::getInstance();
    nonterminalTokens["*"] = Singleton<MultiplicationToken>::getInstance();
    nonterminalTokens["/"] = Singleton<DivisionToken>::getInstance();

    metacharacters.insert(' ');
    metacharacters.insert('\t');
    metacharacters.insert('\n');
}

IToken *ExpressionTokenizer::createToken(const std::string &token)
{
    if (nonterminalTokens.count(token))
        return (nonterminalTokens[token]);
    return (new NumberToken(token));
}

std::string ExpressionTokenizer::aggregateToken(StringIterator &current, StringIterator limit)
{
    std::string res;

    if (*current >= '0' && *current <= '9')
    {
        while (current != limit && *current >= '0' && *current <= '9')
        {
            
            res.push_back(*current);
            ++current;
        }
        return (res);
    }

    for (; current != limit; ++current)
    {
        res.push_back(*current);
        if (nonterminalTokens.count(res))
        {
            ++current;
            return (res);
        }
        if (metacharacters.count(*current))
            continue ;
    }

    /* the token is neither a number or an operator */
    throw std::domain_error("Token parsed is out of domain range");

    return (res);
}
