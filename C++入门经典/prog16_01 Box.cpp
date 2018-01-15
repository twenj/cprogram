// Box.cpp
#include "Box.h"
#include <iostream>
using std::cout;
using std::endl;

// constructor
Box::Box(double lvalue, double wvalue, double hvalue) :
        length(lvalue), width(wvalue), height(hvalue) {}

// Output the volume
void Box::showVolume() const
{
    cout << "Box usable volume is " << volume() << endl;
}

// Calculate the volue
double Box::volume() const
{
    return length * width * height;
}