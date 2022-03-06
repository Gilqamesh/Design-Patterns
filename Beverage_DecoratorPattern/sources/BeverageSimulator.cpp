#include "BeverageSimulator.hpp"
#include "Mocha.hpp"
#include "HouseBlend.hpp"
#include "Espresso.hpp"
#include "Whip.hpp"
#include "Soy.hpp"
#include "Log.hpp"

namespace BeverageNamespace
{

void BeverageSimulator::main()
{
    Beverage *espresso = new Espresso();
    Log::println("Cost of " + espresso->getDescription() + ": " + std::to_string(espresso->cost()) + "$");

    Beverage *houseBlend = new HouseBlend();
    Log::println("Cost of " + houseBlend->getDescription() + ": " + std::to_string(houseBlend->cost()) + "$");

    espresso = new Whip(espresso);
    Log::println("Cost of " + espresso->getDescription() + ": " + std::to_string(espresso->cost()) + "$");

    espresso = new Mocha(espresso);
    espresso = new Mocha(espresso);
    Log::println("Cost of " + espresso->getDescription() + ": " + std::to_string(espresso->cost()) + "$");

    espresso = new Soy(espresso);
    Log::println("Cost of " + espresso->getDescription() + ": " + std::to_string(espresso->cost()) + "$");
}

}
