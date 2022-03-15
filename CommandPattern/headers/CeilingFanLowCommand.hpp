#ifndef CEILINGFANLOWCOMMAND_HPP
# define CEILINGFANLOWCOMMAND_HPP

# include "Command.hpp"
# include "CeilingFan.hpp"

namespace RemoteNamespace
{

class CeilingFanLowCommand : public Command
{
private:
    CeilingFan *ceilingFan;
    int prevSpeed;
public:
    CeilingFanLowCommand(CeilingFan *ceilingFan);
    void execute();
    void undo();
};

}

#endif
