// Box.cpp
#include "Box.h"
#include <iostream>
using std::cout;
using std::endl;

// Constructor
Box::Box(double lv, double wv, double hv): length(lv), width(wv), height(hv)
{
    cout << "Box constructor" << endl;
}