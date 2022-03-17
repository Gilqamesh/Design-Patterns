#ifndef WINNERSTATE_HPP
# define WINNERSTATE_HPP

# include "State.hpp"

class WinnerState : public State
{
public:
    WinnerState(GumballMachine *gumballMachine);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
};

#endif
