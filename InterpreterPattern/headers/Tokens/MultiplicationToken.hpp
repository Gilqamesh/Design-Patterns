#ifndef MULTIPLICATIONTOKEN_HPP
# define MULTIPLICATIONTOKEN_HPP

# include "Interfaces/IToken.hpp"

class MultiplicationToken : public IToken
{
public:
    virtual inline TokenType getType() const override { return (TokenType::multiplication); }
    virtual inline std::string getName() const override { return (std::string("Multiplication Token")); }
};

#endif
