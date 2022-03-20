#include "SoldOutState.hpp"
#include "Log.hpp"

SoldOutState::SoldOutState(GumballMachine *gumballMachine)
    : State(gumballMachine)
{

}

void SoldOutState::insertQuarter()
{
    Log::println("You cannot insert a quarter, machine is sold out");
}

void SoldOutState::ejectQuarter()
{
    Log::println("You cannot eject if you haven't yet inserted a quarter");
}

bool SoldOutState::turnCrank()
{
    Log::println("You have turned the crank, but there are no gumballs");
    return (false);
}

void SoldOutState::dispense()
{
    Log::println("No gumball dispensed");
}
