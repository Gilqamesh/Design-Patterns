#include "Controllers/HeartModelController.hpp"
#include "Views/DJView.hpp"

HeartModelController::HeartModelController(IHeartModel *heartModel)
    : heartModel(heartModel)
{
    beatModel = new HeartModelToBeatModelAdapter(heartModel);
    djView = new DJView(this, beatModel);
}

HeartModelController::~HeartModelController()
{
    delete beatModel;
    delete djView;
}

void HeartModelController::start()
{
    (void)heartModel;
}

void HeartModelController::stop()
{

}

void HeartModelController::increaseBPM()
{

}

void HeartModelController::decreaseBPM()
{

}

void HeartModelController::setBPM(int bpm)
{
    (void)bpm;
}

