#include "CeilingFanMediumCommand.hpp"

namespace RemoteNamespace
{

CeilingFanMediumCommand::CeilingFanMediumCommand(CeilingFan *ceilingFan)
    : ceilingFan(ceilingFan), prevSpeed(ceilingFan->getSpeed())
{

}

void CeilingFanMediumCommand::execute()
{
    prevSpeed = ceilingFan->getSpeed();
    ceilingFan->medium();
}

void CeilingFanMediumCommand::undo()
{
    ceilingFan->setSpeed(prevSpeed);
}

}
