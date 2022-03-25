#ifndef SUBTRACTIONTOKEN_HPP
# define SUBTRACTIONTOKEN_HPP

# include "Interfaces/IToken.hpp"

class SubtractionToken : public IToken
{
public:
    virtual inline TokenType getType() const override { return (TokenType::subtraction); }
    virtual inline std::string getName() const override { return (std::string("Subtraction Token")); }
};

#endif
