#include "Box.h"

Box::Box(double aLength, double aWidth, double aHeight)
{
    double maxSide {}, minSide {};
    (aLength > aWidth) ? (maxSide = aLength, minSide = aWidth) : (maxSide = aWidth, minSide = aHeight);
    length = maxSide > 0.0 ? maxSide : 1.0;
    width = minSide > 0.0 ? minSide : 1.0;
    height = aHeight > 0.0 ? aHeight : 1.0;
}

double Box::getHeight() const
{
    return height;
}

double Box::getLength() const
{
    return length;
}

double Box::getWidth() const
{
    return width;
}

double Box::volume() const
{
    return length * width * height;
}

Box Box::operator+(const Box & aBox) const
{
    /*Box bBox {};
    bBox.length = (length > aBox.length) ? length : aBox.length;
    bBox.width = (width > aBox.width) ? width : aBox.width;
    bBox.height = height + aBox.height;

    return bBox;*/
    return  Box(*this) += aBox;
}

bool Box::operator<(const Box &aBox) const
{
    return volume() < aBox.volume();
}

bool Box::operator<(const double aValue) const
{
    return volume() < aValue;
}