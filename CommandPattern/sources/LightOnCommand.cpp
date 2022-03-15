#include "LightOnCommand.hpp"

namespace RemoteNamespace
{

LightOnCommand::LightOnCommand(Light *light)
    : light(light)
{

}

void LightOnCommand::execute()
{
    light->on();
}

void LightOnCommand::undo()
{
    light->off();
}

}
