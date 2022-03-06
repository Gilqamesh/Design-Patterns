#ifndef HEATINDEXDISPLAY_HPP
# define HEATINDEXDISPLAY_HPP

# include "DisplayElement.hpp"
# include "Observer.hpp"
# include "Observable.hpp"

namespace WeatherNamespace
{

class HeatIndexDisplay : public Observer, public DisplayElement
{
private:
    Observable *observable;
    float temperature;
    float humidity;
public:
    HeatIndexDisplay(Observable *observable);
    void update();
    void display() const;
};

}

#endif
