#ifndef IGUMBALLMACHINE_HPP
# define IGUMBALLMACHINE_HPP

class IGumballMachine
{
public:
    virtual ~IGumballMachine() = 0;
    virtual void insertQuarter() = 0;
    virtual void ejectQuarter() = 0;
    virtual void turnCrank() = 0;
    virtual void refill(unsigned int numberOfGumballs) = 0;
};

#endif
