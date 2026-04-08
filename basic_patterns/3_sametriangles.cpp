#include<iostream>
using namespace std;

// triangle pattern with numbers
void triangle_num(){
    int n=4; // number of lines

    for(int i=0;i<n;i++){ // number of lines 
        for (int j=0;j<=i;j++){
            cout<<i+1;
        }
        cout<<endl;

    }
}

// triangle pattern with characters
void triangle_char(){
    int n=4; // number of lines
    char ch='A';

    for(int i=0;i<n;i++){ // number of lines 
        for (int j=0;j<=i;j++){
            cout<<ch;
        }
        ch=ch+1;
        cout<<endl;

    }
}

// triangle pattern with stars
void triangle_star(){
    int n=4; // number of lines

    for(int i=0;i<n;i++){ // number of lines 
        for (int j=0;j<=i;j++){
            cout<<'*';
        }
        cout<<endl;

    }
}


int main()
{
    triangle_num();
    triangle_char();
    triangle_star();
    return 0;
}