#include "Simulators/BeatSimulator.hpp"
#include "Views/DJView.hpp"
#include "Models/BeatModel.hpp"
#include "Controllers/BeatModelController.hpp"
#include <thread>
#include <unistd.h>
#include <string>
#include <Log.hpp>

static void doWork(BeatModel *beatModel)
{
    while (1)
    {
        int bpm = beatModel->getBPM();
        if (bpm == 0)
        {
            usleep(100000);
            continue ;
        }
        beatModel->beatEvent();
        usleep(1000000.0 / bpm);
    }
}

void BeatSimulator::main()
{
    BeatModel *beatModel = new BeatModel();
    BeatModelController *beatModelController = new BeatModelController(beatModel);

    std::thread t(doWork, beatModel);

    std::string input;
    while (getline(std::cin, input))
    {
        if (input == "start")
            beatModelController->start();
        else if (input == "stop")
            beatModelController->stop();
        else if (input == "increase")
            beatModelController->increaseBPM();
        else if (input == "decrease")
            beatModelController->decreaseBPM();
        else if (input == "set")
        {
            getline(std::cin, input);
            beatModelController->setBPM(std::stoi(input));
        }
        else
            LOG("Wrong input");
    }

    t.join();

    delete beatModelController;
    delete beatModel;
}
