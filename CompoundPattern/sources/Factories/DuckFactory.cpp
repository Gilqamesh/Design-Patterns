#include "Factories/DuckFactory.hpp"
#include "Ducks/MallardDuck.hpp"
#include "Ducks/RedheadDuck.hpp"
#include "Ducks/DuckCall.hpp"
#include "Ducks/RubberDuck.hpp"
#include "Adapters/HonkerToQuackable.hpp"
#include "Geese/Goose.hpp"
#include <memory>

IQuackable *DuckFactory::createMallardDuck()
{
    return (new MallardDuck());
}

IQuackable *DuckFactory::createRedheadDuck()
{
    return (new RedheadDuck());
}

IQuackable *DuckFactory::createDuckCall()
{
    return (new DuckCall());
}

IQuackable *DuckFactory::createRubberDuck()
{
    return (new RubberDuck());
}

IQuackable *DuckFactory::createGooseDuck()
{
    return (new HonkerToQuackable(std::make_unique<Goose>(Goose())));
}
