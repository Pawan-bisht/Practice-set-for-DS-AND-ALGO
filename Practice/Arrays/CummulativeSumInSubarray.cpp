#include <iostream>
using namespace std;
int main()
{
    int arr[6], cm[6] = {0};
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    cm[0] = arr[0];

    for (int i = 1; i < 6; i++)
    {
        cm[i] = cm[i - 1] + arr[i];
    }
    for (int i = 0; i < 6; i++)
        cout << cm[i] << " ";
    int cur_sum = 0, max_sum = 0;
    for (int i = 0; i < 6; i++)
    {
        cur_sum = 0;
        for (int j = i; j < 6; j++)
        {
            cur_sum = cm[j] - cm[i - 1];
            if (cur_sum > max_sum)
                max_sum = cur_sum;
        }
    }
    cout << max_sum << endl;
    return 0;
}