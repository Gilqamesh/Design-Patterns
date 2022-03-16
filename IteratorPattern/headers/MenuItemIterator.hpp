#ifndef MENUITEMITERATOR_HPP
# define MENUITEMITERATOR_HPP

# include "MenuItem.hpp"

namespace MenuNamespace
{

class MenuItemIterator
{
public:
    virtual ~MenuItemIterator();
    virtual bool hasNext() = 0;
    virtual MenuItem *next() = 0;
};

}

#endif
