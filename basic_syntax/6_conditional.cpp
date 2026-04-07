#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if (age>18){ // curly braces are optional for single statements
        cout<<"You can vote!"<<endl;
    }else if (age==18){
        cout<<"You can barely vote!"<<endl;
    }else{
        cout<<"You cannot vote yet!"<<endl;
    }
    return 0;
}