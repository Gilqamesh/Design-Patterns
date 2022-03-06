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
public:
    StatisticsDisplay(Subject *subject);
    void update();
    void display() const;
};

}

#endif
