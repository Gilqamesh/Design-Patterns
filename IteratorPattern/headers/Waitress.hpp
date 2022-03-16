#ifndef WAITRESS_HPP
# define WAITRESS_HPP

# include "PancakeHouseMenu.hpp"
# include "DinerMenu.hpp"
# include "Menu.hpp"
# include <vector>

namespace MenuNamespace
{

class Waitress
{

private:
    std::vector<Menu *> menus;
    void printMenu(MenuItemIterator *menuIterator) const;
public:
    Waitress(const std::vector<Menu *> &menus);
    void printMenu() const;
};

}

#endif
