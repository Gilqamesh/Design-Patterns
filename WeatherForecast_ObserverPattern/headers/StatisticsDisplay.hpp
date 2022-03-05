#ifndef STATISTICSDISPLAY_HPP
# define STATISTICSDISPLAY_HPP

# include "Observer.hpp"
# include "DisplayElement.hpp"
# include "Subject.hpp"

namespace WeatherNamespace
{

class StatisticsDisplay : public Observer, public DisplayElement
{
private:
    Subject *subject;
    unsigned int numberOfUpdates;
    float minTemp;
    float maxTemp;
    float avgTemp;
    float minHumidity;
    float maxHumidity;
    float avgHumidity;
    float minPressure;
    float maxPressure;
    float avgPressure;
public:
    StatisticsDisplay(Subject *subject);
    void update(float temp, float humidity, float pressure);
    void display() const;
};

}

#endif
