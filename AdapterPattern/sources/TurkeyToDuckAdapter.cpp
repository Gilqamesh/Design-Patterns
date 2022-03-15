#include "TurkeyToDuckAdapter.hpp"

namespace AdapterNamespace
{

TurkeyToDuckAdapter::TurkeyToDuckAdapter(Turkey *turkey)
    : turkey(turkey)
{

}

void TurkeyToDuckAdapter::quack()
{
    turkey->gobble();
}

void TurkeyToDuckAdapter::fly()
{
    for (unsigned int i = 0; i < 5; ++i)
        turkey->fly();
}

}
