// usestok1.cpp -- using the Stock class
// complied with stock10.cpp
#include <iostream>
#include "stock10.h"

int main()
{
    {
        using std::cout;
        cout << "Using constructors to create new objects\n";
        Stock stock1("NanoSmart", 12, 20.0);        // syntax 1
        stock1.show();
        Stock stock2 = Stock("Boffo Objects", 2, 2.0);
    }
    return 0;
}