#ifndef ICON_HPP
# define ICON_HPP

# include <string>

class Icon
{
private:
    int width;
    int height;
public:
    Icon();
    virtual ~Icon() = 0;
    virtual int getIconWidth();
    virtual int getIconHeight();
    virtual void paintIcon();
};

#endif
