#ifndef WHIPDECORATOR_HPP
# define WHIPDECORATOR_HPP

# include "CondimentDecorator.hpp"

namespace BeverageNamespace
{

class WhipDecorator : public CondimentDecorator
{
public:
    WhipDecorator(Beverage *beverage);
    std::string getDescription() const;
    double cost() const;
};

}

#endif
