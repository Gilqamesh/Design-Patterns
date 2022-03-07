#ifndef MOCHADECORATOR_HPP
# define MOCHADECORATOR_HPP

# include "CondimentDecorator.hpp"

namespace BeverageNamespace
{

class MochaDecorator : public CondimentDecorator
{
public:
    MochaDecorator(Beverage *beverage);
    std::string getDescription() const;
    double cost() const;
};

}

#endif
