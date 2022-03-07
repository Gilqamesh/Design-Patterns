#include "PizzaSimulator.hpp"
#include "Log.hpp"
#include "NYPizzaStore.hpp"
#include "ChicagoPizzaStore.hpp"

namespace PizzaNamespace
{

void PizzaSimulator::main()
{
    PizzaStore *nyStore = new NYPizzaStore();
    PizzaStore *chicagoStore = new ChicagoPizzaStore();

    Pizza *pizza = nyStore->orderPizza("cheese");
    Log::println("Ethan ordered a " + pizza->getName() + "\n");

    pizza = chicagoStore->orderPizza("veggie");
    Log::println("Joel ordered a " + pizza->getName() + "\n");
}

}
