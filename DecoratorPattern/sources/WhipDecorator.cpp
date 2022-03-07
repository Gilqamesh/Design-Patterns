#include "WhipDecorator.hpp"

namespace BeverageNamespace
{

WhipDecorator::WhipDecorator(Beverage *beverage)
    : CondimentDecorator(beverage)
{

}

std::string WhipDecorator::getDescription() const
{
    return (beverage->getDescription() + ", Whip");
}

double WhipDecorator::cost() const
{
    return (0.1 + beverage->cost());
}

}
