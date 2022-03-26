#include "Simulators/ASTBuilderSimulator.hpp"
#include "Tokenizers/ExpressionTokenizer.hpp"
#include "Parsers/ExpressionParser.hpp"
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
    std::string tmp = "((12)/3)*8-5*(30+4)-2";
    expressionTokenizer->compile(tmp.begin(), tmp.end());
    for (ExpressionTokenizer::iterator it = expressionTokenizer->begin(); it != expressionTokenizer->end(); ++it)
        std::cout << "Token: " << *it << std::endl;
    
    ExpressionParser *expressionParser = new ExpressionParser();
    expressionParser->link(expressionTokenizer->begin(), expressionTokenizer->end());
    IExpression *expression = expressionParser->getRoot();
    std::cout << expression->interpret() << std::endl;
}
