#ifndef REMOTECONTROL_HPP
# define REMOTECONTROL_HPP

# include "Command.hpp"
# include <vector>
# include <string>
# include <stack>

namespace RemoteNamespace
{

class RemoteControl
{
private:
    std::vector<Command *> onCommands;
    std::vector<Command *> offCommands;
    std::stack<Command *> commandHistory;
public:
    RemoteControl(unsigned int numberOfSlots);
    void setCommand(unsigned int slot, Command *onCommand, Command *offCommand);
    void onButtonWasPushed(unsigned int slot);
    void offButtonWasPushed(unsigned int slot);
    void undoButtonWasPushed();
};

}

#endif
