#ifndef HOUSEBLEND_HPP
# define HOUSEBLEND_HPP

# include "Beverage.hpp"

namespace BeverageNamespace
{

class HouseBlend : public Beverage
{
public:
    HouseBlend();
    double cost() const;
};

}

#endif
