#include "Ducks/MallardDuck.hpp"
#include "Log.hpp"

MallardDuck::MallardDuck()
    : quackObservable(new QuackObservable())
{

}

MallardDuck::~MallardDuck()
{
    delete quackObservable;
}

void MallardDuck::quack()
{
    LOG("Quack"); /* Your standard Mallard duck. */
    quackObservable->notifyObservers();
}

void MallardDuck::registerObserver(IObserver *quackObserver)
{
    quackObservable->registerObserver(quackObserver);
}

void MallardDuck::unregisterObserver(IObserver *quackObserver)
{
    quackObservable->unregisterObserver(quackObserver);
}

void MallardDuck::notifyObservers()
{
    quackObservable->notifyObservers();
}

