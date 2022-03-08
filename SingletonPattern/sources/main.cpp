#include "Singleton.hpp"

int main()
{
    Singleton *singletonInstance = Singleton::getInstance();
    singletonInstance->print();
}
