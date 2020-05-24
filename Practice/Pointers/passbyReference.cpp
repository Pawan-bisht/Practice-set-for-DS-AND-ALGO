#include<iostream>
using namespace std;
// Pass By value
void increment(int a)
{
    a++;
}

void incrementA(int *a)
{
    *a = *a + 1;
}
int main()
{
    int a = 10;
    cout<< a <<endl;
    increment(a);
    cout<< a <<endl;
    incrementA( &a );
    cout<<a <<endl;
    return 0;
}