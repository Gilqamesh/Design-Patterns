#ifndef SOY_HPP
# define SOY_HPP

# include "CondimentDecorator.hpp"

namespace BeverageNamespace
{

class Soy : public CondimentDecorator
{
private:
    Beverage *beverage;
public:
    Soy(Beverage *beverage);
    std::string getDescription() const;
    double cost() const;
};

}

#endif
