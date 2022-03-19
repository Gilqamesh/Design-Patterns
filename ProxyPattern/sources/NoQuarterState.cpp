#include "NoQuarterState.hpp"
#include "GumballMachine.hpp"
#include "Log.hpp"

NoQuarterState::NoQuarterState(GumballMachine *gumballMachine)
    : State(gumballMachine)
{

}

void NoQuarterState::insertQuarter()
{
    Log::println("Inserting quarter");
    gumballMachine->state = gumballMachine->hasQuarterState;
}

void NoQuarterState::ejectQuarter()
{
    Log::println("No quarter to eject");
}

bool NoQuarterState::turnCrank()
{
    Log::println("Cranking.. nothing happens");
    return (false);
}

void NoQuarterState::dispense()
{
    Log::println("You need to pay first");
}
