#ifndef WEATHERDATA_HPP
# define WEATHERDATA_HPP

# include <unordered_set>
# include "Subject.hpp"

namespace WeatherNamespace
{

class WeatherData : public Subject
{
private:
    std::unordered_set<Observer *> observers;
    float temperature;
    float humidity;
    float pressure;
public:
    WeatherData() { }
    ~WeatherData() { }
    void registerObserver(Observer *observer);
    void removeObserver(Observer *observer);
    void notifyObservers() const;

    void getTemperature() const;
    void getHumidity() const;
    void getPressure() const;
    void measurementsChanged() const;
    void setMeasurements(float temperature, float humidity, float pressure);
};

}

#endif
