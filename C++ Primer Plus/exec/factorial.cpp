// factorial.cpp -- ¼ÆËã½×³Ë
#include <iostream>

using namespace std;

int getfactorial(int num);

int main()
{
    int num;
    while ( ! (cin >> num))
    {
        cin.clear();
        while (cin.get() != '\n');
        cout << "Please enter a integer: ";
    }
    int result = getfactorial(num);
    cout << result << endl;
}

int getfactorial(int num)
{
    int r = 1;
    if (num > 1)
    {
        r = getfactorial(num - 1);
    }
    return r * num;
}