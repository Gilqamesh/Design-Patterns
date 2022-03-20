#include "Observables/QuackObservable.hpp"
#include "Interfaces/IObserver.hpp"

void QuackObservable::registerObserver(IObserver *quackObserver)
{
    quackObservers.insert(quackObserver);
}

void QuackObservable::unregisterObserver(IObserver *quackObserver)
{
    quackObservers.erase(quackObserver);
}

void QuackObservable::notifyObservers()
{
    for (std::unordered_set<IObserver *>::iterator it = quackObservers.begin(); it != quackObservers.end(); ++it)
        (*it)->update();
}
