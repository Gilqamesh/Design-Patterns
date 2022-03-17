#ifndef STATE_HPP
# define STATE_HPP

class GumballMachine;

class State
{
protected:
    GumballMachine *gumballMachine;
public:
    State(GumballMachine *gumballMachine);
    virtual ~State();
    virtual void insertQuarter() = 0;
    virtual void ejectQuarter() = 0;
    virtual void turnCrank() = 0;
    virtual void dispense() = 0;
};

#endif
