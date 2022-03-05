#ifndef DUCK_HPP
# define DUCK_HPP

# include "FlyBehavior.hpp"
# include "QuackBehavior.hpp"

namespace DuckNamespace
{

class Duck
{
public:
    virtual void display() const;
    virtual void performFly() const;
    virtual void performQuack() const;
    virtual void performSwim() const;
    void setFlyBehavior(FlyBehavior *flyBehavior);
    void setQuackBehavior(QuackBehavior *quackBehavior);
protected:
    FlyBehavior     *flyBehavior;
    QuackBehavior   *quackBehavior;
};

}

#endif
