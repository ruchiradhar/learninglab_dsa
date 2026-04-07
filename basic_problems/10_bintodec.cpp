#include<iostream>
using namespace std;

// binary to decimal conversion
int binToDecimal(int biNum)
{
    int ans = 0; // the variable to store the number
    int power = 1; // the power to multiply ans with for getting number

    while (biNum>0){
        int rem= biNum%10;
        ans= ans+ (rem*power);
        
        biNum=biNum/10;
        power= power*2;
    }
    

    return ans;
}

int main()
{
    cout<<"The decimal of 10 is "<<binToDecimal(10)<<endl;
    return 0;
}