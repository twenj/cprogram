// reavg.cpp -- �����������ĵ���ƽ����
#include <iostream>

using namespace std;

int main()
{
    double a = 0, b =0;
    while (cin >> a && cin >> b && a != 0 && b != 0)
    {
        cout << 2.0 * a * b / (a + b) << endl;
    }
    cout << "end!" << endl;
}