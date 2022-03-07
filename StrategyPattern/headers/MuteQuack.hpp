#ifndef MUTEQUACK_HPP
# define MUTEQUACK_HPP

# include "QuackBehavior.hpp"

namespace DuckNamespace
{

class MuteQuack : public QuackBehavior
{
    void quack() const;
};

}

#endif
