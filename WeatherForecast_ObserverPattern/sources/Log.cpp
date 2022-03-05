#include "Log.hpp"
#include <iostream>

namespace WeatherNamespace
{

void Log::println(const std::string &message)
{
    std::cout << message << std::endl;
}

}
