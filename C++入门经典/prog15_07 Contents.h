// Contents.h - Dry contents
#ifndef CONTENT_H
#define CONTENT_H
class Contents
{
public:
    Contents(const char * pStr = "cereal", double weight = 0.3, double vol = 0);
                                                                // Constructor
    ~Contents();                                                // Destructor
    double getWeight() const;                                 // "Get contents weight" function
protected:
    char * pName;                                              // Contents type
    double volume;                                             // Cubic inches
    double unitweight;                                         // Pounds per cubic inch
};
#endif //CONTENT_H
