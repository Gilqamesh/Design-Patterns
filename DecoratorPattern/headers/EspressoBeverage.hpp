#ifndef ESPRESSOBEVERAGE_HPP
# define ESPRESSOBEVERAGE_HPP

# include "Beverage.hpp"

namespace BeverageNamespace
{

class EspressoBeverage : public Beverage
{
public:
    EspressoBeverage();
    double cost() const;
};

}

#endif
