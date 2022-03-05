#ifndef DISPLAYELEMENT_HPP
# define DISPLAYELEMENT_HPP

namespace WeatherNamespace
{

class DisplayElement
{
public:
    virtual ~DisplayElement() { }
    virtual void display() const = 0;
};

}

#endif
