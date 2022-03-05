#include "ModelDuck.hpp"
#include "Log.hpp"
#include "FlyNoWay.hpp"
#include "Quack.hpp"

namespace DuckNamespace
{

ModelDuck::ModelDuck()
{
    flyBehavior = new FlyNoWay();
    quackBehavior = new Quack();
}

void ModelDuck::display() const
{
    Log::println("I'm a model duck");
}

}
