#ifndef CARTON_H
#define CARTON_H
#include "Box.h"            // For Box class definition

class Carton : public Box
{
public:
    Carton(const char * pStr = "Cardboard");        // Constructor
    ~Carton();                                       // Destructor
    double volume() const;

private:
    char * pMaterial;
};
#endif //CARTON_H
