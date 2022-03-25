#include "TerminalExpressions/NumberExpression.hpp"

NumberExpression::NumberExpression(int a)
    : a(a)
{

}

int NumberExpression::interpret()
{
    return (a);
}
