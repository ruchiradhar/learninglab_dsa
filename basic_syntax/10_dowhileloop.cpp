#include<iostream>
using namespace std;

// print 1 to n using do-while loop
// do-while loop executes block of code once and then checks conditions
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