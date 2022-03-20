#ifndef REDHEADDUCK_HPP
# define REDHEADDUCK_HPP

# include "Interfaces/IQuackable.hpp"
# include "Observables/QuackObservable.hpp"

class RedheadDuck : public IQuackable
{
QuackObservable *quackObservable;
public:
    RedheadDuck();
    ~RedheadDuck();
    void quack();
    void registerObserver(IObserver *quackObserver);
    void unregisterObserver(IObserver *quackObserver);
    void notifyObservers();
};

#endif
