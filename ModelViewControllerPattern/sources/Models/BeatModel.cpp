#include "Models/BeatModel.hpp"
#include "Interfaces/IBeatObserver.hpp"
#include "Interfaces/IBPMObserver.hpp"

BeatModel::BeatModel()
    : bpm(90)
{

}

void BeatModel::on()
{
    setBPM(90);
}

void BeatModel::off()
{
    setBPM(0);
}

void BeatModel::setBPM(int bpm)
{
    this->bpm = bpm;
    notifyBPMObservers();
}

int BeatModel::getBPM()
{
    return (bpm);
}

void BeatModel::beatEvent()
{
    notifyBeatObservers();
}

void BeatModel::registerBeatObserver(IBeatObserver *beatObserver)
{
    beatObservers.insert(beatObserver);
}

void BeatModel::unregisterBeatObserver(IBeatObserver *beatObserver)
{
    beatObservers.erase(beatObserver);
}

void BeatModel::notifyBeatObservers()
{
    for (std::unordered_set<IBeatObserver *>::iterator it = beatObservers.begin(); it != beatObservers.end(); ++it)
        (*it)->updateBeat();
}

void BeatModel::registerBPMObserver(IBPMObserver *bpmObserver)
{
    bpmObservers.insert(bpmObserver);
}

void BeatModel::unregisterBPMObserver(IBPMObserver *bpmObserver)
{
    bpmObservers.erase(bpmObserver);
}

void BeatModel::notifyBPMObservers()
{
    for (std::unordered_set<IBPMObserver *>::iterator it = bpmObservers.begin(); it != bpmObservers.end(); ++it)
        (*it)->updateBPM();
}
