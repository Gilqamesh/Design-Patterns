#ifndef CAFFEINEBEVERAGE_HPP
# define CAFFEINEBEVERAGE_HPP

namespace TemplateNamespace
{

class CaffeineBeverage
{
public:
    void prepareRecipe();
protected:
    virtual ~CaffeineBeverage();
    virtual void addCondiments() = 0;
    virtual void brew() = 0;
    virtual void boilWater() final;
    virtual void pourInCup() final;
    /* hooks provide a way for subclasses to implement an optional part of the algorithm */
    void hook();
};

}

#endif
