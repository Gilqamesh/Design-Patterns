#ifndef SUBJECT_HPP
# define SUBJECT_HPP

namespace WeatherNamespace
{

class Observer;

class Subject
{
public:
    virtual ~Subject() { }
    virtual void registerObserver(Observer *observer) = 0;
    virtual void removeObserver(Observer *observer) = 0;
    virtual void notifyObservers() = 0;
};

}

#endif
