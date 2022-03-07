#ifndef PIZZA_HPP
# define PIZZA_HPP

# include <string>
# include <vector>

namespace PizzaNamespace
{

class Pizza
{
protected:
    std::string                 name;
    std::string                 dough;
    std::string                 sauce;
    std::vector<std::string>    toppings;
public:
    // to enforce the class to be abstract and also allow for polymorphism
    // however this function still needs to be defined
    virtual ~Pizza() = 0;
    virtual void prepare() const;
    virtual void bake() const;
    virtual void cut() const;
    virtual void box() const;
    virtual std::string getName() const;
};

}

#endif
