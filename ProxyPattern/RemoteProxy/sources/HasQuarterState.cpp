#include "HasQuarterState.hpp"
#include "GumballMachine.hpp"
#include "Log.hpp"

HasQuarterState::HasQuarterState(GumballMachine *gumballMachine)
    : State(gumballMachine)
{

}

void HasQuarterState::insertQuarter()
{
    Log::println("Already have a quarter");
}

void HasQuarterState::ejectQuarter()
{
    Log::println("Ejecting quarter");
    gumballMachine->state = gumballMachine->noQuarterState;
}

bool HasQuarterState::turnCrank()
{
    Log::println("You turned...");
    if (std::rand() % 10 == 0 && gumballMachine->count > 1) /* 10% chance */
        gumballMachine->state = gumballMachine->winnerState;
    else
        gumballMachine->state = gumballMachine->soldState;
    return (true);
}

void HasQuarterState::dispense()
{
    Log::println("No gumball dispensed");
}
