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
    gumballMachine->setState(gumballMachine->getHasQuarterState());
}

void NoQuarterState::ejectQuarter()
{
    Log::println("No quarter to eject");
}

void NoQuarterState::turnCrank()
{
    Log::println("Cranking.. nothing happens");
}

void NoQuarterState::dispense()
{
    Log::println("You need to pay first");
}
