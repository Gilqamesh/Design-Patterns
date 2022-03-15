#ifndef CEILINGFANOFFCOMMAND_HPP
# define CEILINGFANOFFCOMMAND_HPP

# include "Command.hpp"
# include "CeilingFan.hpp"

namespace RemoteNamespace
{

class CeilingFanOffCommand : public Command
{
private:
    CeilingFan *ceilingFan;
    int prevSpeed;
public:
    CeilingFanOffCommand(CeilingFan *ceilingFan);
    void execute();
    void undo();
};

}

#endif
