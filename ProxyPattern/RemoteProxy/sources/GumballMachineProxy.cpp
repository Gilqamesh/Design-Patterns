#include "GumballMachineProxy.hpp"

GumballMachineProxy::GumballMachineProxy(GumballMachine *gumballMachine)
    : gumballMachine(gumballMachine)
{

}

void GumballMachineProxy::insertQuarter()
{
    gumballMachine->insertQuarter();
}

void GumballMachineProxy::ejectQuarter()
{
    gumballMachine->ejectQuarter();
}

void GumballMachineProxy::turnCrank()
{
    return (gumballMachine->turnCrank());
}

void GumballMachineProxy::refill(unsigned int numberOfGumballs)
{
    gumballMachine->refill(numberOfGumballs);
}

