#include "ImageProxyState.hpp"
#include "ImageProxy.hpp"

ImageProxyState::ImageProxyState(ImageProxy *imageProxy)
    : imageProxy(imageProxy)
{
    
}

ImageProxyState::~ImageProxyState()
{

}

int ImageProxyState::getIconWidth()
{
    return (640);
}

int ImageProxyState::getIconHeight()
{
    return (480);
}

