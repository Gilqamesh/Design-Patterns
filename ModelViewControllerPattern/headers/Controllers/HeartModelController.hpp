#ifndef HEARTMODELCONTROLLER_HPP
# define HEARTMODELCONTROLLER_HPP

# include "Interfaces/IBeatModelController.hpp"
# include "Adapters/HeartModelToBeatModelAdapter.hpp"

class IHeartModel;
class DJView;

class HeartModelController : public IBeatModelController
{
IHeartModel *heartModel;
HeartModelToBeatModelAdapter *beatModel;
DJView *djView;
public:
    HeartModelController(IHeartModel *heartModel);
    ~HeartModelController();
    void start();
    void stop();
    void increaseBPM();
    void decreaseBPM();
    void setBPM(int bpm);
};

#endif
