#include "ProcessingImageProxyState.hpp"
#include "RetrievedImageProxyState.hpp"
#include "ImageProxy.hpp"
#include "ImageIcon.hpp"
#include <iostream>

ProcessingImageProxyState::ProcessingImageProxyState(ImageProxy *imageProxy)
    : ImageProxyState(imageProxy)
{
    processingThread = new std::thread(([&](){
            std::cout << "1" << std::endl;
            imageProxy->imageIcon = new ImageIcon(imageProxy->URL, imageProxy->iconName);
            std::cout << "1" << std::endl;
            imageProxy->imageProxyState = new RetrievedImageProxyState(imageProxy);
            std::cout << "1" << std::endl;
        }));
}

ProcessingImageProxyState::~ProcessingImageProxyState()
{
    processingThread->join();
    delete processingThread;
}

void ProcessingImageProxyState::paintIcon()
{
    std::cout << "Loading icon from " + imageProxy->URL << + "..." << std::endl;
}
