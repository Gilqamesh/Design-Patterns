#include "DinerMenu.hpp"
#include "DinerMenuIterator.hpp"

namespace MenuNamespace
{

DinerMenu::DinerMenu()
{
    addItem("Vegetarian BLT", "(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99);
    addItem("BLT", "Bacon with lettuce & tomato on whole wheat", false, 2.99);
    addItem("Soup of the day", "Soup of the day, with a side of potato salad", false, 3.29);
    addItem("Hotdog", "A hot dog, with saurkraut, relish, onions, topped with cheese", false, 3.05);
}

void DinerMenu::addItem(const std::string &name, const std::string &description, bool vegetarian, double price)
{
    MenuItem *menuItem = new MenuItem(name, description, vegetarian, price);
    menuItems.push_back(menuItem);
}

MenuItemIterator *DinerMenu::createIterator()
{
    return (new DinerMenuIterator(&menuItems));
}

}
