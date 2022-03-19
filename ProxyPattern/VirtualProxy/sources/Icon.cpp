#include "Icon.hpp"
#include <iostream>

Icon::Icon()
    : width(640), height(480)
{

}

Icon::~Icon()
{

}

int Icon::getIconWidth()
{
    return (width);
}

int Icon::getIconHeight()
{
    return (height);
}

void Icon::paintIcon()
{
    std::cout << "Nothing to paint" << std::endl;
}
