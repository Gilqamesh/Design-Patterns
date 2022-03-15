#ifndef LIGHTONCOMMAND_HPP
# define LIGHTONCOMMAND_HPP

# include "Command.hpp"
# include "Light.hpp"

namespace RemoteNamespace
{

class LightOnCommand : public Command
{
private:
    Light *light;
public:
    LightOnCommand(Light *light);
    void execute();
    void undo();
};

}

#endif
