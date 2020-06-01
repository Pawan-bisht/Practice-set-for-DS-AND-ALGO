#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int a, int b)
{
    cout << "Comparing  " << a << "  " << b << endl;
    return a < b;
}
int main()
{
    long size;
    cout << "Enter the size of array   :";
    cin >> size;
    long arr[size], key;
    for (long i = 0; i < size; i++)
        cin >> arr[i];

    sort(arr, arr + size, compare);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}