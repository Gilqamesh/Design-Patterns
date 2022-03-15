#ifndef GARAGEDOOROPENCOMMAND_HPP
# define GARAGEDOOROPENCOMMAND_HPP

# include "Command.hpp"
# include "GarageDoor.hpp"

namespace RemoteNamespace
{

class GarageDoorOpenCommand : public Command
{
private:
    GarageDoor *garageDoor;
public:
    GarageDoorOpenCommand(GarageDoor *garageDoor);
    void execute();
    void undo();
};

}

#endif
