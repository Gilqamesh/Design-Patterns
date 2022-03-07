#ifndef BEVERAGE_HPP
# define BEVERAGE_HPP

# include <string>

namespace BeverageNamespace
{

class Beverage
{
private:
    std::string description;
public:
    Beverage();
    Beverage(const std::string &description);
    virtual ~Beverage() { }
    virtual std::string getDescription() const;
    virtual double cost() const = 0;
};

}

#endif
