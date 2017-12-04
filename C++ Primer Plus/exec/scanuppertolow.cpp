//
#include <iostream>
using namespace std;
int main()
{
    char word {};
    char words[100] {};
    const int diff = 'a' - 'A';
    int i = 0;
    words[0] = 'b';
    while (cin.get(word) && word != '@')
    {
        if (isupper(word))
        {
            word = char(word + diff);
        }
        words[i] = word;
        ++i;
    }
    words[i] = '\0';
    cout << words << endl;
    return 0;
}