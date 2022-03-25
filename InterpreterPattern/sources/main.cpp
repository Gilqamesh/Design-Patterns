#include "Simulators/WithoutASTBuilder.hpp"
#include "Simulators/ASTBuilderSimulator.hpp"

int main()
{
    {
        WithoutASTBuilder *withoutASTBuilder = new WithoutASTBuilder();
        withoutASTBuilder->main();
        delete withoutASTBuilder;
    }

    {
        ASTBuilderSimulator *aSTBuilderSimulator = new ASTBuilderSimulator();
        aSTBuilderSimulator->main();
        delete aSTBuilderSimulator;
    }
}
