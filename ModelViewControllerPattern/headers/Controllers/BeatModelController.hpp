#ifndef BEATMODELCONTROLLER_HPP
# define BEATMODELCONTROLLER_HPP

# include "Interfaces/IBeatModelController.hpp"

class IBeatModel;
class DJView;

class BeatModelController : public IBeatModelController
{
IBeatModel *beatModel;
DJView *djView;
public:
    BeatModelController(IBeatModel *beatModel);
    ~BeatModelController();
    void start();
    void stop();
    void increaseBPM();
    void decreaseBPM();
    void setBPM(int bpm);
};

#endif
