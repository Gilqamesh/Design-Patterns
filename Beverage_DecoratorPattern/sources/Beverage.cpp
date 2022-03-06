#include "Beverage.hpp"

namespace BeverageNamespace
{

Beverage::Beverage()
    : description("Unknown Beverage")
{

}

Beverage::Beverage(const std::string &description)
    : description(description)
{

}

std::string Beverage::getDescription() const
{
    return (description);
}

}
