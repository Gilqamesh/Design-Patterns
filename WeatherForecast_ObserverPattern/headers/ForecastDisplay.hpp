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
    float temperature;
    float humidity;
    float pressure;
public:
    ForecastDisplay(Subject *subject);
    void update(float temp, float humidity, float pressure);
    void display() const;
};

}

#endif
