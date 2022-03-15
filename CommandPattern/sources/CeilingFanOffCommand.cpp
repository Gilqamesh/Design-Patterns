#include "CeilingFanOffCommand.hpp"

namespace RemoteNamespace
{

CeilingFanOffCommand::CeilingFanOffCommand(CeilingFan *ceilingFan)
    : ceilingFan(ceilingFan), prevSpeed(ceilingFan->getSpeed())
{

}

void CeilingFanOffCommand::execute()
{
    prevSpeed = ceilingFan->getSpeed();
    ceilingFan->off();
}

void CeilingFanOffCommand::undo()
{
    ceilingFan->setSpeed(prevSpeed);
}

}
