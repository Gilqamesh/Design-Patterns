#include "SoyDecorator.hpp"

namespace BeverageNamespace
{

SoyDecorator::SoyDecorator(Beverage *beverage)
    : CondimentDecorator(beverage)
{

}

std::string SoyDecorator::getDescription() const
{
    return (beverage->getDescription() + ", Soy");
}

double SoyDecorator::cost() const
{
    return (0.15 + beverage->cost());
}

}
