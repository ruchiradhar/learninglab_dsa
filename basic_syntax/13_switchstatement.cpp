#include<iostream>
using namespace std;
 int main(){
    int x=0;
    switch(x+1){
        case 1:
        cout<<"The value of x is 1"<<endl;
        break;
        case 2:
        cout<<"The value of x is 2"<<endl;
        break;
        default: // default is optional, executed when all cases are false
        cout<<"The value of x is not 1,2 or 3"<<endl;
    }
 }