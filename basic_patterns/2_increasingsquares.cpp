#include<iostream>
using namespace std;

// square pattern with numbers 
void square_num(){

    int n=3; // number of lines
    int num=1; // number to be printed

    for (int i=0;i<n;i++){ // outer loop
        for (int j=0;j<n;j++){ //inner loop
            
            cout<<num;// print num
            num+=1; // increase num
        }
        cout<<endl;
        
    }
}

// square pattern with characters
void square_char(){

    int n=3; // number of lines
    char ch='A'; // char to be printed

    for (int i=0;i<n;i++){ // outer loop
        for (int j=0;j<n;j++){ //inner loop
            
            cout<<ch;// print num
            ch+=1; // increase num
        }
        cout<<endl;
        
    }
}





int main()
{
    square_num();
    square_char();
    return 0;
}