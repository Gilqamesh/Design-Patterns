#ifndef MULTIPLICATIONEXPRESSION_HPP
# define MULTIPLICATIONEXPRESSION_HPP

# include "Interfaces/IExpression.hpp"

class MultiplicationExpression : public IExpression
{
IExpression *a;
IExpression *b;
public:
    MultiplicationExpression(IExpression *a, IExpression *b);
    int interpret();
};

#endif
