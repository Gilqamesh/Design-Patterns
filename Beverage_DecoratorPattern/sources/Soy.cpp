#include "Soy.hpp"

namespace BeverageNamespace
{

Soy::Soy(Beverage *beverage)
    : CondimentDecorator(beverage->getDescription()), beverage(beverage)
{

}

std::string Soy::getDescription() const
{
    return (beverage->getDescription() + ", Soy");
}

double Soy::cost() const
{
    return (0.15 + beverage->cost());
}

}
