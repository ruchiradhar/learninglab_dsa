#include<iostream>
using namespace std;

// sum of first n natural numbers
int main() {

    int n=20;
    int sum=0;

    for (int i=1;i<=n;i++){ // initialize looping variable i, check condition, update i
        sum+=i; //sum= sum+1
        
    }
    cout<<"Sum of first "<<n<<" natural numbers is: "<<sum<<endl;



    return 0;
}