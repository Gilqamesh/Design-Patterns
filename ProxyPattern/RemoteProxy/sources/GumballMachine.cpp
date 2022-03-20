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

void GumballMachine::releaseBall()
{
    assert(count > 0); /* count can never be negative */
    Log::println("A gumball comes rolling out the slot...");
    --count;
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
    if (state->turnCrank())
        state->dispense();
}

void GumballMachine::refill(unsigned int numberOfGumballs)
{
    count += numberOfGumballs;
    Log::println("Refilling machine with " + std::to_string(numberOfGumballs) + " gumballs..");
}
