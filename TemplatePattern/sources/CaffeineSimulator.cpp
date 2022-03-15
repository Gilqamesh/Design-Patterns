#include "CaffeineSimulator.hpp"
#include "Tea.hpp"
#include "Caffeine.hpp"

namespace TemplateNamespace
{

void CaffeineSimulator::main()
{
    Tea *tea = new Tea();
    Caffeine *caffeine = new Caffeine();

    tea->prepareRecipe();
    caffeine->prepareRecipe();
}

}
