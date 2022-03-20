#ifndef COUNTINGDUCKFACTORY_HPP
# define COUNTINGDUCKFACTORY_HPP

# include "Interfaces/IAbstractDuckFactory.hpp"

class CountingDuckFactory : public IAbstractDuckFactory
{
public:
    IQuackable *createMallardDuck();
    IQuackable *createRedheadDuck();
    IQuackable *createDuckCall();
    IQuackable *createRubberDuck();
    IQuackable *createGooseDuck();
};

#endif
