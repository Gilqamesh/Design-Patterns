#include "ImageLoadingSimulator.hpp"
#include "ImageProxy.hpp"
#include <unistd.h>
#include <iostream>

void ImageLoadingSimulator::main()
{
    ImageProxy *imageProxy = new ImageProxy("https://imgur.com/t/coffee/vfGlUBi", "Coffee");
    imageProxy->paintIcon();
    for (int i = 0; i < 20; ++i)
    {
        usleep(100000);
        imageProxy->paintIcon();
    }
    delete imageProxy;
}
