#include<iostream>
using namespace std;

// pyramid with numbers
void pyramid_num(){
    int n=4;

    for (int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){ // for spaces
            cout<<' ';
        }
        for (int j=1;j<=i+1;j++){ // for first set of nums
            cout<<j;
        }
        for (int j=i; j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }

}



int main()
{
    pyramid_num();
    return 0;
}