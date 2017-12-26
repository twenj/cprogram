#ifndef BOXPRT_H
#define BOXPRT_H

class BoxPtr
{
public:
    BoxPtr(TruckLoad & load);               // Constructor
    Box & operator*() const;              // * overload
    Box * operator->() const;             // -> overload
    Box *operator++();                     // Prefix increment
    const Box *operator++(int);           // Postfix increment
    operator bool();                       // Conversion to bool

private:
    Box * pBox;                             // Pointer to current Box in rLoad
    TruckLoad & rLoad;

    // Not accessible so not implemented
    BoxPtr();                               // Default constructor
    BoxPtr(BoxPtr&);                        // Copy constructor
    BoxPtr &operator=(const BoxPtr&);     // Assignment operator
};

#endif //BOXPRT_H