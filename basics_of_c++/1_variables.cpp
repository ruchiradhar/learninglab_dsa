# include <iostream>
using namespace std;

// following shows variables with primitive data types in C++ and their sizes in bytes
// 1 byte=8 bits = -2^7 to 2^7-1 i.e it stores max 2^8 values (0 to 2^8-1 for unsigned, -2^7 to 2^7-1 for signed)
// 4 bytes=32 bits = -2^31 to 2^31-1 i.e it stores max -2^32 values (0 to 2^32-1 for unsigned, -2^31 to 2^31-1 for signed)
// 8 bytes=64 bits = -2^63 to 2^63-1 i.e it stores max -2^64 values (0 to 2^64-1 for unsigned, -2^63 to 2^63-1 for signed)

// use camelCase for variable names in C++
int main(){
    // basic primitive datatypes in C++
    int age=25; // declare variable integer, space 4 bytes
    char grade= 'A'; // declare variable character, space 1 byte
    float pi=3.14f; // declare variable float, space 4 bytes
    double piDouble=3.141592653589793; // declare variable double, space 8 bytes
    bool lovesCoding=true; // declare variable boolean, space 1 byte

    // datatype modifiers in C++
    // signed, unsigned, short, long
    unsigned int positiveNumber=100; // only positive numbers, space 4 bytes
    signed int negativeNumber=-100; // only negative numbers, space 4 bytes
    short int smallNumber=10; // smaller range, space 2 bytes
    long int largeNumber=1000000; // larger range, space 8 bytes
    long long int veryLargeNumber=1000000000000; // even larger range, space 8 bytes

    cout<< age << " " << sizeof(age) << endl;
    cout<< grade << " " << sizeof(grade) << endl;
    cout<< pi << " " << sizeof(pi) << endl;
    cout<< piDouble << " " << sizeof(piDouble) << endl;
    cout<< lovesCoding << " " << sizeof(lovesCoding) << endl; //true->1, false->0
    cout<< positiveNumber << " " << sizeof(positiveNumber) << endl;
    cout<< negativeNumber << " " << sizeof(negativeNumber) << endl;
    cout<< smallNumber << " " << sizeof(smallNumber) << endl;
    cout<< largeNumber << " " << sizeof(largeNumber) << endl;
    cout<< veryLargeNumber << " " << sizeof(veryLargeNumber) << endl;
    
    return 0;

}