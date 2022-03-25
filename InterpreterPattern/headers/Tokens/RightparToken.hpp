#ifndef RIGHTPARTOKEN_HPP
# define RIGHTPARTOKEN_HPP

# include "Interfaces/IToken.hpp"

class RightparToken : public IToken
{
public:
    virtual inline TokenType getType() const override { return (TokenType::rightpar); }
    virtual inline std::string getName() const override { return (std::string("Right Parentheses Token")); }
};

#endif
