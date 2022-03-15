#include "GarageDoorCloseCommand.hpp"

namespace RemoteNamespace
{

GarageDoorCloseCommand::GarageDoorCloseCommand(GarageDoor *garageDoor)
    : garageDoor(garageDoor)
{

}

void GarageDoorCloseCommand::execute()
{
    garageDoor->down();
}

void GarageDoorCloseCommand::undo()
{
    garageDoor->up();
}

}
