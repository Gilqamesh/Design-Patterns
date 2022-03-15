#include "DuckSimulator.hpp"
#include "MallardDuck.hpp"
#include "WildTurkey.hpp"
#include "TurkeyToDuckAdapter.hpp"
#include "WildTurkeyToDuckClassAdapter.hpp"

namespace AdapterNamespace
{

static void duckTest(Duck *duck)
{
    duck->quack();
    duck->fly();
}

void DuckSimulator::main()
{
    MallardDuck *mallardDuck = new MallardDuck();
    WildTurkey *wildTurkey = new WildTurkey();
    
    wildTurkey->gobble();
    wildTurkey->fly();
    Duck *turkeyToDuckAdapter = new TurkeyToDuckAdapter(wildTurkey);
    duckTest(mallardDuck);
    duckTest(turkeyToDuckAdapter);

    Duck *wildTurkeyToDuckClassAdapter = new WildTurkeyToDuckClassAdapter();
    duckTest(wildTurkeyToDuckClassAdapter);
}

}
