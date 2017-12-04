// golfandavg.cpp -- ¸ß¶û·ò³É¼¨¼ÆËã
#include <iostream>

using namespace std;

const int Count = 5;
int scan_grade(double arr[], int count);
void show_grade(const double arr[], int count, const double avg);
double count_avg(const double arr[], int count);

int main()
{
    double grade[Count] {};
    int size = scan_grade(grade, Count);
    double avg = count_avg(grade, size);
    show_grade(grade, size, avg);
}

int scan_grade(double arr[], int count)
{
    int stop = 0;
    for (int i = 0; i < count; i++)
    {
        stop = 0;
        while ( ! (cin >> arr[i]))
        {
            cin.clear();
            if (cin.get() == '*')
            {
                stop = 1;
                break;
            }
            else
            {
                while (cin.get() != '\n');
                cout << "Please scan grade: ";
            }
        }
        if (stop == 1)
        {
            break;
        }
    }
    return count;
}

double count_avg(const double arr[], int count)
{
    double sum = 0;
    for (int i = 0; i < count; i++)
        sum += arr[i];
    return sum / count;
}

void show_grade(const double arr[], int count,const double avg)
{
    for (int i = 0; i < count; i++)
        cout << arr[i] << " ";
    cout << avg << endl;
}
