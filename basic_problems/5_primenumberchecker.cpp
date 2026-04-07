#include<iostream>
using namespace std;

// check if a number is prime or not
int main()
{
    int n=30;
    bool isPrime=true;

    // method 1: check if n is divisible by any number from 2 to n-1
    // logic: the only factors of a prime number are 1 and itself (n)

    for (int i=2;i<=n-1;i++){
        if (n%i==0){
            isPrime=false;
            break;
        }

    }
    cout<<"By method 1, "<<n<<" is "<<(isPrime?"a prime number.":"not a prime number.")<<endl;

    // method 2: check if n is divisible by any number from 2 to sqrt(n)
    // logic: factors start repeating after sqrt(n), so we only need to check up to sqrt(n)
    isPrime=true; // reset isPrime for method 2
    for (int i=2;i*i<=n;i++){ // i*i<=n is equivalent to i<=sqrt(n)
        if (n%i==0){
            isPrime=false;
            break;
        }
    }
    cout<<"By method 2, "<<n<<" is "<<(isPrime?"a prime number.":"not a prime number.")<<endl;

    
    return 0;
}