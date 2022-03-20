#ifndef MALLARDDUCK_HPP
# define MALLARDDUCK_HPP

# include "Interfaces/IQuackable.hpp"
# include "Observables/QuackObservable.hpp"

class MallardDuck : public IQuackable
{
QuackObservable *quackObservable;
public:
    MallardDuck();
    ~MallardDuck();
    void quack();
    void registerObserver(IObserver *quackObserver);
    void unregisterObserver(IObserver *quackObserver);
    void notifyObservers();
};

#endif
