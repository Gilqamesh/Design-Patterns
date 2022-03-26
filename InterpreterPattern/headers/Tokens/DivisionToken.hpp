#ifndef DIVISIONTOKEN_HPP
# define DIVISIONTOKEN_HPP

# include "Interfaces/IToken.hpp"

class DivisionToken : public IToken
{
public:
    inline virtual TokenType getType() const override { return (TokenType::division); }
    inline virtual std::string getName() const override { return (std::string("Division Token")); }
};

#endif
