#ifndef GUMBALLMACHINE_HPP
# define GUMBALLMACHINE_HPP

# include "IGumballMachine.hpp"

class State;

class GumballMachine : public IGumballMachine
{
public:
    State *state;
    State *soldOutState;
    State *noQuarterState;
    State *hasQuarterState;
    State *soldState;
    State *winnerState;

    int count;
    void releaseBall();

    GumballMachine(int numberOfGumballs);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void refill(unsigned int numberOfGumballs);
};

#endif
