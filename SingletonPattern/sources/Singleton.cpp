#include "Singleton.hpp"
#include <iostream>

Singleton *Singleton::singletonInstance = nullptr;

std::mutex Singleton::singletonInstanceMutex;

Singleton::Singleton()
{

}

Singleton *Singleton::getInstance()
{
    if (singletonInstance == nullptr)
    {
        singletonInstanceMutex.lock();
        singletonInstance = new Singleton();
        singletonInstanceMutex.unlock();
    }
    return (singletonInstance);
}

void Singleton::print()
{
    std::cout << "hi" << std::endl;
}
