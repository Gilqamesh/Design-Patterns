#include "RetrievedImageProxyState.hpp"
#include "ImageProxy.hpp"
#include "ImageIcon.hpp"
#include <iostream>

RetrievedImageProxyState::RetrievedImageProxyState(ImageProxy *imageProxy)
    : ImageProxyState(imageProxy)
{

}

void RetrievedImageProxyState::paintIcon()
{
    std::cout << imageProxy << std::endl;
    std::cout << imageProxy->imageIcon << std::endl;
    imageProxy->imageIcon->paintIcon();
}

int RetrievedImageProxyState::getIconWidth()
{
    return (imageProxy->imageIcon->getIconWidth());
}
int RetrievedImageProxyState::getIconHeight()
{
    return (imageProxy->imageIcon->getIconHeight());
}
