#ifndef LIGHTOFFCOMMAND_HPP
# define LIGHTOFFCOMMAND_HPP

# include "Command.hpp"
# include "Light.hpp"

namespace RemoteNamespace
{

class LightOffCommand : public Command
{
private:
    Light *light;
public:
    LightOffCommand(Light *light);
    void execute();
    void undo();
};

}

#endif
