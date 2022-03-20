#ifndef SOLDOUTSTATE_HPP
# define SOLDOUTSTATE_HPP

# include "State.hpp"

class SoldOutState : public State
{
public:
    SoldOutState(GumballMachine *gumballMachine);
    void insertQuarter();
    void ejectQuarter();
    bool turnCrank();
    void dispense();
};

#endif
