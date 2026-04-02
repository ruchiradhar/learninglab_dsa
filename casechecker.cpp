#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;

    if (ch>='a' && ch<='z'){  // ASCII values of 'a' to 'z' are 97 to 122
        cout<<"Lowercase!\n"; // Newline faster than endl as it does not flush the output buffer
    } else if (ch>=65 && ch<=90){ // ASCII values of 'A' to 'Z' are 65 to 90, implicit type conversion 
        cout<<"Uppercase!\n";
    }else {
        cout<<"Not an alphabet!!\n";
    }
    return 0;
}