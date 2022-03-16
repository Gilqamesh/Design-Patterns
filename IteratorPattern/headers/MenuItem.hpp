#ifndef MENUITEM_HPP
# define MENUITEM_HPP

# include <string>

namespace MenuNamespace
{

class MenuItem
{
private:
    std::string name;
    std::string description;
    bool vegetarian;
    double price;
public:
    MenuItem(const std::string &n, const std::string &d, bool v, double p);
    std::string getName();
    std::string getDescription();
    double getPrice();
    bool isVegetarian();
};

}

#endif
