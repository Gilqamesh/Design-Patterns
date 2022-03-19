#ifndef UNRETRIEVEDIMAGEPROXYSTATE_HPP
# define UNRETRIEVEDIMAGEPROXYSTATE_HPP

# include "ImageProxyState.hpp"

class UnretrievedImageProxyState : public ImageProxyState
{
public:
    UnretrievedImageProxyState(ImageProxy *imageProxy);
    void paintIcon();
};

#endif
