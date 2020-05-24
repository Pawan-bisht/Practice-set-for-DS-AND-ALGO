#include<iostream>
using namespace std;

int main()                  //g++ demo.cpp -o demo.exe   ---->   ./demo.exe
{
    cout<<"Hello world"<<endl;
    int *ptr;
    int x = 10;
    ptr = &x;


    //For size of pointers with different data type
    cout<<sizeof(x)<<endl;     // It is 4
    cout<<sizeof(ptr)<<endl;   // It is 8
    
    char *chPtr;
    char ch = 'X';
    cout<<sizeof(ch)<<endl;
    cout<<sizeof(chPtr)<<endl;
    float w = 1.02;
    float *fltPtr = &w;
    cout<<sizeof(fltPtr)<<endl;
    
    //Dereferencing Pointer
    cout<< &x <<endl;
    cout<< ptr <<endl;

    cout<< *(&x) <<endl;
    cout<< *(ptr) <<endl;

    cout<< *(&ptr) <<endl;
    cout<< &(*ptr) <<endl;
    
    //Double pointer 
    int a = 100;
    int *xptr = &a;             //int  --> data-type  and * ---> syntax 
    int ** xxptr = &xptr;       // int* --> data-type and * ---> syntax    
    cout<< a <<endl;
    cout<< *xptr <<endl;
    cout<< **xxptr <<endl;
    return 0;
}