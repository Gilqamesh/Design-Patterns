#include "CurrentConditions.hpp"
#include "Log.hpp"

namespace WeatherNamespace
{

CurrentConditions::CurrentConditions(Subject *subject)
{
    this->subject = subject;
    subject->registerObserver(this);
}

void CurrentConditions::update(float temperature, float humidity, float pressure)
{
    this->temperature = temperature;
    this->humidity = humidity;
    (void)pressure;
    display();
}

void CurrentConditions::display() const
{
    Log::println(std::string("Current conditions ") + std::to_string(temperature)
        + std::string("F degrees and ")
        + std::to_string(humidity) + std::string("% humidity"));
}

}
