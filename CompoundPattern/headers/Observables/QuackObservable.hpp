#ifndef QUACKOBSERVABLE_HPP
# define QUACKOBSERVABLE_HPP

# include "Interfaces/IObservable.hpp"
# include <unordered_set>

class QuackObservable : public IObservable
{
std::unordered_set<IObserver *> quackObservers;
public:
    void registerObserver(IObserver *quackObserver);
    void unregisterObserver(IObserver *quackObserver);
    void notifyObservers();
};

#endif
