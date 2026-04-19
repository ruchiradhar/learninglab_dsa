#include<iostream>
using namespace std;

// Linear Search: Given a target, find index of the target in an array
// Time Complexity: O(n)

int linearSearch(int arr[], int sz, int target){

    for (int i=0;i<sz;i++){
        if (arr[i]==target){
            return i;
        }
    }
    return -1;
}


int main()
{
    int arr[]={4,2,7,8,1,2,5};
    int sz= 7;
    int target =8;

    cout<<linearSearch(arr,sz,target)<<endl;
    return 0;
}