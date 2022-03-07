#include "PizzaStore.hpp"

namespace PizzaNamespace
{

PizzaStore::~PizzaStore()
{
    
}

Pizza *PizzaStore::orderPizza(const std::string &pizzaType)
{
    Pizza *pizza = createPizza(pizzaType);
    if (pizza == NULL)
        return (NULL);
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
    return (pizza);
}

}
