// Carton.cpp
#include "Carton.h"
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

// Constructor which can also act as default constructor -
//          calls default base constructor automatically
Carton::Carton(const char *pStr)
{
    cout << "Carton constructor 1" << endl;
    pMaterial = new char[strlen(pStr) + 1];         // Allocate space for the string
    std::strcpy(pMaterial, pStr);                    // Copy it
}

// Constructor explicitly calling the base constructor
Carton::Carton(double lv, double wv, double hv, const char *pStr): Box(lv, wv, hv)
{
    pMaterial = new char[strlen(pStr) + 1];         // Allocate space for the string
    std::strcpy(pMaterial, pStr);                    // Copy it
    cout << "Carton constructor 2" << endl;
}

Carton::Carton(const Carton &aCarton): Box(aCarton)
{
    pMaterial = new char[strlen(aCarton.pMaterial) + 1];    // Allocate space for
                                                             // string
    strcpy(pMaterial, aCarton.pMaterial);                    // Copy it
    cout << "Carton copy constructor" << endl;
}

// Destructor
Carton::~Carton()
{
    cout << "Carton destructor.Material = " << pMaterial << endl;
    delete [] pMaterial;
}

double Carton::volume() const
{
    return length * width * height;
}