// car.cpp -- scan car info
#include <iostream>
#include <string>

using namespace std;

struct car {
    string manu;
    int year;
};

int main()
{
    using namespace std;
    cout << "How many cars do you wish to catalog: ";
    int maxNum {};
    (cin >> maxNum).get();
    car * arr = new car[maxNum] {};

    for (int i = 0; i < maxNum; ++i)
    {
        cout << "Car #" << i + 1 << ": " << endl;
        cout << "Please enter the make: ";
        getline(cin, arr[i].manu);
        cout << "Please enter the year made: ";
        (cin >> arr[i].year).get();
    }

    cout << "Here is your collection: " << endl;
    for (int i = 0; i < maxNum; ++i)
    {
        cout << arr[i].year << " " << arr[i].manu << endl;
    }
    return 0;
}