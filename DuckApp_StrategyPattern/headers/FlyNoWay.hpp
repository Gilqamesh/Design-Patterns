#ifndef FLYNOWAY_HPP
# define FLYNOWAY_HPP

# include "FlyBehavior.hpp"

namespace DuckNamespace
{

class FlyNoWay : public FlyBehavior
{
public:
    void fly() const;
};

}

#endif
