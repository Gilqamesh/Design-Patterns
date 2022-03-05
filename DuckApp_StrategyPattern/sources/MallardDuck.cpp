#include "MallardDuck.hpp"
#include "FlyWithWings.hpp"
#include "Quack.hpp"
#include "Log.hpp"

namespace DuckNamespace
{

MallardDuck::MallardDuck()
{
    flyBehavior = new FlyWithWings();
    quackBehavior = new Quack();
}

void MallardDuck::display() const
{
    Log::println("I'm a Mallard Duck");
}

}
