#include "DinerMenuIterator.hpp"

namespace MenuNamespace
{

DinerMenuIterator::DinerMenuIterator(std::list<MenuItem *> *menuItems)
    : menuItems(menuItems), it(this->menuItems->begin())
{

}

bool DinerMenuIterator::hasNext()
{
    return (it != menuItems->end());
}

MenuItem *DinerMenuIterator::next()
{
    return (*it++);
}

}
