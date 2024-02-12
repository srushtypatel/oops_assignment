/*
Write a program of to swap the two values using template.
*/
#include <iostream>
using namespace std;
template <typename T>
void swapValues(T &a, T &b) 
{
    T temp = a;
    a = b;
    b = temp;
}
main() 
{
    int a = 5, b = 10;
    cout<<"Before swapping: a = "<<a<< ",b = "<<b <<endl;

    swapValues(a, b);

    cout<<"After swapping: a = "<< a << ",b = "<<b<<endl;
}
