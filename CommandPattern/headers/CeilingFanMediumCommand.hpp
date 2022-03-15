#ifndef CEILINGFANMEDIUMCOMMAND_HPP
# define CEILINGFANMEDIUMCOMMAND_HPP

# include "Command.hpp"
# include "CeilingFan.hpp"

namespace RemoteNamespace
{

class CeilingFanMediumCommand : public Command
{
private:
    CeilingFan *ceilingFan;
    int prevSpeed;
public:
    CeilingFanMediumCommand(CeilingFan *ceilingFan);
    void execute();
    void undo();
};

}

#endif
