#ifndef RETRIEVEDIMAGEPROXYSTATE_HPP
# define RETRIEVEDIMAGEPROXYSTATE_HPP

# include "ImageProxyState.hpp"

class RetrievedImageProxyState : public ImageProxyState
{
public:
    RetrievedImageProxyState(ImageProxy *imageProxy);
    int getIconWidth();
    int getIconHeight();
    void paintIcon();
};

#endif
