#ifndef SUBJECT_HPP
# define SUBJECT_HPP

# include "Observer.hpp"

namespace WeatherNamespace
{

class Subject
{
public:
    Subject() { }
    virtual ~Subject() { }
    virtual void registerObserver(Observer *observer) = 0;
    virtual void removeObserver(Observer *observer) = 0;
    virtual void notifyObservers() const = 0;
};

}

#endif
