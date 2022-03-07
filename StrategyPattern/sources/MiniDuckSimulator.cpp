#include "MiniDuckSimulator.hpp"
#include "MallardDuck.hpp"
#include "ModelDuck.hpp"
#include "FlyRocketPowered.hpp"

namespace DuckNamespace
{

void MiniDuckSimulator::main()
{
    Duck *mallard = new MallardDuck();
    mallard->performQuack();
    mallard->performFly();

    Duck *model = new ModelDuck();
    model->performFly();
    model->setFlyBehavior(new FlyRocketPowered());
    model->performFly();
}

}
