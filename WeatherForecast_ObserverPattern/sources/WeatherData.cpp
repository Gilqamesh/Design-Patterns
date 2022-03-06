#include "WeatherData.hpp"

namespace WeatherNamespace
{

void WeatherData::registerObserver(Observer *observer)
{
    observers.insert(observer);
}

void WeatherData::removeObserver(Observer *observer)
{
    observers.erase(observer);
}

void WeatherData::notifyObservers()
{
    if (hasChanged())
    {
        for (std::unordered_set<Observer *>::const_iterator cit = observers.begin(); cit != observers.end(); ++cit)
            (*cit)->update();
    }
    clearChanged();
}

void WeatherData::measurementsChanged()
{
    setChanged();
    notifyObservers();
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure)
{
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;
    measurementsChanged();
}

}
