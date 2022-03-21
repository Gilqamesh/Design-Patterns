#ifndef IHEARTMODEL_HPP
# define IHEARTMODEL_HPP

class IBeatObserver;
class IBPMObserver;

class IHeartModel
{
public:
    virtual ~IHeartModel();
    virtual int getHeartRate() const = 0;
    virtual void registerBeatObserver(IBeatObserver *beatObserver) = 0;
    virtual void unregisterBeatObserver(IBeatObserver *beatObserver) = 0;
    virtual void notifyBeatObservers() = 0;
    virtual void registerBPMObserver(IBPMObserver *bpmObserver) = 0;
    virtual void unregisterBPMObserver(IBPMObserver *bpmObserver) = 0;
    virtual void notifyBPMObservers() = 0;
};

#endif
