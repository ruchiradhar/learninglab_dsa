#include<iostream>
using namespace std;

// print n lines with m stars in each line where m decreases by 1 in each line and m starts with 10
int main()
{
    int n=5,m=5;

    for(int i=1; i<=n;i++){
        for(int j=1; j<=m; j++){
            cout<<"* ";
        }
        cout<<endl;
        m--;
    }
    return 0;
}