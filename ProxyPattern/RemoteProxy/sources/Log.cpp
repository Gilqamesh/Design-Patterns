#include "Log.hpp"
#include <iostream>

void Log::print(const std::string &message)
{
    std::cout << message;
}

void Log::println(const std::string &message)
{
    std::cout << message << std::endl;
}
