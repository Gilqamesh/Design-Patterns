#include "SimpleRemoteControl.hpp"

namespace RemoteNamespace
{

void SimpleRemoteControl::setCommand(Command *command)
{
    slot = command;
}

void SimpleRemoteControl::buttonWasPressed()
{
    slot->execute();
}

}
