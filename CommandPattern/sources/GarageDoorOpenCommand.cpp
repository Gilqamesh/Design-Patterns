#include "GarageDoorOpenCommand.hpp"

namespace RemoteNamespace
{

GarageDoorOpenCommand::GarageDoorOpenCommand(GarageDoor *garageDoor)
    : garageDoor(garageDoor)
{

}

void GarageDoorOpenCommand::execute()
{
    garageDoor->up();
}

void GarageDoorOpenCommand::undo()
{
    garageDoor->down();
}

}
