#ifndef IBPMOBSERVER_HPP
# define IBPMOBSERVER_HPP

class IBPMObserver
{
public:
    virtual ~IBPMObserver();
    virtual void updateBPM() = 0;
};

#endif
