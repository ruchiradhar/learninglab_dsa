#include<iostream>
using namespace std;

// print 1 to n using do-while loop
int main()
{
    int n= 20;
    int i=1;
    do {
        cout<<i<<" ";
        i++;
    }while (i<=n);
    return 0;
}