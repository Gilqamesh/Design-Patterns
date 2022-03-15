#ifndef GARAGEDOORCLOSECOMMAND_HPP
# define GARAGEDOORCLOSECOMMAND_HPP

# include "Command.hpp"
# include "GarageDoor.hpp"

namespace RemoteNamespace
{

class GarageDoorCloseCommand : public Command
{
private:
    GarageDoor *garageDoor;
public:
    GarageDoorCloseCommand(GarageDoor *garageDoor);
    void execute();
    void undo();
};

}

#endif
