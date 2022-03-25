#ifndef NUMBERTOKEN_HPP
# define NUMBERTOKEN_HPP

# include "Interfaces/IToken.hpp"
# include <string>

class NumberToken : public IToken
{
std::string value;
public:
    NumberToken(const std::string &value);
    virtual inline TokenType getType() const override { return (TokenType::number); }
    inline const std::string &getValue() const { return (value); }
    virtual inline std::string getName() const override { return (std::string("Number " + value + " token")); }
};

#endif
