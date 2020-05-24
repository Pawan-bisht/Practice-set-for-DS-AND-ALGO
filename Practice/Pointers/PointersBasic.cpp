#include<iostream>
using namespace std;

int main()                  //g++ demo.cpp -o demo.exe   ---->   ./demo.exe
{
    cout<<"Hello world"<<endl;
    int *ptr;
    int x = 10;
    ptr = &x;



    cout<<sizeof(x)<<endl;     // It is 4
    cout<<sizeof(ptr)<<endl;   // It is 8
    
    cout<< &x <<endl;
    cout<< ptr <<endl;


    cout<< *(&x) <<endl;
    cout<< *(ptr) <<endl;

    cout<< *(&ptr) <<endl;
    cout<< &(*ptr) <<endl;
    
    
    char *chPtr;
    char ch = 'X';
    cout<<sizeof(ch)<<endl;
    cout<<sizeof(chPtr)<<endl;
    float w = 1.02;
    float *fltPtr = &w;
    cout<<sizeof(fltPtr)<<endl;
    return 0;
}