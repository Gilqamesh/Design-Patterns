#ifndef PIZZASTORE_HPP
# define PIZZASTORE_HPP

# include <string>
# include "Pizza.hpp"

namespace PizzaNamespace
{

class PizzaStore
{
protected:
    virtual Pizza *createPizza(const std::string &pizzaType) = 0;
public:
    virtual ~PizzaStore();
    Pizza *orderPizza(const std::string &pizzaType);
};

}

#endif
