#include "CaffeineBeverage.hpp"
#include "Log.hpp"

namespace TemplateNamespace
{

void CaffeineBeverage::prepareRecipe()
{
    boilWater();
    brew();
    pourInCup();
    addCondiments();
    hook();
}

CaffeineBeverage::~CaffeineBeverage()
{

}

void CaffeineBeverage::boilWater()
{
    Log::println("Boiling some water..");
}

void CaffeineBeverage::pourInCup()
{
    Log::println("Pouring the caffeinated beverage into cup.. yay!");
}

void CaffeineBeverage::hook()
{

}

}
