#include "ForecastDisplay.hpp"
#include "Log.hpp"

namespace WeatherNamespace
{

ForecastDisplay::ForecastDisplay(Subject *subject)
{
    this->subject = subject;
    subject->registerObserver(this);
}

void ForecastDisplay::update(float temperature, float humidity, float pressure)
{
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;
    display();
}

void ForecastDisplay::display() const
{
    Log::println("ForecastDisplay message");
}

}
