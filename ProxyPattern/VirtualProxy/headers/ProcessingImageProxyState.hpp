#ifndef PROCESSINGIMAGEPROXYSTATE_HPP
# define PROCESSINGIMAGEPROXYSTATE_HPP

# include "ImageProxyState.hpp"
# include <thread>

class ProcessingImageProxyState : public ImageProxyState
{
private:
    std::thread *processingThread;
public:
    ProcessingImageProxyState(ImageProxy *imageProxy);
    ~ProcessingImageProxyState();
    void paintIcon();
};

#endif
