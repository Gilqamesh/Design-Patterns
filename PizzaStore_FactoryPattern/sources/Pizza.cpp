#include "Pizza.hpp"
#include "Log.hpp"

namespace PizzaNamespace
{

Pizza::~Pizza()
{
    
}

void Pizza::prepare() const
{
    Log::println("Preparing " + name);
    Log::println("Tossing dough...");
    Log::println("Adding sauce...");
    Log::println("Adding toppings:");
    for (unsigned int i = 0; i < toppings.size(); ++i)
        Log::println(" " + toppings[i]);
}

void Pizza::bake() const
{
    Log::println("Bake for 25 minutes at 350");
}

void Pizza::cut() const
{
    Log::println("Cutting the pizza into diagonal slices");
}

void Pizza::box() const
{
    Log::println("Place pizza in official PizzaStore box");
}

std::string Pizza::getName() const
{
    return (name);
}

}
