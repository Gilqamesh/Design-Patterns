#ifndef DUCK_HPP
# define DUCK_HPP

namespace AdapterNamespace
{

class Duck
{
public:
    virtual ~Duck();
    virtual void quack() = 0;
    virtual void fly() = 0;
};

}

#endif
