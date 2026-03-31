#include<iostream>
using namespace std;
int main()
{
    // Unary Operators: ++, --
    // Output datatype is always datatype of operand
    // ++a is update then assign, a++ is assign then update
    int a=5;
    cout<<"Value of a before increment: " << a << endl;
    int b= ++a; // Pre-increment
    cout<<"Value of a after pre-increment: " << a << endl; // Pre-increment
    cout<<"Value of b: " << b << endl; // Pre-increment
    a=5; // Reset a to 5
    int c= a++; // Post-increment
    cout<<"Value of a after post-increment: " << a << endl; // Post-increment
    cout<<"Value of c: " << c << endl; // Post-increment
    return 0;
}