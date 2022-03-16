#ifndef PANCAKEHOUSEMENUITERATOR_HPP
# define PANCAKEHOUSEMENUITERATOR_HPP

# include "MenuItemIterator.hpp"
# include <vector>

namespace MenuNamespace
{

class PancakeHouseMenuIterator : public MenuItemIterator
{
private:
    std::vector<MenuItem *> *menuItems;
    std::vector<MenuItem *>::iterator it;
public:
    PancakeHouseMenuIterator(std::vector<MenuItem *> *menuItems);
    bool hasNext();
    MenuItem *next();
};

}

#endif
