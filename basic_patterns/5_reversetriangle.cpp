#include<iostream>
using namespace std;

// reverse triangle with numbers
void reverse_num(){
    int n=4;
    for (int i=0;i<n;i++){
        for (int j=i+1;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }

}


int main()
{
    reverse_num();
    return 0;
}