#ifndef FLYBEHAVIOR_HPP
# define FLYBEHAVIOR_HPP

namespace DuckNamespace
{

class FlyBehavior
{
public:
    virtual ~FlyBehavior() { }
    virtual void fly() const = 0;
};

}

#endif
