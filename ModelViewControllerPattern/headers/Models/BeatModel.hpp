#ifndef BEATMODEL_HPP
# define BEATMODEL_HPP

# include "Interfaces/IBeatModel.hpp"
# include <unordered_set>

class BeatModel : public IBeatModel
{
int bpm;
std::unordered_set<IBeatObserver *> beatObservers;
std::unordered_set<IBPMObserver *> bpmObservers;
public:
    BeatModel();
    void on();
    void off();
    void setBPM(int bpm);
    int getBPM();
    void beatEvent();
    void registerBeatObserver(IBeatObserver *beatObserver);
    void unregisterBeatObserver(IBeatObserver *beatObserver);
    void notifyBeatObservers();
    void registerBPMObserver(IBPMObserver *bpmObserver);
    void unregisterBPMObserver(IBPMObserver *bpmObserver);
    void notifyBPMObservers();
};

#endif
