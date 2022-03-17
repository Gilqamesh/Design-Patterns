#ifndef HASQUARTERSTATE_HPP
# define HASQUARTERSTATE_HPP

# include "State.hpp"

class HasQuarterState : public State
{
public:
    HasQuarterState(GumballMachine *gumballMachine);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
};

#endif
