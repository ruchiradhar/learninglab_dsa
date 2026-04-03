#include<iostream>
using namespace std;

// factorial function
int factorial( int n){
    int fact=1;
    for (int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

// ncr function
// ncr= n!/ (r! * nminusr!)
int ncr (int n,int r){
    int nf = factorial (n);
    int rf= factorial(r);
    int nmrf= factorial (n-r);

    return nf/(rf*nmrf);

}


// main function
int main(){

    cout<<ncr(3,2)<<endl;
    cout<<ncr(5,4)<<endl;
    return 0;
}