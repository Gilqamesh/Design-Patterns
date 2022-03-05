#ifndef MODELDUCK_HPP
# define MODELDUCK_HPP

# include "Duck.hpp"

namespace DuckNamespace
{

class ModelDuck : public Duck
{
public:
    ModelDuck();
    void display() const;
};

}

#endif
