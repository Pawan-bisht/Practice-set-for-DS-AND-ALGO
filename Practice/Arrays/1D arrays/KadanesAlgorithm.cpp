#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    //Kadane's algorithm
    int cs = 0, max_sum = 0;
    for (int i = 0; i < size; i++)
    {
        cs = cs + arr[i];
        if (cs < 0)
            cs = 0;
        max_sum = max(cs, max_sum);
    }
    return 0;
}