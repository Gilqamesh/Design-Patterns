#ifndef DIVISIONEXPRESSION_HPP
# define DIVISIONEXPRESSION_HPP

# include "Interfaces/IExpression.hpp"

class DivisionExpression : public IExpression
{
IExpression *numerator;
IExpression *denominator;
public:
    DivisionExpression(IExpression *numerator, IExpression *denominator);
    virtual int interpret() override;
};

#endif
