// qanda.cpp -- information questions and answers
#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    cout << "What is your first name?";
    string firstname;
    getline(cin, firstname);
    cout << "What is your last name";
    string lastname;
    getline(cin, lastname);
    cout << "What letter grade do you deserve?";
    char grade;
    cin >> grade;
    cout << "What is your age?";
    int age;
    cin >> age;
    cout << "Name: " << lastname << ", " << firstname << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;
}