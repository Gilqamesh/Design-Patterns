#ifndef GUMBALLMACHINEPROXY_HPP
# define GUMBALLMACHINEPROXY_HPP

# include "GumballMachine.hpp"

class GumballMachineProxy : IGumballMachine
{
private:
    GumballMachine *gumballMachine;
public:
    GumballMachineProxy(GumballMachine *gumballMachine);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void refill(unsigned int numberOfGumballs);
};

#endif
