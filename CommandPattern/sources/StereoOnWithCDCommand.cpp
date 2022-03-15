#include "StereoOnWithCDCommand.hpp"

namespace RemoteNamespace
{

StereoOnWithCDCommand::StereoOnWithCDCommand(Stereo *stereo)
    : stereo(stereo)
{

}

void StereoOnWithCDCommand::execute()
{
    stereo->on();
    stereo->setCd();
    stereo->setVolume(11);
}

void StereoOnWithCDCommand::undo()
{
    stereo->off();
}

}
