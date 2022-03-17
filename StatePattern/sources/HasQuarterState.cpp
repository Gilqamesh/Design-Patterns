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
    gumballMachine->setState(gumballMachine->getNoQuarterState());
}

void HasQuarterState::turnCrank()
{
    Log::println("You turned...");
    if (std::rand() % 10 == 0 && gumballMachine->getCount() > 1) /* 10% chance */
        gumballMachine->setState(gumballMachine->getWinnerState());
    else
        gumballMachine->setState(gumballMachine->getSoldState());
}

void HasQuarterState::dispense()
{
    Log::println("No gumball dispensed");
}
