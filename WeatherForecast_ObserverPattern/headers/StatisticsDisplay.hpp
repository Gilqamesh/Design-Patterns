#ifndef STATISTICSDISPLAY_HPP
# define STATISTICSDISPLAY_HPP

# include "Observer.hpp"
# include "DisplayElement.hpp"
# include "Observable.hpp"

namespace WeatherNamespace
{

class StatisticsDisplay : public Observer, public DisplayElement
{
private:
    Observable *observable;
    unsigned int numberOfUpdates;
    float minTemp;
    float maxTemp;
    float avgTemp;
public:
    StatisticsDisplay(Observable *observable);
    void update();
    void display() const;
};

}

#endif
