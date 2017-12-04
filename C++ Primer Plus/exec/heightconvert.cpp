// heightconvert.cpp -- 身高转换
#include <iostream>

double convert(int);

int main()
{
    using namespace std;
    int height{};
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Enter your height: ______cm\b\b\b\b\b\b\b\b";
    cin >> height;
    double m_height{};
    m_height = convert(height);
    cout << "Your height is " << m_height << " m" << endl;
}

double convert(int height)
{
    const int tran = 100;
    return double(height) / tran;
}