#ifndef WHIP_HPP
# define WHIP_HPP

# include "CondimentDecorator.hpp"

namespace BeverageNamespace
{

class Whip : public CondimentDecorator
{
private:
    Beverage *beverage;
public:
    Whip(Beverage *beverage);
    std::string getDescription() const;
    double cost() const;
};

}

#endif
