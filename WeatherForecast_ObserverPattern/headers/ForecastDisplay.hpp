#ifndef FORECASTDISPLAY_HPP
# define FORECASTDISPLAY_HPP

# include "Observer.hpp"
# include "DisplayElement.hpp"
# include "Observable.hpp"

namespace WeatherNamespace
{

class ForecastDisplay : public Observer, public DisplayElement
{
private:
    Observable *observable;
    float lastPressure;
    float pressure;
public:
    ForecastDisplay(Observable *observable);
    void update();
    void display() const;
};

}

#endif
