#include "Light.hpp"
#include "Log.hpp"

namespace RemoteNamespace
{

void Light::on()
{
    Log::println("Turning light on");
}

void Light::off()
{
    Log::println("Turning light off");
}

}
