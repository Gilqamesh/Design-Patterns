#include "CeilingFanLowCommand.hpp"

namespace RemoteNamespace
{

CeilingFanLowCommand::CeilingFanLowCommand(CeilingFan *ceilingFan)
    : ceilingFan(ceilingFan), prevSpeed(ceilingFan->getSpeed())
{

}

void CeilingFanLowCommand::execute()
{
    prevSpeed = ceilingFan->getSpeed();
    ceilingFan->low();
}

void CeilingFanLowCommand::undo()
{
    ceilingFan->setSpeed(prevSpeed);
}

}
