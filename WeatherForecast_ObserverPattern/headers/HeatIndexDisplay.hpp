#ifndef HEATINDEXDISPLAY_HPP
# define HEATINDEXDISPLAY_HPP

# include "DisplayElement.hpp"
# include "Observer.hpp"
# include "Subject.hpp"

namespace WeatherNamespace
{

class HeatIndexDisplay : public Observer, public DisplayElement
{
private:
    Subject *subject;
    float temperature;
    float humidity;
public:
    HeatIndexDisplay(Subject *subject);
    void update();
    void display() const;
};

}

#endif
