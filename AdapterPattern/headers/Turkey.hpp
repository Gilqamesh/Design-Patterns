#ifndef TURKEY_HPP
# define TURKEY_HPP

namespace AdapterNamespace
{

class Turkey
{
public:
    virtual ~Turkey();
    virtual void gobble() = 0;
    virtual void fly() = 0;
};

}

#endif
