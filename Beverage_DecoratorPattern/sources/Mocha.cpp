#include "Mocha.hpp"

namespace BeverageNamespace
{

Mocha::Mocha(Beverage *beverage)
    : CondimentDecorator(beverage->getDescription()), beverage(beverage)
{

}

std::string Mocha::getDescription() const
{
    return (beverage->getDescription() + ", Mocha");
}

double Mocha::cost() const
{
    return (0.2 + beverage->cost());
}

}
