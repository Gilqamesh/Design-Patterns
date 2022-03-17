#include "GumballSimulator.hpp"
#include "GumballMachine.hpp"

void GumballSimulator::main()
{
    GumballMachine *gumballMachine = new GumballMachine(20);
    gumballMachine->insertQuarter();
    gumballMachine->ejectQuarter();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->turnCrank();
    gumballMachine->turnCrank();
    gumballMachine->turnCrank();
    gumballMachine->turnCrank();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->insertQuarter();
    gumballMachine->insertQuarter();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->ejectQuarter();
    gumballMachine->ejectQuarter();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
}
