#include "EspressoBeverage.hpp"

namespace BeverageNamespace
{

EspressoBeverage::EspressoBeverage()
    : Beverage("Espresso")
{

}

double EspressoBeverage::cost() const
{
    return (1.99);
}

}
