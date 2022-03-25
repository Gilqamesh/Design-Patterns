#include "NonterminalExpressions/SubtractionExpression.hpp"

SubtractionExpression::SubtractionExpression(IExpression *from, IExpression *what)
    : from(from), what(what)
{

}

int SubtractionExpression::interpret()
{
    return (from->interpret() - what->interpret());
}
