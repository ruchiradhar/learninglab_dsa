#include<iostream>
using namespace std;

// helper function to calculate factorial
// returnType is int, function name is factorial, parameter is number we want factorial for
int factorial(int n){
    int fact=1; // all factorials are greater than or equal to 1, so we initialize fact to 1
     
    for (int i=1;i<=n;i++){
        fact*=i; // fact=fact*i
    }

    return fact;
    
}


int main()
{
    cout<<factorial(5)<<endl; // calling the helper function to calculate factorial of 5
    cout<<factorial(6)<<endl; // calling the helper function to calculate factorial of 6
    return 0;
}