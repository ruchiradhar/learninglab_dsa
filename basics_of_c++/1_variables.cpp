# include <iostream>
using namespace std;

// following shows variables with primitive data types in C++ and their sizes in bytes
int main(){
    int age=25; // declare variable integer, space 4 bytes
    char grade= 'A'; // declare variable character, space 1 byte
    float pi=3.14f; // declare variable float, space 4 bytes
    double pi_double=3.141592653589793; // declare variable double, space 8 bytes
    bool lovesCoding=true; // declare variable boolean, space 1 byte
    cout<< age << " " << sizeof(age) << endl;
    cout<< grade << " " << sizeof(grade) << endl;
    cout<< pi << " " << sizeof(pi) << endl;
    cout<< pi_double << " " << sizeof(pi_double) << endl;
    cout<< lovesCoding << " " << sizeof(lovesCoding) << endl; //true->1, false->0
    return 0;

}