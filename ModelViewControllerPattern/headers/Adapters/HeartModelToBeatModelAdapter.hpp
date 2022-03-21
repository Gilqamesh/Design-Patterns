#ifndef HEARTMODELTOBEATMODELADAPTER_HPP
# define HEARTMODELTOBEATMODELADAPTER_HPP

# include "Interfaces/IBeatModel.hpp"

class IHeartModel;

class HeartModelToBeatModelAdapter : public IBeatModel
{
IHeartModel *heartModel;
public:
    HeartModelToBeatModelAdapter(IHeartModel *heartModel);
    void on();
    void off();
    void setBPM(int bmp);
    int getBPM();
    void registerBeatObserver(IBeatObserver *beatObserver);
    void unregisterBeatObserver(IBeatObserver *beatObserver);
    void notifyBeatObservers();
    void registerBPMObserver(IBPMObserver *bpmObserver);
    void unregisterBPMObserver(IBPMObserver *bpmObserver);
    void notifyBPMObservers();
};

#endif
