#ifndef CURRENTCONDITIONS_HPP
# define CURRENTCONDITIONS_HPP

# include "Observer.hpp"
# include "DisplayElement.hpp"
# include "Subject.hpp"

namespace WeatherNamespace
{

class CurrentConditions : public Observer, public DisplayElement
{
private:
    Subject *subject;
    float temperature;
    float humidity;
public:
    CurrentConditions(Subject *subject);
    void update(float temperature, float humidity, float pressure);
    void display() const;
};

}

#endif
