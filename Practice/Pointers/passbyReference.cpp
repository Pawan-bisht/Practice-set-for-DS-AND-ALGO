#include<iostream>
using namespace std;
// Pass By value
void increment(int a)
{
    a++;
}
// Pass By reference
void incrementA(int *a)
{
    *a = *a + 1;
}
int main()
{
    int a = 10;
    cout<< a <<endl;   
    increment(a);     // Call by value
    cout<< a <<endl;
    incrementA( &a );   // Call by reference
    cout<<a <<endl;
    return 0;
}