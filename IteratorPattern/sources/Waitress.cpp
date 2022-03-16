#include "Waitress.hpp"
#include "Log.hpp"

namespace MenuNamespace
{

Waitress::Waitress(const std::vector<Menu *> &menus)
    : menus(menus)
{
    
}

void Waitress::printMenu() const
{
    for (unsigned int i = 0; i < menus.size(); ++i)
        printMenu(menus[i]->createIterator());
}

void Waitress::printMenu(MenuItemIterator *menuIterator) const
{
    while (menuIterator->hasNext())
    {
        MenuItem *menuItem = menuIterator->next();
        Log::print(menuItem->getName() + ", ");
        Log::print(std::to_string(menuItem->getPrice()) + " -- ");
        Log::println(menuItem->getDescription());
    }
}

}
