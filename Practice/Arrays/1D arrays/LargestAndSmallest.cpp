#include <iostream>
#include <climits> //Used for INT_MAX and INT_MIN for integer type value
using namespace std;
int main()
{
    int arr[10] = {0}, smallest = INT_MAX, largest = INT_MIN;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (smallest > arr[i])
        {
            smallest = arr[i];
        }
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }
    cout << endl
         << "Smallest  :" << smallest << endl
         << "Largest   :" << largest;
    return 0;
}