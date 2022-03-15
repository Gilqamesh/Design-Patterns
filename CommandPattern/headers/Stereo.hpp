#ifndef STEREO_HPP
# define STEREO_HPP

namespace RemoteNamespace
{

class Stereo 
{
public:
    void on();
    void off();
    void setCd();
    void setDvd();
    void setRadio();
    void setVolume(unsigned int volume);
};

}

#endif
