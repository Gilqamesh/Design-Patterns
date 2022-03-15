#ifndef WILDTURKEY_HPP
# define WILDTURKEY_HPP

# include "Turkey.hpp"

namespace AdapterNamespace
{

class WildTurkey : public Turkey
{
public:
    void gobble();
    void fly();
};

}

#endif
