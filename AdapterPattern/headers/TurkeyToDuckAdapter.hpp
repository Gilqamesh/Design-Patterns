#ifndef TURKEYTODUCKADAPTER_HPP
# define TURKEYTODUCKADAPTER_HPP

# include "Duck.hpp"
# include "Turkey.hpp"

namespace AdapterNamespace
{

class TurkeyToDuckAdapter : public Duck
{
private:
    Turkey *turkey;
public:
    TurkeyToDuckAdapter(Turkey *turkey);
    void quack();
    void fly();
};

}

# endif
