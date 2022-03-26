#ifndef EXPRESSIONPARSER_HPP
# define EXPRESSIONPARSER_HPP

# include "Interfaces/IParser.hpp"
# include "Interfaces/IExpression.hpp"
# include "Tokenizers/ExpressionTokenizer.hpp"

class ExpressionParser : public IParser<IExpression, ExpressionTokenizer>
{
typedef typename ExpressionTokenizer::iterator iterator;
virtual IExpression *parseToken(iterator firstToken, iterator lastToken) override;

IExpression *eatTerm(iterator &firstToken, iterator &lastToken);
IExpression *eatProduct(iterator &firstToken, iterator &lastToken);
IExpression *eatFactor(iterator &firstToken, iterator &lastToken);
};

#endif
