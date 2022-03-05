#ifndef SQUEAK_HPP
# define SQUEAK_HPP

# include "QuackBehavior.hpp"

namespace DuckNamespace
{

class Squeak : public QuackBehavior
{
    void quack() const;
};

}

#endif
