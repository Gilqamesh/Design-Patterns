#ifndef ADDITIONTOKEN_HPP
# define ADDITIONTOKEN_HPP

# include "Interfaces/IToken.hpp"

class AdditionToken : public IToken
{
public:
    virtual inline TokenType getType() const override { return (TokenType::addition); }
    virtual inline std::string getName() const override { return (std::string("Addition Token")); }
};

#endif
