#ifndef MALLARDDUCK_HPP
# define MALLARDDUCK_HPP

# include "Duck.hpp"

namespace AdapterNamespace
{

class MallardDuck : public Duck
{
public:
    void quack();
    void fly();
};

}

#endif
