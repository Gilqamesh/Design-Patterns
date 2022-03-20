#include "Simulators/DuckSimulator.hpp"
#include "Log.hpp"
#include "Ducks/DuckCall.hpp"
#include "Ducks/MallardDuck.hpp"
#include "Ducks/RedheadDuck.hpp"
#include "Ducks/RubberDuck.hpp"
#include "Geese/Goose.hpp"
#include "Adapters/HonkerToQuackable.hpp"
#include "Decorators/QuackCounter.hpp"
#include <memory>

using namespace std;

void simulate(IQuackable *duck)
{
    duck->quack();
}

void DuckSimulator::main()
{
    /* Painful to use Decorators -> use Factory Pattern */
    IQuackable *mallardDuck = new QuackCounter(std::unique_ptr<MallardDuck>(new MallardDuck()));
    IQuackable *redheadDuck = new QuackCounter(std::unique_ptr<RedheadDuck>(new RedheadDuck()));
    IQuackable *duckCall = new QuackCounter(std::unique_ptr<DuckCall>(new DuckCall()));
    IQuackable *rubberDuck = new QuackCounter(std::unique_ptr<QuackCounter>
        (new QuackCounter(std::unique_ptr<RubberDuck>(new RubberDuck()))));

    IQuackable *gooseDuck = new HonkerToQuackable(std::make_unique<Goose>(Goose()));

    simulate(mallardDuck);
    simulate(redheadDuck);
    simulate(duckCall);
    simulate(rubberDuck);
    simulate(gooseDuck);
    LOG("Number of quacks: " << QuackCounter::getQuacks() << " times.");

    delete mallardDuck;
    delete redheadDuck;
    delete duckCall;
    delete rubberDuck;
    delete gooseDuck;
}
