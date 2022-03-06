#ifndef FORECASTDISPLAY_HPP
# define FORECASTDISPLAY_HPP

# include "Observer.hpp"
# include "DisplayElement.hpp"
# include "Subject.hpp"

namespace WeatherNamespace
{

class ForecastDisplay : public Observer, public DisplayElement
{
private:
    Subject *subject;
    float lastPressure;
    float pressure;
public:
    ForecastDisplay(Subject *subject);
    void update();
    void display() const;
};

}

#endif
