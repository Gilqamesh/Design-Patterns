#ifndef QUACKCOUNTER_HPP
# define QUACKCOUNTER_HPP

# include "Interfaces/IQuackable.hpp"
# include <memory>

class QuackCounter : public IQuackable
{
std::unique_ptr<IQuackable> quackable;
static int numberOfQuacks; /* counting all quacks */
public:
    QuackCounter(std::unique_ptr<IQuackable> quackable) noexcept;
    void quack();
    static int getQuacks();
    void registerObserver(IObserver *quackObserver);
    void unregisterObserver(IObserver *quackObserver);
    void notifyObservers();
};

#endif
