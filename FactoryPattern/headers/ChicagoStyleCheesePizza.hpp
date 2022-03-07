#ifndef CHICAGOSTYLECHEESEPIZZA_HPP
# define CHICAGOSTYLECHEESEPIZZA_HPP

# include "Pizza.hpp"

namespace PizzaNamespace
{

class ChicagoStyleCheesePizza : public Pizza
{
public:
    ChicagoStyleCheesePizza();
    void cut() const;
};

}

#endif
