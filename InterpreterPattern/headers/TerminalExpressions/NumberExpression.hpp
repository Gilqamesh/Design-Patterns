#ifndef NUMBEREXPRESSION_HPP
# define NUMBEREXPRESSION_HPP

# include "Interfaces/IExpression.hpp"

class NumberExpression : public IExpression
{
int a;
public:
    NumberExpression(int a);
    int interpret();
};

#endif
