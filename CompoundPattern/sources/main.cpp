#include "Simulators/DuckSimulator.hpp"
#include "Simulators/DuckFactorySimulator.hpp"
#include "Simulators/FlockSimulator.hpp"
#include "Simulators/DuckObserverSimulator.hpp"
#include "Utils/MemoryTracker.hpp"
#include "Log.hpp"

int main()
{
    LOG("DuckSimulator test:");
    PrintMemoryUsage();
    {
        DuckSimulator *duckSimulator = new DuckSimulator();
        duckSimulator->main();
        delete duckSimulator;
    }
    PrintMemoryUsage();
    LOG("DuckFactorySimulator test:");
    {
        DuckFactorySimulator *duckFactorySimulator = new DuckFactorySimulator();
        duckFactorySimulator->main();
        delete duckFactorySimulator;
    }
    PrintMemoryUsage();
    LOG("FlockSimulator test:");
    {
        FlockSimulator *flockSimulator = new FlockSimulator();
        flockSimulator->main();
        delete flockSimulator;
    }
    PrintMemoryUsage();
    LOG("DuckObserverSimulator test:");
    {
        DuckObserverSimulator *duckObserverSimulator = new DuckObserverSimulator();
        duckObserverSimulator->main();
        delete duckObserverSimulator;
    }
    PrintMemoryUsage();
}
