#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3}; //Initialize first Three element as 1,2,3 then zero after that
                             //Initialization and declaration of array
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}