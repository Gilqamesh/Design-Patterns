#include "MallardDuck.hpp"
#include "Log.hpp"

namespace AdapterNamespace
{

void MallardDuck::quack()
{
    Log::println("Quack");
}

void MallardDuck::fly()
{
    Log::println("I'm flying");
}

}
