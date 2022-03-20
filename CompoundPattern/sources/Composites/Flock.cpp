#include "Composites/Flock.hpp"

Flock::Flock()
{
    
}

void Flock::quack()
{
    for (std::unordered_set<IQuackable *>::iterator it = quackers.begin(); it != quackers.end(); ++it)
        (*it)->quack();
}

void Flock::add(IQuackable *quackable)
{
    quackers.insert(quackable);
}

void Flock::remove(IQuackable *quackable)
{
    quackers.erase(quackable);
}

void Flock::registerObserver(IObserver *quackObserver)
{
    for (std::unordered_set<IQuackable *>::iterator it = quackers.begin(); it != quackers.end(); ++it)
        (*it)->registerObserver(quackObserver);
}

void Flock::unregisterObserver(IObserver *quackObserver)
{
    for (std::unordered_set<IQuackable *>::iterator it = quackers.begin(); it != quackers.end(); ++it)
        (*it)->unregisterObserver(quackObserver);
}

void Flock::notifyObservers()
{
    for (std::unordered_set<IQuackable *>::iterator it = quackers.begin(); it != quackers.end(); ++it)
        (*it)->notifyObservers();
}
