//gtavg.cpp
#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<double, 10> darr {};
    cout << "Please enter ten double: ";
    double num {};
    int i = 0;
    double sum = 0.00;
    for (double val : darr)
    {
        if ( ! (cin >> num))
            break;
        darr[i] = num;
        sum += num;
        ++i;
    }
    double avg = sum / i;
    int bignum = 0;
    for (double val : darr)
    {
        if (val > avg)
            ++bignum;
    }
    cout << bignum << endl;
    return 0;
}