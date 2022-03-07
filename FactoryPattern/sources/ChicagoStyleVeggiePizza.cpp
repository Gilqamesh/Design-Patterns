#include "ChicagoStyleVeggiePizza.hpp"
#include "Log.hpp"

namespace PizzaNamespace
{

ChicagoStyleVeggiePizza::ChicagoStyleVeggiePizza()
{
    name = "Chicago Style Veggie Pizza";
    dough = "Extra Thick Crust Dough";
    sauce = "Plum Tomato Sauce";
    toppings.push_back("Sliced Shiitake Mushrooms");
}

void ChicagoStyleVeggiePizza::cut() const
{
    Log::println("Cutting the pizza into square slices");
}

}
