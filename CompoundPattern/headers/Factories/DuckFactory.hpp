#ifndef DUCKFACTORY_HPP
# define DUCKFACTORY_HPP

# include "Interfaces/IAbstractDuckFactory.hpp"

class DuckFactory : public IAbstractDuckFactory
{
public:
    IQuackable *createMallardDuck();
    IQuackable *createRedheadDuck();
    IQuackable *createDuckCall();
    IQuackable *createRubberDuck();
    IQuackable *createGooseDuck();
};

#endif
