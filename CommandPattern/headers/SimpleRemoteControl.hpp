#ifndef SIMPLEREMOTECONTROL_HPP
# define SIMPLEREMOTECONTROL_HPP

# include "Command.hpp"

namespace RemoteNamespace
{

class SimpleRemoteControl
{
private:
    Command *slot;
public:
    void setCommand(Command *command);
    void buttonWasPressed();
};

}

#endif
