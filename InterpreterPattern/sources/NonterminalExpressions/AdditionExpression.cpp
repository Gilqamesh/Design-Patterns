#include "NonterminalExpressions/AdditionExpression.hpp"

AdditionExpression::AdditionExpression(IExpression *a, IExpression *b)
    : a(a), b(b)
{

}

int AdditionExpression::interpret()
{
    return (a->interpret() + b->interpret());
}
