#include "BeverageSimulator.hpp"
#include "MochaDecorator.hpp"
#include "HouseBlendBeverage.hpp"
#include "EspressoBeverage.hpp"
#include "WhipDecorator.hpp"
#include "SoyDecorator.hpp"
#include "Log.hpp"

namespace BeverageNamespace
{

void BeverageSimulator::main()
{
    Beverage *espresso = new EspressoBeverage();
    Log::println("Cost of " + espresso->getDescription() + ": " + std::to_string(espresso->cost()) + "$");

    Beverage *houseBlend = new HouseBlendBeverage();
    Log::println("Cost of " + houseBlend->getDescription() + ": " + std::to_string(houseBlend->cost()) + "$");

    espresso = new WhipDecorator(espresso);
    Log::println("Cost of " + espresso->getDescription() + ": " + std::to_string(espresso->cost()) + "$");

    espresso = new MochaDecorator(espresso);
    espresso = new MochaDecorator(espresso);
    Log::println("Cost of " + espresso->getDescription() + ": " + std::to_string(espresso->cost()) + "$");

    espresso = new SoyDecorator(espresso);
    Log::println("Cost of " + espresso->getDescription() + ": " + std::to_string(espresso->cost()) + "$");
}

}
