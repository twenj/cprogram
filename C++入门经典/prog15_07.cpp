// Program 15.7 Using multiple inheritance          File: prog15_07.cpp
#include <iostream>
#include "Cerealpack.h"             // For the CerealPack class
using std::endl;
using std::cout;

int main()
{
    CerealPack packofFlakes(8.0, 3.0, 10.0, "Cornflakes");
    cout << endl;
    cout << "packOfFlakes volume is" << packofFlakes.Carton::volume() << endl;
    cout << "packOfFlakes weight is" << packofFlakes.Carton::getWeight() + packofFlakes.Contents::getWeight() << endl;
}