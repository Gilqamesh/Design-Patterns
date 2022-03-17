#ifndef GUMBALLMACHINE_HPP
# define GUMBALLMACHINE_HPP

class State;

class GumballMachine
{
private:
    /* these friend declarations are stupid.. I wonder if there is a better way to do this */
    friend class SoldOutState;
    friend class NoQuarterState;
    friend class HasQuarterState;
    friend class SoldState;
    friend class WinnerState;
    State *soldOutState;
    State *noQuarterState;
    State *hasQuarterState;
    State *soldState;
    State *winnerState;
    
    State *state;
    int count;
    void setState(State *state);
    void releaseBall();
    State *getSoldOutState();
    State *getNoQuarterState();
    State *getHasQuarterState();
    State *getSoldState();
    State *getWinnerState();
    int getCount() const;
public:
    GumballMachine(int numberOfGumballs);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void refill(int numberOfGumballs);
};

#endif
