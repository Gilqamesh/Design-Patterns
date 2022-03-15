#ifndef WILDTURKEYTODUCKCLASSADAPTER_HPP
# define WILDTURKEYTODUCKCLASSADAPTER_HPP

# include "Duck.hpp"
# include "WildTurkey.hpp"

namespace AdapterNamespace
{

class WildTurkeyToDuckClassAdapter : public Duck, private WildTurkey
{
public:
    void quack();
    void fly();
};

}

#endif
