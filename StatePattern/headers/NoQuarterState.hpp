#ifndef NOQUARTERSTATE_HPP
# define NOQUARTERSTATE_HPP

# include "State.hpp"

class NoQuarterState : public State
{
public:
    NoQuarterState(GumballMachine *gumballMachine);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
};

#endif
