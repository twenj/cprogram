// Box.h - Definition of the Box class
#ifndef BOX_H
#define BOX_H
class Box
{
public:
    // Constructor
    Box(double aLength = 1.0, double aWidth = 1.0, double aHeight = 1.0);

    double volume() const;          // Calculate Box Volume

    double getLength() const;
    double getWidth() const;
    double getHeight() const;

    bool operator<(const Box & aBox) const       // Overloaded 'less-than' operator
    {
        return volume() < aBox.volume();            // Defined inline
    }
    bool operator<(double aValue) const;         // Compare Box volume < double value
private:
    double length;
    double width;
    double height;
};

// Function to compare volume of a Box object with a constant
inline bool Box::operator<(double aValue) const
{
    return volume() < aValue;
}

// Function comparing double value < Box object
inline bool operator<(const double aValue, const Box &aBox)
{
    return aValue < aBox.volume();
}
#endif