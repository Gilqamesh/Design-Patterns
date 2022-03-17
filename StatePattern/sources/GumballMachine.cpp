#include "GumballMachine.hpp"
#include "SoldOutState.hpp"
#include "NoQuarterState.hpp"
#include "HasQuarterState.hpp"
#include "SoldState.hpp"
#include "WinnerState.hpp"
#include "Log.hpp"

GumballMachine::GumballMachine(int numberOfGumballs)
    : count(numberOfGumballs)
{
    soldOutState = new SoldOutState(this);
    noQuarterState = new NoQuarterState(this);
    hasQuarterState = new HasQuarterState(this);
    soldState = new SoldState(this);
    winnerState = new WinnerState(this);

    if (count > 0)
        state = noQuarterState;
    else
        state = soldOutState;
}

void GumballMachine::setState(State *state)
{
    this->state = state;
}

void GumballMachine::releaseBall()
{
    assert(count > 0); /* count can never be negative */
    Log::println("A gumball comes rolling out the slot...");
    --count;
}

State *GumballMachine::getSoldOutState()
{
    return (soldOutState);
}

State *GumballMachine::getNoQuarterState()
{
    return (noQuarterState);
}

State *GumballMachine::getHasQuarterState()
{
    return (hasQuarterState);
}

State *GumballMachine::getSoldState()
{
    return (soldState);
}

State *GumballMachine::getWinnerState()
{
    return (winnerState);
}

int GumballMachine::getCount() const
{
    return (count);
}

void GumballMachine::insertQuarter()
{
    state->insertQuarter();
}

void GumballMachine::ejectQuarter()
{
    state->ejectQuarter();
}

void GumballMachine::turnCrank()
{
    state->turnCrank();
    state->dispense();
}

void GumballMachine::refill(int numberOfGumballs)
{
    count += numberOfGumballs;
    Log::println("Refilling machine with " + std::to_string(numberOfGumballs) + " gumballs..");
    if (state == hasQuarterState)
        ejectQuarter();
    state = noQuarterState;
}
