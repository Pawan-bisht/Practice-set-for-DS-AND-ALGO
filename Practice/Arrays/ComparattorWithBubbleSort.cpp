#include <iostream>
using namespace std;
bool compare(int a, int b)
{
    cout << "Comaring   :" << a << " " << b << endl;
    return a > b;
}
void BubbleSort(int arr[], int size, bool (&cmp)(int a, int b)) //How to make a function pass as paramenter into another function
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size - i; j++)
        {
            if (cmp(arr[j - 1], arr[j]))
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
    BubbleSort(arr, size, compare); //How to call a function pass as to another function
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}