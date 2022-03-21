#ifndef IBEATMODELCONTROLLER_HPP
# define IBEATMODELCONTROLLER_HPP

class IBeatModelController
{
public:
    virtual ~IBeatModelController();
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual void increaseBPM() = 0;
    virtual void decreaseBPM() = 0;
    virtual void setBPM(int bpm) = 0;
};

#endif
