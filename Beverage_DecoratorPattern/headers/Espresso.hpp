#ifndef ESPRESSO_HPP
# define ESPRESSO_HPP

# include "Beverage.hpp"

namespace BeverageNamespace
{

class Espresso : public Beverage
{
public:
    Espresso();
    double cost() const;
};

}

#endif
