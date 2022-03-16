#include "MenuItem.hpp"

namespace MenuNamespace
{

MenuItem::MenuItem(const std::string &n, const std::string &d, bool v, double p)
    : name(n), description(d), vegetarian(v), price(p)
{

}

std::string MenuItem::getName()
{
    return (name);
}

std::string MenuItem::getDescription()
{
    return (description);
}

double MenuItem::getPrice()
{
    return (price);
}

bool MenuItem::isVegetarian()
{
    return (vegetarian);
}

}
