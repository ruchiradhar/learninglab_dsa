#include<iostream>
using namespace std;

// triangle pattern with numbers
void triangle_num(){
    int n=4; // number of lines

    for(int i=0;i<n;i++){ // number of lines 
        for (int j=1;j<=i+1;j++){
            cout<<j;
        }
        cout<<endl;

    }
}

// triangle pattern with characters
void triangle_char(){

    int n=4;
    

    for (int i=0;i<n;i++){
        char ch='A';
        for (int j=0;j<=i;j++){
            cout<<ch;
            ch+=1;
        }
        cout<<endl;
    }
}

int main()
{
    triangle_num();
    triangle_char();
    return 0;
}