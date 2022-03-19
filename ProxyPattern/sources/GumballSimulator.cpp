#include "GumballSimulator.hpp"
#include "GumballMachineProxy.hpp"

void GumballSimulator::main()
{
    GumballMachine *gumballMachine = new GumballMachine(20);
    GumballMachineProxy *gumballMachineProxy = new GumballMachineProxy(gumballMachine);
    gumballMachineProxy->insertQuarter();
    gumballMachineProxy->ejectQuarter();
    gumballMachineProxy->insertQuarter();
    gumballMachineProxy->turnCrank();
    gumballMachineProxy->turnCrank();
    gumballMachineProxy->turnCrank();
    gumballMachineProxy->turnCrank();
    gumballMachineProxy->turnCrank();
    gumballMachineProxy->turnCrank();
    gumballMachineProxy->insertQuarter();
    gumballMachineProxy->insertQuarter();
    gumballMachineProxy->insertQuarter();
    gumballMachineProxy->insertQuarter();
    gumballMachineProxy->turnCrank();
    gumballMachineProxy->insertQuarter();
    gumballMachineProxy->turnCrank();
    gumballMachineProxy->insertQuarter();
    gumballMachineProxy->turnCrank();
    gumballMachineProxy->insertQuarter();
    gumballMachineProxy->turnCrank();
    gumballMachineProxy->ejectQuarter();
    gumballMachineProxy->ejectQuarter();
    gumballMachineProxy->insertQuarter();
    gumballMachineProxy->turnCrank();
    gumballMachineProxy->insertQuarter();
    gumballMachineProxy->turnCrank();
    gumballMachineProxy->insertQuarter();
    gumballMachineProxy->turnCrank();
    gumballMachineProxy->insertQuarter();
    gumballMachineProxy->turnCrank();
}
