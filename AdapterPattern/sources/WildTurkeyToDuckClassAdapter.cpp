#include "WildTurkeyToDuckClassAdapter.hpp"

namespace AdapterNamespace
{

void WildTurkeyToDuckClassAdapter::quack()
{
    WildTurkey::gobble();
}

void WildTurkeyToDuckClassAdapter::fly()
{
    for (unsigned int i = 0; i < 5; ++i)
        WildTurkey::fly();
}

}
