#include<iostream>
using namespace std;

// square pattern with numbers
void square_num(){
      int n= 4; // number of lines

      for (int i=0; i<n;i++){ // outer loop for num of lines
        
        for (int j=0;j<n;j++){ // inner loop for num of chars in a line
            
            cout<<j+1;         // body of inner loop for what is printed in each line
        }
        
        cout<<endl; // moving to new line
      }
}

// square pattern with characters 
void square_char(){
      int n= 4; // number of lines

      for (int i=0; i<n;i++){ // outer loop for num of lines
        
        char ch='A'; // setting starting char for each line
        
        for (int j=0;j<n;j++){ // inner loop for num of chars in a line
            
            cout<<ch;         // body of inner loop for what is printed in each line
            ch+=1;
        }
        
        cout<<endl; // moving to new line
      }
}


// square pattern with stars

int main(){
    square_num();
    square_char();
    //square_star(0);
    
    return 0;
}