#include "WinnerState.hpp"
#include "GumballMachine.hpp"
#include "Log.hpp"

WinnerState::WinnerState(GumballMachine *gumballMachine)
    : State(gumballMachine)
{

}

void WinnerState::insertQuarter()
{
    assert(false);
}

void WinnerState::ejectQuarter()
{
    assert(false);
}

bool WinnerState::turnCrank()
{
    assert(false);
    return (false);
}

void WinnerState::dispense()
{
    Log::println("YOU'RE A WINNER! You get two gumballs for your quarter");
    gumballMachine->releaseBall();
    if (gumballMachine->count > 0)
    {
        gumballMachine->releaseBall();
        if (gumballMachine->count > 0)
            gumballMachine->state = gumballMachine->noQuarterState;
        else
            gumballMachine->state = gumballMachine->soldOutState;
    }
    else
    {
        Log::println("Oops, out of gumballs!");
        gumballMachine->state = gumballMachine->soldOutState;
    }
}
