#ifndef CEILINGFAN_HPP
# define CEILINGFAN_HPP

namespace RemoteNamespace
{

class CeilingFan
{
private:
    enum CeilingFanSpeed
    {
        OFF,
        LOW,
        MEDIUM,
        HIGH
    };
    int speed;
public:
    CeilingFan();
    void high();
    void medium();
    void low();
    void off();
    void setSpeed(int speed);
    int getSpeed();
};

}

#endif
