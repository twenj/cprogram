// lattice.cpp -- scan car info
#include <iostream>

using namespace std;

const int row = 5;
const int column = 5;

int main()
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            if ((column - 1 - j) > i)
            {
                cout << ".";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}