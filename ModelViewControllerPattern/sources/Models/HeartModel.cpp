#include "Models/HeartModel.hpp"
#include "Interfaces/IBeatObserver.hpp"
#include "Interfaces/IBPMObserver.hpp"

HeartModel::HeartModel()
    : heartRate(69)
{

}

int HeartModel::getHeartRate() const
{
    return (heartRate);
}

void HeartModel::registerBeatObserver(IBeatObserver *beatObserver)
{
    beatObservers.insert(beatObserver);
}

void HeartModel::unregisterBeatObserver(IBeatObserver *beatObserver)
{
    beatObservers.erase(beatObserver);
}

void HeartModel::notifyBeatObservers()
{
    for (std::unordered_set<IBeatObserver *>::iterator it = beatObservers.begin(); it != beatObservers.end(); ++it)
        (*it)->updateBeat();
}

void HeartModel::registerBPMObserver(IBPMObserver *bpmObserver)
{
    bpmObservers.insert(bpmObserver);
}

void HeartModel::unregisterBPMObserver(IBPMObserver *bpmObserver)
{
    bpmObservers.erase(bpmObserver);
}

void HeartModel::notifyBPMObservers()
{
    for (std::unordered_set<IBPMObserver *>::iterator it = bpmObservers.begin(); it != bpmObservers.end(); ++it)
        (*it)->updateBPM();
}
