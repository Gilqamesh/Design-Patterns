#ifndef IQUACKABLE_HPP
# define IQUACKABLE_HPP

# include "Interfaces/IObservable.hpp"

class IQuackable : public IObservable
{
public:
    virtual ~IQuackable();
    virtual void quack() = 0;
};

#endif
