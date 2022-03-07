#include "ChicagoStyleCheesePizza.hpp"
#include "Log.hpp"

namespace PizzaNamespace
{

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
{
    name = "Chicago Style Deep Dish Cheese Pizza";
    dough = "Extra Thick Crust Dough";
    sauce = "Plum Tomato Sauce";
    toppings.push_back("Shredded Mozarella Cheese");
}

void ChicagoStyleCheesePizza::cut() const
{
    Log::println("Cutting the pizza into square slices");
}

}
