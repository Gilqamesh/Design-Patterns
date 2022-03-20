#include "Adapters/HonkerToQuackable.hpp"
#include "Log.hpp"

HonkerToQuackable::HonkerToQuackable(std::unique_ptr<IHonker> honker) noexcept
    : honker(std::move(honker)), quackObservable(new QuackObservable())
{

}

HonkerToQuackable::HonkerToQuackable(HonkerToQuackable &&other) noexcept
    : honker(std::move(other.honker)), quackObservable(std::move(other.quackObservable))
{

}

HonkerToQuackable &HonkerToQuackable::operator=(HonkerToQuackable &&other) noexcept
{
    if (this != &other)
    {
        std::swap(honker, other.honker);
        std::swap(quackObservable, other.quackObservable);
    }
    return (*this);
}

HonkerToQuackable::~HonkerToQuackable()
{
    delete quackObservable;
}

void HonkerToQuackable::quack()
{
    honker->honk();
    quackObservable->notifyObservers();
}

void HonkerToQuackable::registerObserver(IObserver *quackObserver)
{
    quackObservable->registerObserver(quackObserver);
}

void HonkerToQuackable::unregisterObserver(IObserver *quackObserver)
{
    quackObservable->unregisterObserver(quackObserver);
}

void HonkerToQuackable::notifyObservers()
{
    quackObservable->notifyObservers();
}

