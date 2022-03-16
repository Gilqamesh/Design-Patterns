#ifndef DINERMENUITERATOR_HPP
# define DINERMENUITERATOR_HPP

# include "MenuItemIterator.hpp"
# include <list>

namespace MenuNamespace
{

class DinerMenuIterator : public MenuItemIterator
{
private:
    std::list<MenuItem *> *menuItems;
    std::list<MenuItem *>::iterator it;
public:
    DinerMenuIterator(std::list<MenuItem *> *menuItems);
    bool hasNext();
    MenuItem *next();
};

}

#endif
