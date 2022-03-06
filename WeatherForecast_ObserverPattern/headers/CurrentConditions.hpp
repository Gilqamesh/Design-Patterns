#ifndef CURRENTCONDITIONS_HPP
# define CURRENTCONDITIONS_HPP

# include "Observer.hpp"
# include "DisplayElement.hpp"
# include "Observable.hpp"

namespace WeatherNamespace
{

class CurrentConditions : public Observer, public DisplayElement
{
private:
    Observable *observable;
    float temperature;
    float humidity;
public:
    CurrentConditions(Observable *observable);
    void update();
    void display() const;
};

}

#endif
