#ifndef DUCKCALL_HPP
# define DUCKCALL_HPP

# include "Interfaces/IQuackable.hpp"
# include "Observables/QuackObservable.hpp"

class DuckCall : public IQuackable
{
QuackObservable *quackObservable;
public:
    DuckCall();
    ~DuckCall();
    void quack();
    void registerObserver(IObserver *quackObserver);
    void unregisterObserver(IObserver *quackObserver);
    void notifyObservers();
};

#endif
