#include "PancakeHouseMenuIterator.hpp"

namespace MenuNamespace
{

PancakeHouseMenuIterator::PancakeHouseMenuIterator(std::vector<MenuItem *> *menuItems)
    : menuItems(menuItems), it(this->menuItems->begin())
{

}

bool PancakeHouseMenuIterator::hasNext()
{
    return (it != menuItems->end());
}

MenuItem *PancakeHouseMenuIterator::next()
{
    return (*it++);
}

}
