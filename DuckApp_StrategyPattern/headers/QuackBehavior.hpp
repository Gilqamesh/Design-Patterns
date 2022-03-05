#ifndef QUACKBEHAVIOR_HPP
# define QUACKBEHAVIOR_HPP

namespace DuckNamespace
{

class QuackBehavior
{
public:
    virtual ~QuackBehavior() { }
    virtual void quack() const = 0;
};

}

#endif
