#include "Simulators/HeartSimulator.hpp"
#include "Views/DJView.hpp"
#include "Models/HeartModel.hpp"
#include "Controllers/HeartModelController.hpp"
#include <thread>
#include <unistd.h>
#include "Log.hpp"

static void simulateHeart(IHeartModel *heartModel, bool &done)
{
    while (done == false)
    {
        LOG(heartModel->getHeartRate());
        sleep(1);
    }
}

void HeartSimulator::main()
{
    HeartModel *heartModel = new HeartModel();
    HeartModelController *heartModelController = new HeartModelController(heartModel);

    bool done = false;
    std::thread t(simulateHeart, heartModel, std::ref(done));
    sleep(5);
    done = true;
    t.join();

    delete heartModel;
    delete heartModelController;
}
