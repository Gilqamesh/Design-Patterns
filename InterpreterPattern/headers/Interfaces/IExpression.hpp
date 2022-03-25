#ifndef IEXPRESSION_HPP
# define IEXPRESSION_HPP

class IExpression
{
public:
    virtual ~IExpression() = default;
    virtual int interpret() = 0;
};

#endif
