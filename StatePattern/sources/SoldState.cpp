#include "SoldState.hpp"
#include "GumballMachine.hpp"
#include "Log.hpp"

SoldState::SoldState(GumballMachine *gumballMachine)
    : State(gumballMachine)
{

}

void SoldState::insertQuarter()
{
    Log::println("Please wait, we are already giving you a gumball");
}

void SoldState::ejectQuarter()
{
    Log::println("Sorry, you already turned the crank");
}

void SoldState::turnCrank()
{
    Log::println("Turning the crank twice doesn't give you another gumball!");
}

void SoldState::dispense()
{
    if (gumballMachine->getCount() > 0)
    {
        gumballMachine->releaseBall();
        gumballMachine->setState(gumballMachine->getNoQuarterState());
    }
    else
    {
        Log::println("Oops, out of gumballs!");
        gumballMachine->setState(gumballMachine->getSoldOutState());
    }
}

