#include<iostream>
using namespace std;

// floyd triangle with numbers
void floyd_num(){
    int n=4;
    int num=1;
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }

}

// floyd triangle with characters
void floyd_char(){
    int n=4;
    char ch='A';

    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout<<ch;
            ch+=1;
        }
        cout<<endl;
    }
}


int main()
{
    floyd_num();
    floyd_char();
    return 0;
}