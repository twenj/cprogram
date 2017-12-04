// sum.cpp -- tow integer sum
#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter a integer: ";
    int num1;
    cin >> num1;
    cout << "Enter another integer: ";
    int num2;
    cin >> num2;

    int sum = 0;
    for (int i = num1; i <= num2; ++i)
    {
        sum += i;
    }

    cout << "Two integer sum is " << sum << endl;
    return 0;
}