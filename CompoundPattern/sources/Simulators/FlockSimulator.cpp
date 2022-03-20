#include "Simulators/FlockSimulator.hpp"
#include "Factories/CountingDuckFactory.hpp"
#include "Interfaces/IQuackable.hpp"
#include "Decorators/QuackCounter.hpp"
#include "Composites/Flock.hpp"
#include "Log.hpp"

static void simulate(IQuackable *quackable)
{
    quackable->quack();
}

static void simulate(IAbstractDuckFactory *abstractDuckFactory)
{
    /* make bunch of ducks */
    IQuackable *redheadDuck = abstractDuckFactory->createRedheadDuck();
    IQuackable *duckCall = abstractDuckFactory->createDuckCall();
    IQuackable *rubberDuck = abstractDuckFactory->createRubberDuck();
    IQuackable *gooseDuck = abstractDuckFactory->createGooseDuck();

    /* add these ducks to a flock */
    Flock *flockOfDucks = new Flock();
    flockOfDucks->add(redheadDuck);
    flockOfDucks->add(duckCall);
    flockOfDucks->add(rubberDuck);
    flockOfDucks->add(gooseDuck);

    /* give birth to 4 mallard ducks */
    IQuackable *mallardDuck = abstractDuckFactory->createMallardDuck();
    IQuackable *mallardDuck2 = abstractDuckFactory->createMallardDuck();
    IQuackable *mallardDuck3 = abstractDuckFactory->createMallardDuck();
    IQuackable *mallardDuck4 = abstractDuckFactory->createMallardDuck();

    /* strap these 4 mallard ducks to a flock */
    Flock *flockOfMallards = new Flock();
    flockOfMallards->add(mallardDuck);
    flockOfMallards->add(mallardDuck2);
    flockOfMallards->add(mallardDuck3);
    flockOfMallards->add(mallardDuck4);

    /* also add them to the first flock */
    flockOfDucks->add(flockOfMallards);

    LOG("Whole Flock Simulation:");
    /*
        A flock is techincally a quackable but flock also has 'add' method, so with this design I went with
        safety rather than transparency. This always has to be considered with Composite Pattern
    */
    simulate(flockOfDucks);

    LOG("Mallard Flock Simulation");
    simulate(flockOfMallards);

    LOG("The ducks quacked: " << QuackCounter::getQuacks() << " times.");

    delete redheadDuck;
    delete duckCall;
    delete rubberDuck;
    delete gooseDuck;
    delete mallardDuck;
    delete mallardDuck2;
    delete mallardDuck3;
    delete mallardDuck4;
    delete flockOfDucks;
    delete flockOfMallards;
}

void FlockSimulator::main()
{
    CountingDuckFactory *countingDuckFactory = new CountingDuckFactory();

    simulate(countingDuckFactory);

    delete countingDuckFactory;
}
