#include "Factories/CountingDuckFactory.hpp"
#include "Ducks/MallardDuck.hpp"
#include "Ducks/RedheadDuck.hpp"
#include "Ducks/DuckCall.hpp"
#include "Ducks/RubberDuck.hpp"
#include "Decorators/QuackCounter.hpp"
#include "Adapters/HonkerToQuackable.hpp"
#include "Geese/Goose.hpp"
#include <memory>

IQuackable *CountingDuckFactory::createMallardDuck()
{
    return (new QuackCounter(std::unique_ptr<MallardDuck>(new MallardDuck())));
}

IQuackable *CountingDuckFactory::createRedheadDuck()
{
    return (new QuackCounter(std::unique_ptr<RedheadDuck>(new RedheadDuck())));
}

IQuackable *CountingDuckFactory::createDuckCall()
{
    return (new QuackCounter(std::unique_ptr<DuckCall>(new DuckCall())));
}

IQuackable *CountingDuckFactory::createRubberDuck()
{
    return (new QuackCounter(std::unique_ptr<RubberDuck>(new RubberDuck())));
}

IQuackable *CountingDuckFactory::createGooseDuck()
{
    return (new QuackCounter(
        std::unique_ptr<HonkerToQuackable>(new HonkerToQuackable(
                std::unique_ptr<Goose>(new Goose())
            ))));
}
