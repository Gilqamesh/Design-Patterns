#include "Ducks/RubberDuck.hpp"
#include "Log.hpp"

RubberDuck::RubberDuck()
    : quackObservable(new QuackObservable())
{

}

RubberDuck::~RubberDuck()
{
    delete quackObservable;
}

void RubberDuck::quack()
{
    LOG("Squeak"); /* A RubberDuck that makes a squeak when it quacks */
    quackObservable->notifyObservers();
}

void RubberDuck::registerObserver(IObserver *quackObserver)
{
    quackObservable->registerObserver(quackObserver);
}

void RubberDuck::unregisterObserver(IObserver *quackObserver)
{
    quackObservable->unregisterObserver(quackObserver);
}

void RubberDuck::notifyObservers()
{
    quackObservable->notifyObservers();
}

