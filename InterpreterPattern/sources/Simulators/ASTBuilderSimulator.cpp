#include "Simulators/ASTBuilderSimulator.hpp"
#include "Tokenizers/ExpressionTokenizer.hpp"
#include "Interfaces/IToken.hpp"
#include <iostream>

/* debug */
static std::ostream &operator<<(std::ostream &os, const IToken *token)
{
    os << token->getName();
    return (os);
}

void ASTBuilderSimulator::main()
{
    ExpressionTokenizer *expressionTokenizer = new ExpressionTokenizer();
    std::string tmp = "(5+3)*8-5";
    expressionTokenizer->compile(tmp.begin(), tmp.end());
    for (ExpressionTokenizer::iterator it = expressionTokenizer->begin(); it != expressionTokenizer->end(); ++it)
        std::cout << "Token: " << *it << std::endl;
}



for (ExpressionTokenizer::iterator it = expressionTokenizer->begin(); it != expressionTokenizer->end(); ++it)
{
    if ('(')
        handle_expression(it + 1);
    else if (')')
}
