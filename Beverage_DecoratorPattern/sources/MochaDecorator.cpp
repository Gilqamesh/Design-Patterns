#include "MochaDecorator.hpp"

namespace BeverageNamespace
{

MochaDecorator::MochaDecorator(Beverage *beverage)
    : CondimentDecorator(beverage)
{

}

std::string MochaDecorator::getDescription() const
{
    return (beverage->getDescription() + ", Mocha");
}

double MochaDecorator::cost() const
{
    return (0.2 + beverage->cost());
}

}
