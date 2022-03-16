#ifndef DINERMENU_HPP
# define DINERMENU_HPP

# include <list>
# include <MenuItem.hpp>
# include "Menu.hpp"

namespace MenuNamespace
{

class DinerMenu : public Menu
{
private:
    std::list<MenuItem *> menuItems;
public:
    DinerMenu();
    void addItem(const std::string &name, const std::string &description, bool vegetarian, double price);
    MenuItemIterator *createIterator();
};

}

#endif
