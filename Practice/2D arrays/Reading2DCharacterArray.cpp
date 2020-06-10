#include <iostream>
using namespace std;
int main()
{
    char arr[100][100];
    int n;
    cin >> n;
    cin.get();
    for (int i = 0; i < n; i++)
    {
        cin.getline(arr[i], 1000); //It reads the character after space
        // ex pawan bisht   ----> pawan bisht
    }
    char str[100];
    //It doesnt read the character after space ex pawan bisht --> only read pawan
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << str << endl;
    char s3[] = "hello";                   //End the string with '\0' null character
    cout << sizeof(s3) << endl;            // size is 6 "hello\0"
    char s4[] = {'h', 'e', 'l', 'l', 'o'}; //size 5 and also print garbage value
    cout << sizeof(s4) << endl;
    char s5[] = {'h', 'e', 'l', 'l', 'o', '\0'}; //size 6 and doesnt print garbage value
    cout << s5 << endl;
    return 0;
}