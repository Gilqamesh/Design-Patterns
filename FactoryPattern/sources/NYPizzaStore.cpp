#include "NYPizzaStore.hpp"
#include "NYStyleCheesePizza.hpp"
#include "NYStyleVeggiePizza.hpp"

namespace PizzaNamespace
{

Pizza *NYPizzaStore::createPizza(const std::string &pizzaType)
{
    if (pizzaType == "cheese")
        return (new NYStyleCheesePizza());
    else if (pizzaType == "veggie")
        return (new NYStyleVeggiePizza());
    else
        return (nullptr);
}

}
