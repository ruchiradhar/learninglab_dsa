#include <iostream>
using namespace std;
int main(){
    int a=20; // int variable of 4 bytes
    cout<<"Value of a: "<<a<<endl;
    double b=20.568; // double variable of 8 bytes
    cout<<"Value of b: "<<b<<endl;

    // implicit typecasting
    // small data type to large data type, no data loss, automatically done by compiler
    double c=a; // int to double
    cout<<"Value of c (from a): "<<c<<endl;

    // explicit typecasting
    // large data type to small data type, data loss, needs explicit declaration
    int d=(int)b; // double to int
    cout<<"Value of d (from b): "<<d<<endl;
}