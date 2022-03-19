#include "ImageIcon.hpp"
#include <unistd.h>
#include <iostream>

ImageIcon::ImageIcon(const std::string &URL, const std::string &iconName)
    : URL(URL), iconName(iconName), width(1960), height(1280)
{
    sleep(1);
    std::cout << "Image finished downloading from " + URL << std::endl;
}

void ImageIcon::paintIcon()
{
    std::cout << "Painting " + iconName << std::endl;
}

int ImageIcon::getIconWidth()
{
    return (width);
}

int ImageIcon::getIconHeight()
{
    return (height);
}

