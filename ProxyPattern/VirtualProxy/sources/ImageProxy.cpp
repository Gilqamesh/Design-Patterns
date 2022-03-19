#include "ImageProxy.hpp"
#include "ImageIcon.hpp"
#include <iostream>
#include "UnretrievedImageProxyState.hpp"

ImageProxy::ImageProxy(const std::string &URL, const std::string &iconName)
    : imageIcon(nullptr), URL(URL), iconName(iconName)
{
    imageProxyState = new UnretrievedImageProxyState(this);
}

ImageProxy::~ImageProxy()
{
    delete imageIcon;
    delete imageProxyState;
}

int ImageProxy::getIconWidth()
{
    return (imageProxyState->getIconWidth());
}

int ImageProxy::getIconHeight()
{
    return (imageProxyState->getIconHeight());
}

void ImageProxy::paintIcon()
{
    imageProxyState->paintIcon();
}
