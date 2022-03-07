#ifndef QUACK_HPP
# define QUACK_HPP

# include "QuackBehavior.hpp"

namespace DuckNamespace
{

class Quack : public QuackBehavior
{
    void quack() const;
};

}

#endif
