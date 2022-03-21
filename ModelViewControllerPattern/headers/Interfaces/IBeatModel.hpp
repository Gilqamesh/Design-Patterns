#ifndef IBEATMODEL_HPP
# define IBEATMODEL_HPP

class IBeatObserver;
class IBPMObserver;

class IBeatModel
{
public:
    virtual ~IBeatModel();
    virtual void on() = 0;
    virtual void off() = 0;
    virtual void setBPM(int bmp) = 0;
    virtual int getBPM() = 0;
    virtual void registerBeatObserver(IBeatObserver *beatObserver) = 0;
    virtual void unregisterBeatObserver(IBeatObserver *beatObserver) = 0;
    virtual void notifyBeatObservers() = 0;
    virtual void registerBPMObserver(IBPMObserver *bpmObserver) = 0;
    virtual void unregisterBPMObserver(IBPMObserver *bpmObserver) = 0;
    virtual void notifyBPMObservers() = 0;
};

#endif
