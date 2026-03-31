// Preprocessor Directive as header file
// # include tells compiler to include something in source code
// iostream is a library containg C++ input and output functions
// if header file has .h extension, can be used by other C programs
# include <iostream> 

// Namespace Declaration
// it is used to group logically related functions and to avoid name conflicts
using namespace std;

// Name Function
// main is the entry point of a C++ program
// this code will be executed first when the program runs
int main(){
    // This statement prints "Hello, World!" to the console
    // cout is the output statement in C++
    // endl is used to insert a new line after the output, use \n for faster
    cout << "Hello, World!"<< "My Name is Ruchira. \nIt is a pleasure to meet you."<< endl; 
    return 0; //return indicates the exit status where 0 is success
}