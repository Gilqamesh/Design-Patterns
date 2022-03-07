#ifndef CHICAGOPIZZASTORE_HPP
# define CHICAGOPIZZASTORE_HPP

# include "PizzaStore.hpp"

namespace PizzaNamespace
{

class ChicagoPizzaStore : public PizzaStore
{
private:
    Pizza *createPizza(const std::string &pizzaType);
};

}

#endif
