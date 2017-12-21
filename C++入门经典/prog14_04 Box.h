#ifndef BOX_H
#define BOX_H

class Box
{
public:
    // Constructor
    Box(double aLength = 1.0, double aWidth = 1.0, double aHeight = 1.0);

    double volume() const;                        // Calculate Box volume

    double getLength() const;
    double getWidth() const;
    double getHeight() const;

    bool operator<(const Box& aBox) const;       // Compare Box < Box
    bool operator<(const double aValue) const;  // Compare Box < double value
    Box operator+(const Box & aBox) const;       // Function to add two Box objects
    Box & operator+=(const Box & right);
private:
    double length;
    double width;
    double height;
};

inline Box & Box::operator+=(const Box &right)
{
    length = length > right.length ? length : right.length;
    width = width > right.width ? width : right.length;
    height += right.height;
    return *this;
}

#endif //BOX_H
