#ifndef DJVIEW_HPP
# define DJVIEW_HPP

# include "Interfaces/IBeatObserver.hpp"
# include "Interfaces/IBPMObserver.hpp"

class IBeatModel;
class IBeatModelController;

class DJView : public IBeatObserver, public IBPMObserver
{
IBeatModelController *beatModelController;
IBeatModel *beatModel;
public:
    DJView(IBeatModelController *beatModelController, IBeatModel *beatModel);
    void updateBeat();
    void updateBPM();
    void increaseBPM();
};

#endif
