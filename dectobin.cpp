#include<iostream>
using namespace std;

// decimal to binary conversion function
int decToBinary(int decNum){
    int ans =0; // the variable to store the number
    int power =1; // the power to multiply ans with for getting number

    while (decNum>0){
        int biNum= decNum%2;
        decNum=decNum/2;

        ans= biNum*power;
        power= power*10;
    }

    return ans;
    
}


int main()
{
    cout<<"The binary of 1 is "<<decToBinary(1)<<endl;
    return 0;
}