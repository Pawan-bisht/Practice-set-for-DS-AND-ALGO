#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array   :";
    cin >> size;
    int arr[size], key;
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cin >> key;
    bool find = false;
    int left = 0, right = size - 1, mid = 0;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == key)
        {
            find = true;
            cout << "The key found at :" << mid << " Position";
            break;
        }
        if (arr[mid] < key)
            left = mid + 1;
        if (arr[mid] > key)
            right = mid - 1;
    }
    if (!find)
        cout << "The key didnt found ";
    return 0;
}