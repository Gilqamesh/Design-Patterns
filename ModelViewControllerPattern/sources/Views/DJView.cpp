#include "Views/DJView.hpp"
#include "Interfaces/IBeatModel.hpp"
#include "Interfaces/IBeatModelController.hpp"
#include "Log.hpp"

DJView::DJView(IBeatModelController *beatModelController, IBeatModel *beatModel)
    : beatModelController(beatModelController), beatModel(beatModel)
{
    beatModel->registerBeatObserver(this);
    beatModel->registerBPMObserver(this);
}

void DJView::updateBeat()
{
    std::cerr << ".";
}

void DJView::updateBPM()
{
    int bpm = beatModel->getBPM();
    if (bpm == 0)
        LOG("offline");
    else
        LOG("Current BPM: " << bpm);
}

void DJView::increaseBPM()
{
    beatModelController->increaseBPM();
}
