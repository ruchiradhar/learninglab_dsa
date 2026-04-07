#include<iostream>
using namespace std;

// function definition 
// function syntax: return_type function_name(){body}

// printing hello
void printHello(){ // void return type means the function does not return any value
    cout<<"Hello"<<endl;
}

// sum of two numbers
int sumNum(int a , int b){
    int sum=a+b;
    return sum; 
}

// nested function
// main function does not need to be called, it is the entry point of the program
int main(){
    int a=10, b=5;
    printHello(); // helper function call
    int c= sumNum(5,10); // helper function call
    cout<<"The sum of "<<a<<" and "<<b<<" is: "<<c<<endl;
    return 0;
}