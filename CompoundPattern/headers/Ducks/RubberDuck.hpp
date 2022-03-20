#ifndef RUBBERDUCK_HPP
# define RUBBERDUCK_HPP

# include "Interfaces/IQuackable.hpp"
# include "Observables/QuackObservable.hpp"

class RubberDuck : public IQuackable
{
QuackObservable *quackObservable;
public:
    RubberDuck();
    ~RubberDuck();
    void quack();
    void registerObserver(IObserver *quackObserver);
    void unregisterObserver(IObserver *quackObserver);
    void notifyObservers();
};

#endif
