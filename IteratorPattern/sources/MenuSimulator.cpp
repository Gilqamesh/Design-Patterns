#include "MenuSimulator.hpp"
#include "Waitress.hpp"
#include "DinerMenu.hpp"
#include "PancakeHouseMenu.hpp"

namespace MenuNamespace
{

void MenuSimulator::main()
{
    DinerMenu *dinerMenu = new DinerMenu();
    PancakeHouseMenu *pancakeHouseMenu = new PancakeHouseMenu();
    std::vector<Menu *> menus;
    menus.push_back(dinerMenu);
    menus.push_back(pancakeHouseMenu);
    Waitress *waitress = new Waitress(menus);

    waitress->printMenu();
}

}
