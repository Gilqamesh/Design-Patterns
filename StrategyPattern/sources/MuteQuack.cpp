#include "MuteQuack.hpp"
#include "Log.hpp"

namespace DuckNamespace
{

void MuteQuack::quack() const
{
    Log::println("<< Silence >>");
}

}
