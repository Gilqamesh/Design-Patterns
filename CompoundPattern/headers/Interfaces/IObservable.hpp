#ifndef IOBSERVABLE_HPP
# define IOBSERVABLE_HPP

class IObserver;

class IObservable
{
public:
    virtual ~IObservable();
    virtual void registerObserver(IObserver *observer) = 0;
    virtual void unregisterObserver(IObserver *observer) = 0;
    virtual void notifyObservers() = 0;
};

#endif
