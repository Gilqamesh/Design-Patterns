#include "CurrentConditions.hpp"
#include "Log.hpp"
#include "WeatherData.hpp"

namespace WeatherNamespace
{

CurrentConditions::CurrentConditions(Observable *observable)
{
    this->observable = observable;
    observable->registerObserver(this);
}

void CurrentConditions::update()
{
    if (dynamic_cast<WeatherData *>(observable))
    {
        WeatherData *weatherData = dynamic_cast<WeatherData *>(observable);
        this->temperature = weatherData->getTemperature();
        this->humidity = weatherData->getHumidity();
        display();
    }
}

void CurrentConditions::display() const
{
    Log::println(std::string("Current conditions ") + std::to_string(temperature)
        + std::string("F degrees and ")
        + std::to_string(humidity) + std::string("% humidity"));
}

}
