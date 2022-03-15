#ifndef STEREOOFFCOMMAND_HPP
# define STEREOOFFCOMMAND_HPP

# include "Command.hpp"
# include "Stereo.hpp"

namespace RemoteNamespace
{

class StereoOffCommand : public Command
{
private:
    Stereo *stereo;
public:
    StereoOffCommand(Stereo *stereo);
    void execute();
    void undo();
};

}

#endif
