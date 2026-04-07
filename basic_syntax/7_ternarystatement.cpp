#include<iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter a number:";
    cin>>a;
    // Ternary statement syntax: condition ? expression_if_true : expression_if_false
    cout<<(a%2==0 ?"Even":"Odd")<<endl;

    return 0;
}