#ifndef WEATHERDATA_HPP
# define WEATHERDATA_HPP

# include "Subject.hpp"
# include "Observer.hpp"
# include <unordered_set>

namespace WeatherNamespace
{

class WeatherData : public Subject
{
private:
    bool changed;
    std::unordered_set<Observer *> observers;
    float temperature;
    float humidity;
    float pressure;
public:
    void registerObserver(Observer *observer);
    void removeObserver(Observer *observer);
    void notifyObservers();

    inline float getTemperature() const { return (temperature); }
    inline float getHumidity() const { return (humidity); }
    inline float getPressure() const { return (pressure); }
    void measurementsChanged();
    void setMeasurements(float temperature, float humidity, float pressure);
    inline void setChanged() { changed = true; }
    inline void clearChanged() { changed = false; }
    inline bool hasChanged() { return (changed); }
};

}

#endif
