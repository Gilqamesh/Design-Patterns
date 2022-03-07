#ifndef NYPIZZASTORE_HPP
# define NYPIZZASTORE_HPP

# include "PizzaStore.hpp"

namespace PizzaNamespace
{

class NYPizzaStore : public PizzaStore
{
private:
    Pizza *createPizza(const std::string &pizzaType);
};

}

#endif
