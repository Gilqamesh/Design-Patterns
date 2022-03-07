#include "ChicagoPizzaStore.hpp"
#include "ChicagoStyleCheesePizza.hpp"
#include "ChicagoStyleVeggiePizza.hpp"

namespace PizzaNamespace
{

Pizza *ChicagoPizzaStore::createPizza(const std::string &pizzaType)
{
    if (pizzaType == "cheese")
        return (new ChicagoStyleCheesePizza());
    else if (pizzaType == "veggie")
        return (new ChicagoStyleVeggiePizza());
    else
        return (nullptr);
}

}
