#ifndef PACKAGE_H
#define PACKAGE_H

#include "Box.h"

// Class defining a TruckLoad - implements the list
class TruckLoad
{
public:
    TruckLoad(const TruckLoad & load);
    TruckLoad(Box * pBox = 0, int count = 1);       // Constructor
    ~TruckLoad();                                   // TruckLoad destructor
    Box * getFirstBox();                            // Retrieve the first Box
    Box * getNextBox();                             // Retrieve the next Box
    void addBox(Box * pBox);                       // Add a new Box to the list
    TruckLoad& operator=(const TruckLoad& load);
private:
    // Class defining a list element
    class Package
    {
    public:
        Box * pBox;                                 // Pointer to the Box
        Package * pNext;                            // Pointer to the next Package

        Package(Box * pNewBox);                     // Constructor
        ~Package();                                 // Package destructor
        void setNext(Package * pPackage);          // Add package to end of list
    };
    Package * pHead;                                // First in the list
    Package * pTail;                                // Last in the list
    Package * pCurrent;                             // Last retrieved from the list
};
#endif // PACKAGE_H
