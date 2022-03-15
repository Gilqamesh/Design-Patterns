#ifndef COMMAND_HPP
# define COMMAND_HPP

namespace RemoteNamespace
{

class Command
{
public:
    virtual ~Command();
    virtual void execute() = 0;
    virtual void undo() = 0;
};

}

#endif
