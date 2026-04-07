#include<iostream>
using namespace std;
int main()
{
    int a=4, b=8;

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

    // Bitwise Operators: &, |, ^, ~, <<, >>
    // Output datatype is always same as operands
    cout<<"Bitwise AND of a and b: "<< (a&b) << endl;
    cout<<"Bitwise OR of a and b: "<< (a|b) << endl;
    cout<<"Bitwise XOR of a and b: "<< (a^b) << endl;
    cout<<"Bitwise NOT of a: "<< (~a) << endl;
    cout<<"Left shift a by 1: "<< (a<<1) << endl;
    cout<<"Right shift a by 1: "<< (a>>1) << endl;
    


    return 0;
}