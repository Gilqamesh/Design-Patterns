#ifndef CHICAGOSTYLEVEGGIEPIZZA_HPP
# define CHICAGOSTYLEVEGGIEPIZZA_HPP

# include "Pizza.hpp"

namespace PizzaNamespace
{

class ChicagoStyleVeggiePizza : public Pizza
{
public:
    ChicagoStyleVeggiePizza();
    void cut() const;
};

}

#endif
