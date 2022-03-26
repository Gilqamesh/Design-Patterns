#include "NonterminalExpressions/DivisionExpression.hpp"

DivisionExpression::DivisionExpression(IExpression *numerator, IExpression *denominator)
    : numerator(numerator), denominator(denominator)
{

}

int DivisionExpression::interpret()
{
    return (numerator->interpret() / denominator->interpret());
}
