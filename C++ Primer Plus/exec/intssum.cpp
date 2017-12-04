// intssum.cpp -- scan integer sum
#include <iostream>

int main()
{
    using namespace std;

    cout << "Enter integers: ";
    int num, sum {};
    while (cin >> num && num != 0)
    {
        sum += num;
        cout << "Integers sum is " << sum << endl;
    }
    cout << "The program is end" << endl;
    return 0;
}