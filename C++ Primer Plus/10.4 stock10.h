// stock10.h -- Stock class interface
// version 10
#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>

class Stock     // class declaration
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; };
public:
    Stock();        // default constructor
    Stock(const std::string & co, long n, double pr);
    ~Stock();       // noisy destructor
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};  // note semicolon at the end

#endif