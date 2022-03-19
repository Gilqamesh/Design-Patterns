#ifndef IMAGEICON_HPP
# define IMAGEICON_HPP

# include "Icon.hpp"

class ImageIcon : public Icon
{
private:
    std::string URL;
    std::string iconName;
    int width;
    int height;
public: 
    ImageIcon(const std::string &URL, const std::string &iconName);
    int getIconWidth();
    int getIconHeight();
    void paintIcon();

};

#endif
