#include "StatisticsDisplay.hpp"
#include "Log.hpp"
#include "WeatherData.hpp"

namespace WeatherNamespace
{

StatisticsDisplay::StatisticsDisplay(Subject *subject)
{
    numberOfUpdates = 0;
    this->subject = subject;
    subject->registerObserver(this);
}

void StatisticsDisplay::update()
{
    if (dynamic_cast<WeatherData *>(subject))
    {
        WeatherData *weatherData = dynamic_cast<WeatherData *>(subject);
        float temperature = weatherData->getTemperature();
        if (numberOfUpdates++ == 0)
            minTemp = maxTemp = avgTemp = temperature;
        if (temperature < minTemp)
            minTemp = temperature;
        if (temperature > maxTemp)
            maxTemp = temperature;
        avgTemp = (avgTemp * (numberOfUpdates - 1) + temperature) / numberOfUpdates;
        display();
    }
}

void StatisticsDisplay::display() const
{
    if (numberOfUpdates == 0)
    {
        Log::println("No updates in Statistics Display");
        return ;
    }
    Log::println("Avg/Max/Min temperature: " + std::to_string(avgTemp) + "/"
        + std::to_string(maxTemp) + "/" + std::to_string(minTemp));
}

}
