#ifndef MOCHA_HPP
# define MOCHA_HPP

# include "CondimentDecorator.hpp"

namespace BeverageNamespace
{

class Mocha : public CondimentDecorator
{
private:
    Beverage *beverage;
public:
    Mocha(Beverage *beverage);
    std::string getDescription() const;
    double cost() const;
};

}

#endif
