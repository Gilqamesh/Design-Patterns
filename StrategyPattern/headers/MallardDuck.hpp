#ifndef MALLARDDUCK_HPP
# define MALLARDDUCK_HPP

# include "Duck.hpp"

namespace DuckNamespace
{

class MallardDuck : public Duck
{
public:
    MallardDuck();
    void display() const;
};

}

#endif
