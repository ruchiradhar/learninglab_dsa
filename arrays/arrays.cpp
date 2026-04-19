#include<iostream>
using namespace std;

int main(){
    
    // initializing array of size 5
    int marks[5]={19,17,16,19,15};
    cout<<marks<<endl;
    
    // checking size of array
    int sz=sizeof(marks)/sizeof(int);
    cout<<sz<<endl;
    
    // printing each item of array
    for (int i=0;i<sz;i++){
        cout<<marks[i]<<endl;
    }
    
    return 0;
}