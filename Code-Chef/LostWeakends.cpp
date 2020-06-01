#include <iostream>
using namespace std;
int main()
{
    int test, weekDays[6];
    cin >> test;
    while (test > 0)
    {
        test--;
        for (int i = 0; i < 6; i++)
        {
            cin >> weekDays[i];
        }
        int p = weekDays[5];

        int total = 0;
        for (int i = 0; i < 5; i++)
        {
            total = total + p * weekDays[i];
        }
        if (total <= 120)
            cout << "No";
        else
        {
            cout << "Yes";
        }
        cout << endl;
    }

    return 0;
}