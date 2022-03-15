#include "GarageDoor.hpp"
#include "Log.hpp"

namespace RemoteNamespace
{

void GarageDoor::up()
{
    Log::println("Garage door is opening..");
}

void GarageDoor::down()
{
    Log::println("Garage door is closing..");
}

void GarageDoor::stop()
{
    Log::println("Garage door has stopped!");
}

void GarageDoor::lightOn()
{
    Log::println("Garage door lights on");
}

void GarageDoor::lightOff()
{
    Log::println("Garage door lights off");
}

}
