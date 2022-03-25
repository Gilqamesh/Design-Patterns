#ifndef LEFTPARTOKEN_HPP
# define LEFTPARTOKEN_HPP

# include "Interfaces/IToken.hpp"

class LeftparToken : public IToken
{
public:
    virtual inline TokenType getType() const override { return (TokenType::leftpar); }
    virtual inline std::string getName() const override { return (std::string("Left Parentheses Token")); }
};

#endif
