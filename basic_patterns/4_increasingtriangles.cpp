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

int main()
{
    triangle_num();
    return 0;
}