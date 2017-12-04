// dealstring.cpp
#include <iostream>
using namespace std;

#include <cstring>      // for strlen(), strcpy()

struct stringy{
    char * str;        // pointer to a string
    int ct;            // length of string (not counting '\0')
};

void set(stringy &, char *);
void show(const stringy &, int len = 0);
void show(char *, int len = 0);

// prototype for set(), show(), and show() go here
int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 10);
    show("Done!");
    return 0;
}

void set(stringy & str, char * chars)
{
    str.str = chars;
    str.ct = strlen(chars);
}

void show(const stringy & str, int len)
{
    if (len == 0)
    {
        cout << str.str << endl;
    }
    else
    {
        len = (len < str.ct) ? len : str.ct;
        for (int i = 0; i < len; i++)
        {
            cout << str.str[i];
        }
        cout << endl;
    }
    //cout << str.ct << endl;
}

void show(char * str, int len)
{
    if (len == 0)
    {
        cout << str << endl;
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            if (*str)
            {
                cout << *str;
                str++;
            }
            else
            {
                break;
            }
        }
        cout << endl;
    }
}