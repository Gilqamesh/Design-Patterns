#ifndef TEA_HPP
# define TEA_HPP

# include "CaffeineBeverage.hpp"

namespace TemplateNamespace
{

class Tea : public CaffeineBeverage
{
private:
    void brew();
    void addCondiments();
};

}

#endif
