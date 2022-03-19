#ifndef SOLDSTATE_CPP
# define SOLDSTATE_CPP

# include "State.hpp"

class SoldState : public State
{
public:
    SoldState(GumballMachine *gumballMachine);
    void insertQuarter();
    void ejectQuarter();
    bool turnCrank();
    void dispense();
};

#endif
