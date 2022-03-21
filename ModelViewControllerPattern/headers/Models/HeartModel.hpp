#ifndef HEARTMODEL_HPP
# define HEARTMODEL_HPP

# include "Interfaces/IHeartModel.hpp"
# include <unordered_set>

class HeartModel : public IHeartModel
{
int heartRate;
std::unordered_set<IBeatObserver *> beatObservers;
std::unordered_set<IBPMObserver *> bpmObservers;
public:
    HeartModel();
    int getHeartRate() const;
    void registerBeatObserver(IBeatObserver *beatObserver);
    void unregisterBeatObserver(IBeatObserver *beatObserver);
    void notifyBeatObservers();
    void registerBPMObserver(IBPMObserver *bpmObserver);
    void unregisterBPMObserver(IBPMObserver *bpmObserver);
    void notifyBPMObservers();
};

#endif
