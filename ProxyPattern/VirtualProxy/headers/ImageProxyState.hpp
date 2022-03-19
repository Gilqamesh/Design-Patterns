#ifndef IMAGEPROXYSTATE_HPP
# define IMAGEPROXYSTATE_HPP

class ImageProxy;

class ImageProxyState
{
protected:
    ImageProxy *imageProxy;
public:
    ImageProxyState(ImageProxy *imageProxy);
    virtual ~ImageProxyState();
    virtual int getIconWidth();
    virtual int getIconHeight();
    virtual void paintIcon() = 0;
};

#endif
