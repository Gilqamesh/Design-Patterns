#include "Decorators/QuackCounter.hpp"
#include "Log.hpp"

int QuackCounter::numberOfQuacks = 0;

QuackCounter::QuackCounter(std::unique_ptr<IQuackable> quackable) noexcept
    : quackable(std::move(quackable))
{

}

void QuackCounter::quack()
{
    quackable->quack();
    ++numberOfQuacks;
}

int QuackCounter::getQuacks()
{
    return (numberOfQuacks);
}

void QuackCounter::registerObserver(IObserver *quackObserver)
{
    /*
        this is a wrapper object, the base object is already an observer,
        so we dont need to register the same object multiple times
    */
    (void)quackObserver;
}

void QuackCounter::unregisterObserver(IObserver *quackObserver)
{
    (void)quackObserver;
}

void QuackCounter::notifyObservers()
{

}

