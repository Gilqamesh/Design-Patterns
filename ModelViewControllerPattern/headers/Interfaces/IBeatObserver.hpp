#ifndef IBEATOBSERVER_HPP
# define IBEATOBSERVER_HPP

class IBeatObserver
{
public:
    virtual ~IBeatObserver();
    virtual void updateBeat() = 0;
};

#endif
