#include<iostream>
using namespace std;

int sumOfDigits(int n){
    int sum=0; // initialize sum to 0
    while (n>0){
        int digit=n%10;
        sum+=digit;
        n=n/10;
    }
    return sum;

}


int main()
{
    cout<<sumOfDigits(123)<<endl; // calling the helper function to calculate sum of digits of 123  
    cout<<sumOfDigits(456)<<endl; // calling the helper function to calculate sum of digits of 456
    return 0;
}