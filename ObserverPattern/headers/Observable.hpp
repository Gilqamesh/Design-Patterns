#ifndef OBSERVABLE_HPP
# define OBSERVABLE_HPP

namespace WeatherNamespace
{

class Observer;

class Observable
{
public:
    virtual ~Observable() { }
    virtual void registerObserver(Observer *observer) = 0;
    virtual void removeObserver(Observer *observer) = 0;
    virtual void notifyObservers() = 0;
};

}

#endif
