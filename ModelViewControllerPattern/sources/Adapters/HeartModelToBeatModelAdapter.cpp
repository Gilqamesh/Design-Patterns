#include "Adapters/HeartModelToBeatModelAdapter.hpp"
#include "Interfaces/IHeartModel.hpp"

HeartModelToBeatModelAdapter::HeartModelToBeatModelAdapter(IHeartModel *heartModel)
    : heartModel(heartModel)
{

}

void HeartModelToBeatModelAdapter::on()
{

}

void HeartModelToBeatModelAdapter::off()
{

}

void HeartModelToBeatModelAdapter::setBPM(int bmp)
{
    (void)bmp;
}

int HeartModelToBeatModelAdapter::getBPM()
{
    return (heartModel->getHeartRate());
}

void HeartModelToBeatModelAdapter::registerBeatObserver(IBeatObserver *beatObserver)
{
    heartModel->registerBeatObserver(beatObserver);
}

void HeartModelToBeatModelAdapter::unregisterBeatObserver(IBeatObserver *beatObserver)
{
    heartModel->unregisterBeatObserver(beatObserver);
}

void HeartModelToBeatModelAdapter::notifyBeatObservers()
{
    heartModel->notifyBeatObservers();
}

void HeartModelToBeatModelAdapter::registerBPMObserver(IBPMObserver *bpmObserver)
{
    heartModel->registerBPMObserver(bpmObserver);
}

void HeartModelToBeatModelAdapter::unregisterBPMObserver(IBPMObserver *bpmObserver)
{
    heartModel->unregisterBPMObserver(bpmObserver);
}

void HeartModelToBeatModelAdapter::notifyBPMObservers()
{
    heartModel->notifyBPMObservers();
}

