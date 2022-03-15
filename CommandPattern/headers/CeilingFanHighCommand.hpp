#ifndef CEILINGFANHIGHCOMMAND_HPP
# define CEILINGFANHIGHCOMMAND_HPP

# include "Command.hpp"
# include "CeilingFan.hpp"

namespace RemoteNamespace
{

class CeilingFanHighCommand : public Command
{
private:
    CeilingFan *ceilingFan;
    int prevSpeed;
public:
    CeilingFanHighCommand(CeilingFan *ceilingFan);
    void execute();
    void undo();
};

}

#endif
