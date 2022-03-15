#ifndef STEREOONWITHCDCOMMAND_HPP
# define STEREOONWITHCDCOMMAND_HPP

# include "Command.hpp"
# include "Stereo.hpp"

namespace RemoteNamespace
{

class StereoOnWithCDCommand : public Command
{
private:
    Stereo *stereo;
public:
    StereoOnWithCDCommand(Stereo *stereo);
    void execute();
    void undo();
};

}

#endif
