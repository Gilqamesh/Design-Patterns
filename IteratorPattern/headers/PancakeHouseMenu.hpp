#ifndef PANCAKEHOUSEMENU_HPP
# define PANCAKEHOUSEMENU_HPP

# include <vector>
# include "MenuItem.hpp"
# include "Menu.hpp"

namespace MenuNamespace
{

class PancakeHouseMenu : public Menu
{
private:
    std::vector<MenuItem *> menuItems;
public:
    PancakeHouseMenu();
    void addItem(const std::string &name, const std::string &description, bool vegetarian, double price);
    MenuItemIterator *createIterator();
};

}

#endif
