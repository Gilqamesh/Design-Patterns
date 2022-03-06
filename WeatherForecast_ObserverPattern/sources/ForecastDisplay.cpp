#include "ForecastDisplay.hpp"
#include "Log.hpp"
#include "WeatherData.hpp"

namespace WeatherNamespace
{

ForecastDisplay::ForecastDisplay(Subject *subject)
{
    pressure = 29.92f;
    this->subject = subject;
    subject->registerObserver(this);
}

void ForecastDisplay::update()
{
    if (dynamic_cast<WeatherData *>(subject))
    {
        WeatherData *weatherData = dynamic_cast<WeatherData *>(subject);
        lastPressure = this->pressure;
        this->pressure = weatherData->getPressure();
        display();
    }
}

void ForecastDisplay::display() const
{
    Log::print("Forecast: ");
    if (pressure > lastPressure) {
        Log::println("Improving weather on the way!");
    } else if (pressure == lastPressure) {
        Log::println("More of the same");
    } else if (pressure < lastPressure) {
        Log::println("Watch out for cooler, rainy weather");
    }
}

}
