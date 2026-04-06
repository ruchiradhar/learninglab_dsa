#include<iostream>
using namespace std;

// writing patterns using for loop
// for any pattern, calculate: how many lines (outer loop), how many objects in each line (inner loop)

// square pattern with same numbers i.e n=4 i.e 1234, 1234, 1234, 1234
int square_num_same()
{
    int n=4;
    for (int i=0;i<n;i++){ // outer loop, typically loops start from i=0

        for (int j=1;j<=n;j++){ // inner loop, must use j=1 since that's what we are printing
            cout<<j<<" ";
        }
        cout<<endl;
        }
    return 0;
}

// square pattern with numbers increasing i.e n=4 i.e 1234; 5678; 9 10 11 12; 13 14 15 16
int square_num_increasing()
{
    int n=4;
    int num=1;
    for (int i=0;i<n;i++){ // outer loop, typically loops start from i=0

        for (int j=1;j<=n;j++){ // inner loop, must use j=1 since that's what we are printing
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
        }
    cout<<"after pattern: "<<num<<endl; // sanity check to see if num is increasing as expected
    return 0;
}

// square pattern with letter i.e n=4
int square_letter()
{
    int n=4;
    for (int i=0;i<n;i++){ // outer
        char ch='A';
        
        for (int j=0;j<n;j++){ // inner
            cout<<ch;
            ch+=1; // 65+1=66=B
        }
        cout<<endl;
        }
    return 0;
}

// square pattern with stars i.e n=4
int square_star(){

    int n=4;

    for (int i=0;i<n;i++){ //outer loop

        for (int j=0;j<n;j++){ // inner loop
            cout<<"* ";
        } 
        cout<<endl;

    
    }
    return 0;
}

// triangle pattern with stars
int triangle_star(){

    int n=4; // number of lines

    for (int i=0;i<n;i++){
        for (int j=0; j<i+1;j++){
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}

// reverse triangle with numbers
int reverse_triangle_num(){
     
    int n=4;
    for (int i=0;i<n;i++){ // outer loop
        for (int j=i+1;j>0;j--){ // backward inner loop
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}

// inverted triangle with numbers
int inverted_triangle_num(){

    int n=4;
     
    for (int i=0;i<n;i++){ // outer loop

        for (int j=0;j<i;j++){  // inner loop for spaces, each line has i spaces
            cout<<' ';
        }

        for (int j=0;j<n-i;j++){ // inner loop for numbers, each line has n-i numbers
            cout<<i+1;

        }
    
        cout<<endl;

    }
    
    return 0;
}

// pyramid pattern with numbers
// break horizontally into 3 parts: spaces, first half of numbers, second half of numbers
int pyramid_num(){

    int n=4;

        for (int i=0;i<n;i++){ // outer loop
    
            for (int j=0;j<n-i-1;j++){  // inner loop for spaces, each line has n-i-1 spaces
                cout<<' ';
            }
    
            for (int j=1;j<=i+1;j++){ // inner loop for first half of numbers, each line has i+1 numbers
                cout<<j;
    
            }

            for (int j=i;j>0;j--){ // inner loop for second half of numbers, each line has i-1 numbers
                cout<<j;
    
            }
        
            cout<<endl;
    

        }
    return 0;

}

// hollow diamond pattern with stars
int hollow_diamond_star(){

    // TBD
}

// butterfly pattern with stars
int butterfly_star(){

    // TBD
}



// main function
int main(){
    //square_num_same();
    // square_num_increasing();
    // square_letter();
    // square_star();
    // triangle_star();
    // reverse_triangle_num();
    // inverted_triangle_num();
    // pyramid_num();
    hollow_diamond_star();
    return 0;
}