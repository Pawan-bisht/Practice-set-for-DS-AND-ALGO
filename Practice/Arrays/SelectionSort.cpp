#include <iostream>
using namespace std;
void SelectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int smallest = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[smallest] > arr[j])
                smallest = j;
        }
        swap(arr[smallest], arr[i]);
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
    SelectionSort(arr, size);
    cout << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}