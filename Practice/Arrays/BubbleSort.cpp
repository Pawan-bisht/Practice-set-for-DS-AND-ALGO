#include <iostream>
using namespace std;
void BubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size - i; j++)
        {
            if (arr[j - 1] > arr[j])
                swap(arr[j - 1], arr[j]);
        }
    }
}
int main()
{
    int size;
    cout << "Enter the size of array   :";
    cin >> size;
    int arr[size], key;
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    BubbleSort(arr, size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}