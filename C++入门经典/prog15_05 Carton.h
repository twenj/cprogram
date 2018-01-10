#ifndef CARTON_H
#define CARTON_H
#include "Box.h"            // For Box class definition

class Carton : public Box
{
public:
    // Constructor which can also act as default constructor -
    // calls default base constructor automatically
    Carton(const char * pStr = "Cardboard");
    // Constructor explicitly calling the base constructor
    Carton(double lv, double wv, double hv, const char * pStr = "Cardboard");
    Carton(const Carton& aCarton);
    ~Carton();                                       // Destructor
    double volume() const;

private:
    char * pMaterial;
};
#endif //CARTON_H
