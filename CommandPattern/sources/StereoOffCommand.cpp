#include "StereoOffCommand.hpp"

namespace RemoteNamespace
{

StereoOffCommand::StereoOffCommand(Stereo *stereo)
    : stereo(stereo)
{

}

void StereoOffCommand::execute()
{
    stereo->off();
}

void StereoOffCommand::undo()
{
    stereo->on();
}

}
