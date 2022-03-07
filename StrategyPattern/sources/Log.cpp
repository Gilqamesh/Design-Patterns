#include "Log.hpp"
#include <iostream>

namespace DuckNamespace
{

void Log::println(const std::string &message)
{
    std::cout << message << std::endl;
}

}
