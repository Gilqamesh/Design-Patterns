#include "Espresso.hpp"

namespace BeverageNamespace
{

Espresso::Espresso()
    : Beverage("Espresso")
{

}

double Espresso::cost() const
{
    return (1.99);
}

}
