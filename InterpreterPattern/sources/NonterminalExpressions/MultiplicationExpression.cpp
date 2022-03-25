#include "NonterminalExpressions/MultiplicationExpression.hpp"

MultiplicationExpression::MultiplicationExpression(IExpression *a, IExpression *b)
    : a(a), b(b)
{

}

int MultiplicationExpression::interpret()
{
    return (a->interpret() * b->interpret());
}
