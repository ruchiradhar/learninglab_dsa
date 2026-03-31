#include<iostream>
using namespace std;
int main()
{
    int a=20, b=10;

    // Arithmetic Operators: +, -, *, /, %
    // Output datatype is always datatype of operands
    cout<<"Sum of a and b: " << a + b << endl;
    cout<<"Difference of a and b: " << a - b << endl;
    cout<<"Product of a and b: " << a * b << endl;
    cout<<"Quotient of a and b: " << a / b << endl; 
    cout<<"Remainder of a and b: " << a % b << endl;

    // Relational Operators: ==, !=, >, <, >=, <=
    // Output datatype is always bool (true or false)
    cout<<"Is a equal to b? " << (a == b) << endl;
    cout<<"Is a not equal to b? " << (a != b) << endl;
    cout<<"Is a greater than b? " << (a > b) << endl;
    cout<<"Is a less than b? " << (a < b) << endl;
    cout<<"Is a greater than or equal to b? " << (a >= b) << endl;
    cout<<"Is a less than or equal to b? " << (a <= b) << endl;

    // Logical Operators: &&, ||, !
    // Output datatype is always bool (true or false)
    bool x = true, y = false;
    cout<<"Logical AND of x and y: " << (x && y) << endl;
    cout<<"Logical OR of x and y: " << (x || y) << endl;
    cout<<"Logical NOT of x: " << (!x) << endl;
    


    return 0;
}