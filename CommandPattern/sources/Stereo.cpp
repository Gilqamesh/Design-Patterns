#include "Stereo.hpp"
#include "Log.hpp"

namespace RemoteNamespace
{

void Stereo::on()
{
    Log::println("Turning stereo on");
}

void Stereo::off()
{
    Log::println("Turning stereo off");
}

void Stereo::setCd()
{
    Log::println("Setting stereo to play cd");
}

void Stereo::setDvd()
{
    Log::println("Setting stereo to play dvd");
}

void Stereo::setRadio()
{
    Log::println("Setting stereo to play radio");
}

void Stereo::setVolume(unsigned int volume)
{
    Log::println("Setting volume on stereo to " + std::to_string(volume));
}

}
