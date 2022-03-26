#ifndef ITOKEN_HPP
# define ITOKEN_HPP

# include <string>
# include <iostream>

enum class TokenType
{
    number,
    addition,
    subtraction,
    multiplication,
    division,
    leftpar,
    rightpar
};

class IToken
{
public:
    virtual ~IToken() = default;
    virtual TokenType getType() const = 0;

    /* debug */
    virtual std::string getName() const = 0;
};

#endif
