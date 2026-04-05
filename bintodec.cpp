#include<iostream>
using namespace std;

// binary to decimal conversion
int binToDec(int biNum)
{
    int ans =0; // the variable to store the number
    int power =1; // the power to multiply ans with for getting number

    while (biNum>0){
        int lastDigit= biNum%10;
        biNum=biNum/10;

        ans= ans+ lastDigit*power;
        power= power*2;
    }
    

    return 0;
}