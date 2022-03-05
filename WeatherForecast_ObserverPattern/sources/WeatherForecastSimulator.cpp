#include "WeatherForecastSimulator.hpp"
#include "CurrentConditions.hpp"
#include "ForecastDisplay.hpp"
#include "StatisticsDisplay.hpp"
#include "WeatherData.hpp"

namespace WeatherNamespace
{

void WeatherForecastSimulator::main()
{
    WeatherData *weatherData = new WeatherData();
    CurrentConditions *currentConditions = new CurrentConditions(weatherData);
    ForecastDisplay *forecastDisplay = new ForecastDisplay(weatherData);
    StatisticsDisplay *statisticsDisplay = new StatisticsDisplay(weatherData);

    (void)currentConditions;
    (void)forecastDisplay;
    (void)statisticsDisplay;

    weatherData->setMeasurements(80, 65, 30.4f);
    weatherData->setMeasurements(82, 70, 29.2f);
    weatherData->setMeasurements(78, 90, 29.2f);
}

}
