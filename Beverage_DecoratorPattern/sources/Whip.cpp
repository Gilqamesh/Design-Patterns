#include "Whip.hpp"

namespace BeverageNamespace
{

Whip::Whip(Beverage *beverage)
    : CondimentDecorator(beverage->getDescription()), beverage(beverage)
{

}

std::string Whip::getDescription() const
{
    return (beverage->getDescription() + ", Whip");
}

double Whip::cost() const
{
    return (0.1 + beverage->cost());
}

}
