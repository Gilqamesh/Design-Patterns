#include "Duck.hpp"
#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"
#include "Log.hpp"

namespace DuckNamespace
{

void Duck::display() const
{

}

void Duck::performFly() const
{
    flyBehavior->fly();
}

void Duck::performQuack() const
{
    quackBehavior->quack();
}

void Duck::performSwim() const
{
    Log::println("All ducks float, even decoys!");
}

void Duck::setFlyBehavior(FlyBehavior *flyBehavior)
{
    this->flyBehavior = flyBehavior;
}

void Duck::setQuackBehavior(QuackBehavior *quackBehavior)
{
    this->quackBehavior = quackBehavior;
}

}
