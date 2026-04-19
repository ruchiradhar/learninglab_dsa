#include<iostream>
using namespace std;


int main()
{
    int marks[]={3,4,0,-1,9,-4};
    int size=6;

    int smallest=INT_MAX;
    int smallest_ind=0;

    for (int i=0;i<size;i++){
        if (marks[i]<smallest){
            smallest=marks[i];
            smallest_ind=i;
        }

        
    }

    cout<<"The smallest item is "<<smallest<<" at index "<<smallest_ind<<endl;
    return 0;
}