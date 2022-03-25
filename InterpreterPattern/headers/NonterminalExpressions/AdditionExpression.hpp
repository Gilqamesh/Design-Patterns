#ifndef ADDITIONEXPRESSION_HPP
# define ADDITIONEXPRESSION_HPP

# include "Interfaces/IExpression.hpp"

class AdditionExpression : public IExpression
{
IExpression *a;
IExpression *b;
public:
    AdditionExpression(IExpression *a, IExpression *b);
    int interpret();
};

#endif
