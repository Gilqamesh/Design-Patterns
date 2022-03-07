#ifndef CONDIMENTDECORATOR_HPP
# define CONDIMENTDECORATOR_HPP

# include "Beverage.hpp"

namespace BeverageNamespace
{

class CondimentDecorator : public Beverage
{
protected:
    Beverage *beverage;
public:
    CondimentDecorator(Beverage *beverage);
    virtual ~CondimentDecorator() { }
    virtual std::string getDescription() const = 0;
    virtual double cost() const = 0;
};

}

#endif
