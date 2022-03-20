#include "Simulators/DuckObserverSimulator.hpp"
#include "Observables/QuackObservable.hpp"
#include "Observers/QuackObserver.hpp"
#include "Factories/DuckFactory.hpp"
#include "Composites/Flock.hpp"
#include "Log.hpp"

static void simulate(IQuackable *quackable)
{
    quackable->quack();
}

void simulate(IAbstractDuckFactory *duckFactory)
{
    /* make the duck observer */
    QuackObserver *quackObserver = new QuackObserver();

    /* make bunch of ducks */
    IQuackable *redheadDuck = duckFactory->createRedheadDuck();
    IQuackable *duckCall = duckFactory->createDuckCall();
    IQuackable *rubberDuck = duckFactory->createRubberDuck();
    IQuackable *gooseDuck = duckFactory->createGooseDuck();

    /* add these ducks to a flock */
    Flock *flockOfDucks = new Flock();
    flockOfDucks->add(redheadDuck);
    flockOfDucks->add(duckCall);
    flockOfDucks->add(rubberDuck);
    flockOfDucks->add(gooseDuck);

    /* give birth to 4 mallard ducks */
    IQuackable *mallardDuck = duckFactory->createMallardDuck();
    IQuackable *mallardDuck2 = duckFactory->createMallardDuck();
    IQuackable *mallardDuck3 = duckFactory->createMallardDuck();
    IQuackable *mallardDuck4 = duckFactory->createMallardDuck();

    /* strap these 4 mallard ducks to a flock */
    Flock *flockOfMallards = new Flock();
    flockOfMallards->add(mallardDuck);
    flockOfMallards->add(mallardDuck2);
    flockOfMallards->add(mallardDuck3);
    flockOfMallards->add(mallardDuck4);

    /* register observer */
    flockOfMallards->registerObserver(quackObserver);
    /* this should already be added */
    mallardDuck2->registerObserver(quackObserver);
    duckCall->registerObserver(quackObserver);
    
    simulate(flockOfMallards);

    simulate(flockOfDucks);

    mallardDuck2->quack();
    mallardDuck2->unregisterObserver(quackObserver);
    mallardDuck2->quack();

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
    delete quackObserver;
}

void DuckObserverSimulator::main()
{
    DuckFactory *duckFactory = new DuckFactory();

    simulate(duckFactory);

    delete duckFactory;
}
