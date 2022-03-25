#ifndef SUBTRACTIONEXPRESSION_HPP
# define SUBTRACTIONEXPRESSION_HPP

# include "Interfaces/IExpression.hpp"

class SubtractionExpression : public IExpression
{
IExpression *from;
IExpression *what;
public:
    SubtractionExpression(IExpression *from, IExpression *what);
    int interpret();
};

#endif
