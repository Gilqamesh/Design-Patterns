#include "HouseBlendBeverage.hpp"

namespace BeverageNamespace
{

HouseBlendBeverage::HouseBlendBeverage()
    : Beverage("House Blend Coffee")
{

}

double HouseBlendBeverage::cost() const
{
    return (0.89);
}

}
