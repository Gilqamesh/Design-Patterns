#include "CeilingFan.hpp"
#include "Log.hpp"

namespace RemoteNamespace
{

CeilingFan::CeilingFan()
    : speed(OFF)
{

}

void CeilingFan::high()
{
    Log::println("Ceiling fan is on high");
    speed = HIGH;
}

void CeilingFan::medium()
{
    Log::println("Ceiling fan is on medium");
    speed = MEDIUM;
}

void CeilingFan::low()
{
    Log::println("Ceiling fan is on low");
    speed = LOW;
}

void CeilingFan::off()
{
    Log::println("Ceiling fan is off");
    speed = OFF;
}

void CeilingFan::setSpeed(int speed)
{
    switch (speed)
    {
        case OFF:
            off();
            break ;
        case LOW:
            low();
            break ;
        case MEDIUM:
            medium();
            break ;
        case HIGH:
            high();
            break ;
        default:
            break ;
    }
}

int CeilingFan::getSpeed()
{
    return (speed);
}

}
