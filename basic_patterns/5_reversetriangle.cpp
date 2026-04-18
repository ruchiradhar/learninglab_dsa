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

// reverse triangle with characters
void reverse_char(){
    int n=4;
    for (int i=0;i<n;i++){
        char ch= 65+i;
        for (int j=i+1;j>0;j--){
            cout<<ch;
            ch-=1;
        }
        cout<<endl;
    }
}


int main()
{
    reverse_num();
    reverse_char();
    return 0;
}