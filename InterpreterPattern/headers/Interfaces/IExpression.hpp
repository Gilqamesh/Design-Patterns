#ifndef IEXPRESSION_HPP
# define IEXPRESSION_HPP

/*
 * Compound Pattern
 */
class IExpression
{
public:
    virtual ~IExpression() = default;
    virtual int interpret() = 0;
};

#endif
