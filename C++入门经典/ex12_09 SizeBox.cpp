// SizeBox.cpp
#include "SizeBox.h"
#include <string>


SizeBox::SizeBox():
    length(1.0), width(1.0), height(1.0) {
    char str[] = "Cardboard";
    pMaterial = str;
}
// Sum of sizes of members
int SizeBox::totalSize()
{
    return sizeof(length) + sizeof(width) + sizeof(height) + sizeof(pMaterial);
}