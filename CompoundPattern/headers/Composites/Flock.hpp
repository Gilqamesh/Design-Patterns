#ifndef FLOCK_HPP
# define FLOCK_HPP

# include "Interfaces/IQuackable.hpp"
# include <unordered_set>

class Flock : public IQuackable
{
std::unordered_set<IQuackable *> quackers;
public:
    Flock(); /* why do I need this?? */
    void quack();
    void add(IQuackable *quackable);
    void remove(IQuackable *quackable);
    void registerObserver(IObserver *quackObserver);
    void unregisterObserver(IObserver *quackObserver);
    void notifyObservers();
};

#endif
