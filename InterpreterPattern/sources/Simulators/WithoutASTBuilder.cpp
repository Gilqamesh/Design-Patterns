#include "Simulators/WithoutASTBuilder.hpp"
#include "TerminalExpressions/NumberExpression.hpp"
#include "NonterminalExpressions/AdditionExpression.hpp"
#include "NonterminalExpressions/MultiplicationExpression.hpp"
#include "NonterminalExpressions/SubtractionExpression.hpp"
#include <iostream>

void WithoutASTBuilder::main()
{
    NumberExpression *a = new NumberExpression(5);
    NumberExpression *b = new NumberExpression(3);
    NumberExpression *c = new NumberExpression(8);
    AdditionExpression *add1 = new AdditionExpression(a, b); /* 5 + 3 = 8 */
    MultiplicationExpression *m1 = new MultiplicationExpression(add1, c); /* (5 + 3) * 8 = 64 */
    SubtractionExpression *sub1 = new SubtractionExpression(m1, a); /* (5 + 3) * 8 - 5 = 59 */
    std::cout << sub1->interpret() << std::endl;

    delete a;
    delete b;
    delete c;
    delete add1;
    delete m1;
    delete sub1;
}
