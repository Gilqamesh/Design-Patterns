#ifndef HONKERTOQUACKABLE_HPP
# define HONKERTOQUACKABLE_HPP

# include "Interfaces/IQuackable.hpp"
# include "Interfaces/IHonker.hpp"
# include "Observables/QuackObservable.hpp"
# include <memory>

class HonkerToQuackable : public IQuackable
{
std::unique_ptr<IHonker> honker;
QuackObservable *quackObservable;
public:
    HonkerToQuackable(std::unique_ptr<IHonker> honker) noexcept;
    /* No idea why we need these move operators to be honest */
    HonkerToQuackable(HonkerToQuackable &&other) noexcept;
    HonkerToQuackable &operator=(HonkerToQuackable &&other) noexcept;
    ~HonkerToQuackable();
    void quack();
    void registerObserver(IObserver *quackObserver);
    void unregisterObserver(IObserver *quackObserver);
    void notifyObservers();
};

#endif
