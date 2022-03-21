#include "Controllers/BeatModelController.hpp"
#include "Views/DJView.hpp"
#include "Interfaces/IBeatModel.hpp"

BeatModelController::BeatModelController(IBeatModel *beatModel)
    : beatModel(beatModel)
{
    djView = new DJView(this, beatModel);
}

BeatModelController::~BeatModelController()
{
    delete djView;
}

void BeatModelController::start()
{
    beatModel->on();
}

void BeatModelController::stop()
{
    beatModel->off();
}

void BeatModelController::increaseBPM()
{
    beatModel->setBPM(beatModel->getBPM() + 1);
}

void BeatModelController::decreaseBPM()
{
    beatModel->setBPM(beatModel->getBPM() - 1);
}

void BeatModelController::setBPM(int bpm)
{
    beatModel->setBPM(bpm);
}

