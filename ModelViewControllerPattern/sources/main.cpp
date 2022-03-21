#include "Simulators/BeatSimulator.hpp"
#include "Simulators/HeartSimulator.hpp"
#include "Utils/MemoryTracker.hpp"
#include "Log.hpp"

int main()
{
    // LOG("BeatSimulator test:");
    // PrintMemoryUsage();
    // {
    //     BeatSimulator *beatSimulator = new BeatSimulator();
    //     beatSimulator->main();
    //     delete beatSimulator;
    // }
    // PrintMemoryUsage();

    LOG("HeartSimulator test:");
    PrintMemoryUsage();
    {
        HeartSimulator *heartSimulator = new HeartSimulator();
        heartSimulator->main();
        delete heartSimulator;
    }
    PrintMemoryUsage();
}
