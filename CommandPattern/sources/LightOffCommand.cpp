#include "LightOffCommand.hpp"

namespace RemoteNamespace
{

LightOffCommand::LightOffCommand(Light *light)
    : light(light)
{

}

void LightOffCommand::execute()
{
    light->off();
}

void LightOffCommand::undo()
{
    light->on();
}

}
