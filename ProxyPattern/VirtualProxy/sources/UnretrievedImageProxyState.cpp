#include "UnretrievedImageProxyState.hpp"
#include "ProcessingImageProxyState.hpp"
#include "ImageProxy.hpp"
#include <iostream>

UnretrievedImageProxyState::UnretrievedImageProxyState(ImageProxy *imageProxy)
    : ImageProxyState(imageProxy)
{

}

void UnretrievedImageProxyState::paintIcon()
{
    std::cout << "Starting the retrieval process on image" << std::endl;
    imageProxy->imageProxyState = new ProcessingImageProxyState(imageProxy);
}
