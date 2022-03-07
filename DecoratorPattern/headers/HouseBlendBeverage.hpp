#ifndef HOUSEBLENDBEVERAGE_HPP
# define HOUSEBLENDBEVERAGE_HPP

# include "Beverage.hpp"

namespace BeverageNamespace
{

class HouseBlendBeverage : public Beverage
{
public:
    HouseBlendBeverage();
    double cost() const;
};

}

#endif
