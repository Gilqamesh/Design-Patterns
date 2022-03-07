#ifndef OBSERVER_HPP
# define OBSERVER_HPP

namespace WeatherNamespace
{

class Observer
{
public:
    Observer() { }
    virtual ~Observer() { }
    virtual void update() = 0;
};

}

#endif
