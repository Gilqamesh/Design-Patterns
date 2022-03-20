#ifndef IOBSERVER_HPP
# define IOBSERVER_HPP

class IObservable;

class IObserver
{
public:
    virtual ~IObserver();
    virtual void update() = 0;
};

#endif
