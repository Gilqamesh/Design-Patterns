#ifndef MACROCOMMAND_HPP
# define MACROCOMMAND_HPP

# include "Command.hpp"
# include <vector>

namespace RemoteNamespace
{

class MacroCommand : public Command
{
private:
    std::vector<Command *> commands;
public:
    MacroCommand(const std::vector<Command *> commands);
    void execute();
    void undo();
};

}

#endif
