#include "StatisticsDisplay.hpp"
#include "Log.hpp"

namespace WeatherNamespace
{

StatisticsDisplay::StatisticsDisplay(Subject *subject)
{
    numberOfUpdates = 0;
    this->subject = subject;
    subject->registerObserver(this);
}

void StatisticsDisplay::update(float temperature, float humidity, float pressure)
{
    if (numberOfUpdates++ == 0)
    {
        minTemp = maxTemp = avgTemp = temperature;
        minHumidity = maxHumidity = avgHumidity = humidity;
        minPressure = maxPressure = avgPressure = pressure;
        return ;
    }
    if (temperature < minTemp)
        minTemp = temperature;
    if (temperature > maxTemp)
        maxTemp = temperature;
    avgTemp = (avgTemp * (numberOfUpdates - 1) + temperature) / numberOfUpdates;

    if (humidity < minHumidity)
        minHumidity = humidity;
    if (humidity > maxHumidity)
        maxHumidity = humidity;
    avgHumidity = (avgHumidity * (numberOfUpdates - 1) + humidity) / numberOfUpdates;

    if (pressure < minPressure)
        minPressure = pressure;
    if (pressure > maxPressure)
        maxPressure = pressure;
    avgPressure = (avgPressure * (numberOfUpdates - 1) + pressure) / numberOfUpdates;
    display();
}

void StatisticsDisplay::display() const
{
    if (numberOfUpdates == 0)
    {
        Log::println("No updates in Statistics Display");
        return ;
    }
    Log::println("Minimum, maximum and average values");
    Log::println(std::string(std::string("Temperature: ") + std::to_string(minTemp) + std::to_string(maxTemp) + std::to_string(avgTemp)));
    Log::println(std::string(std::string("Humidity: ") + std::to_string(minHumidity) + std::to_string(maxHumidity) + std::to_string(avgHumidity)));
    Log::println(std::string(std::string("Pressure: ") + std::to_string(minPressure) + std::to_string(maxPressure) + std::to_string(avgPressure)));
}

}
