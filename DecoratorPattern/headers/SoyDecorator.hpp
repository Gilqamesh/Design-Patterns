#ifndef SOYDECORATOR_HPP
# define SOYDECORATOR_HPP

# include "CondimentDecorator.hpp"

namespace BeverageNamespace
{

class SoyDecorator : public CondimentDecorator
{
public:
    SoyDecorator(Beverage *beverage);
    std::string getDescription() const;
    double cost() const;
};

}

#endif
