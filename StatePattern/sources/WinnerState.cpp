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

void WinnerState::turnCrank()
{
    assert(false);
}

void WinnerState::dispense()
{
    Log::println("YOU'RE A WINNER! You get two gumballs for your quarter");
    gumballMachine->releaseBall();
    if (gumballMachine->getCount() > 0)
    {
        gumballMachine->releaseBall();
        if (gumballMachine->getCount() > 0)
            gumballMachine->setState(gumballMachine->getHasQuarterState());
        else
            gumballMachine->setState(gumballMachine->getSoldOutState());
    }
    else
    {
        Log::println("Oops, out of gumballs!");
        gumballMachine->setState(gumballMachine->getSoldOutState());
    }
}

