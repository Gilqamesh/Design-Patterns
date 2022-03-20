#include "Ducks/RedheadDuck.hpp"
#include "Log.hpp"

RedheadDuck::RedheadDuck()
    : quackObservable(new QuackObservable())
{

}

RedheadDuck::~RedheadDuck()
{
    delete quackObservable;
}

void RedheadDuck::quack()
{
    LOG("Quack");
    quackObservable->notifyObservers();
}

void RedheadDuck::registerObserver(IObserver *quackObserver)
{
    quackObservable->registerObserver(quackObserver);
}

void RedheadDuck::unregisterObserver(IObserver *quackObserver)
{
    quackObservable->unregisterObserver(quackObserver);
}

void RedheadDuck::notifyObservers()
{
    quackObservable->notifyObservers();
}

