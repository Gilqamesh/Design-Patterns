#include "ImageLoadingSimulator.hpp"
#include "ImageIcon.hpp"

int main()
{
    ImageLoadingSimulator *imageLoadingSimulator = new ImageLoadingSimulator();
    imageLoadingSimulator->main();
    delete imageLoadingSimulator;
}
