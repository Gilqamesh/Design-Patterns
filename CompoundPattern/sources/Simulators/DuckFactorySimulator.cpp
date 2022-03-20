#include "Simulators/DuckFactorySimulator.hpp"
#include "Factories/CountingDuckFactory.hpp"
#include "Interfaces/IQuackable.hpp"
#include "Decorators/QuackCounter.hpp"
#include "Log.hpp"

static void simulate(IQuackable *quackable)
{
    quackable->quack();
}

static void simulate(IAbstractDuckFactory *abstractDuckFactory)
{
    IQuackable *mallardDuck = abstractDuckFactory->createMallardDuck();
    IQuackable *redheadDuck = abstractDuckFactory->createRedheadDuck();
    IQuackable *duckCall = abstractDuckFactory->createDuckCall();
    IQuackable *rubberDuck = abstractDuckFactory->createRubberDuck();
    IQuackable *gooseDuck = abstractDuckFactory->createGooseDuck();

    simulate(mallardDuck);
    simulate(redheadDuck);
    simulate(duckCall);
    simulate(rubberDuck);
    simulate(gooseDuck);

    LOG("The ducks quacked: " << QuackCounter::getQuacks() << " times.");

    delete mallardDuck;
    delete redheadDuck;
    delete duckCall;
    delete rubberDuck;
    delete gooseDuck;
}

void DuckFactorySimulator::main()
{
    CountingDuckFactory *countingDuckFactory = new CountingDuckFactory();

    simulate(countingDuckFactory);

    delete countingDuckFactory;
}
