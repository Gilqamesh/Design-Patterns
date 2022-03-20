#ifndef QUACKOBSERVER_HPP
# define QUACKOBSERVER_HPP

# include "Interfaces/IObserver.hpp"

class QuackObserver : public IObserver
{
public:
    void update();
};

#endif
