#include "Ducks/DuckCall.hpp"
#include "Log.hpp"

DuckCall::DuckCall()
    : quackObservable(new QuackObservable())
{

}

DuckCall::~DuckCall()
{
    delete quackObservable;
}

void DuckCall::quack()
{
    LOG("Kwak"); /* A DuckCall that quacks but doesn't sound quite like the real thing. */
    quackObservable->notifyObservers(); /* when we quack, we need to let the observers know about it */
}

void DuckCall::registerObserver(IObserver *quackObserver)
{
    quackObservable->registerObserver(quackObserver);
}

void DuckCall::unregisterObserver(IObserver *quackObserver)
{
    quackObservable->unregisterObserver(quackObserver);
}

void DuckCall::notifyObservers()
{
    quackObservable->notifyObservers();
}

