#include "CeilingFanHighCommand.hpp"

namespace RemoteNamespace
{

CeilingFanHighCommand::CeilingFanHighCommand(CeilingFan *ceilingFan)
    : ceilingFan(ceilingFan), prevSpeed(ceilingFan->getSpeed())
{

}

void CeilingFanHighCommand::execute()
{
    prevSpeed = ceilingFan->getSpeed();
    ceilingFan->high();
}

void CeilingFanHighCommand::undo()
{
    ceilingFan->setSpeed(prevSpeed);
}

}
