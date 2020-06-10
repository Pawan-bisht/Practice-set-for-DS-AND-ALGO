#include <iostream>
using namespace std;
void readLine(char arr[], int maxlen, char delim = '\n')
{
    int i = 0;
    char ch = cin.get();
    while (ch != delim)
    {
        arr[i] = ch;
        i++;
        if (i == maxlen - 1)
            break;
        ch = cin.get();
    }
    arr[i] = '\n';
    return;
}
int main()
{
    char arr[1000];
    // readLine(arr, 100, '$');  //how to work with cin.get() to read single character at a time
    cin.getline(arr, 100, '$'); //This method work as same as above function
    cout << endl
         << arr << endl;
    return 0;
}