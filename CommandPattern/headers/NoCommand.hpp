#ifndef NOCOMMAND_HPP
# define NOCOMMAND_HPP

# include "Command.hpp"

namespace RemoteNamespace
{

class NoCommand : public Command
{
public:
    void execute();
    void undo();
};

}

#endif
