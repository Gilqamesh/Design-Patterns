#include "HouseBlend.hpp"

namespace BeverageNamespace
{

HouseBlend::HouseBlend()
    : Beverage("House Blend Coffee")
{

}

double HouseBlend::cost() const
{
    return (0.89);
}

}
