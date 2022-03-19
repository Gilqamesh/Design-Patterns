#ifndef IMAGEPROXY_HPP
# define IMAGEPROXY_HPP

# include "Icon.hpp"
# include <string>
# include <thread>

class ImageIcon;
class ImageProxyState;

class ImageProxy : public Icon
{
ImageIcon *imageIcon;
ImageProxyState *imageProxyState;
std::string URL;
std::string iconName;
friend class UnretrievedImageProxyState;
friend class ProcessingImageProxyState;
friend class RetrievedImageProxyState;
public:
    ImageProxy(const std::string &URL, const std::string &iconName);
    ~ImageProxy();
    int getIconWidth();
    int getIconHeight();
    void paintIcon();
};

#endif
