#include "MacroCommand.hpp"

namespace RemoteNamespace
{

MacroCommand::MacroCommand(const std::vector<Command *> commands)
    : commands(commands)
{

}

void MacroCommand::execute()
{
    for (unsigned int i = 0; i < commands.size(); ++i)
        commands[i]->execute();
}

void MacroCommand::undo()
{
    for (unsigned int i = 0; i < commands.size(); ++i)
        commands[i]->undo();
}

}
