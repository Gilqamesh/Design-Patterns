#ifndef MENU_HPP
# define MENU_HPP

# include "MenuItemIterator.hpp"

namespace MenuNamespace
{

class Menu
{
public:
    virtual ~Menu();
    virtual MenuItemIterator *createIterator() = 0;
};

}

#endif
