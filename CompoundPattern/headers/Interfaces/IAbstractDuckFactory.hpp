#ifndef IABSTRACTDUCKFACTORY_HPP
# define IABSTRACTDUCKFACTORY_HPP

class IQuackable;

class IAbstractDuckFactory
{
public:
    virtual ~IAbstractDuckFactory();
    virtual IQuackable *createMallardDuck() = 0;
    virtual IQuackable *createRedheadDuck() = 0;
    virtual IQuackable *createDuckCall() = 0;
    virtual IQuackable *createRubberDuck() = 0;
    virtual IQuackable *createGooseDuck() = 0;
};

#endif
