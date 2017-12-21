#ifndef ERRORMESSAGE_H
#define ERRORMESSAGE_H
#include <iostream>
using namespace std;

class ErrorMessage
{
public:
    ErrorMessage(const char * pText = "Error");         // Constructor
    ~ErrorMessage();                                     // Destructor
    void resetMessage();                                // Change the message
    ErrorMessage& operator=(const ErrorMessage& message);       // Assignment
                                                                  // operator

    char * what() const{ return pMessage; }           // Display the message

private:
    char * pMessage;
};
#endif //ERRORMESSAGE_H
