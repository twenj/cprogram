// reprintstr.cpp
#include <iostream>

using namespace std;

void print_str(string *, int n = 1);

int main()
{
    string str = "hello world";
    print_str(&str, 5);
}

void print_str(string * str, int n)
{
    if (n != 1)
    {
        print_str(str, n - 1);
    }
    cout << *str << endl;
}
