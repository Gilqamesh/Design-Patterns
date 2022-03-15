#include "RemoteControl.hpp"
#include "NoCommand.hpp"
#include "Log.hpp"

namespace RemoteNamespace
{

RemoteControl::RemoteControl(unsigned int numberOfSlots)
    : onCommands(numberOfSlots), offCommands(numberOfSlots)
{
    NoCommand *noCommand = new NoCommand();
    for (unsigned int i = 0; i < numberOfSlots; ++i)
    {
        onCommands[i] = noCommand;
        offCommands[i] = noCommand;
    }
}

void RemoteControl::setCommand(unsigned int slot, Command *onCommand, Command *offCommand)
{
    onCommands[slot] = onCommand;
    offCommands[slot] = offCommand;
}

void RemoteControl::onButtonWasPushed(unsigned int slot)
{
    onCommands[slot]->execute();
    commandHistory.push(onCommands[slot]);
}

void RemoteControl::offButtonWasPushed(unsigned int slot)
{
    offCommands[slot]->execute();
    commandHistory.push(offCommands[slot]);
}

void RemoteControl::undoButtonWasPushed()
{
    if (commandHistory.size())
    {
        commandHistory.top()->undo();
        commandHistory.pop();
    }
}

}
