#include<iostream>
using namespace std;

// hollow diamond with stars
void diamond_stars(){

    int n=4;

    // upper triangle
    for (int i=0;i<n;i++){
        // first spaces
        for (int j=0;j<n-i-1;j++){
            cout<<' ';
        }
        // star
        cout<<'*'; 
        if (i>0){
            // second spaces
            for (int j=0;j<2*i-1;j++){
                cout<<' ';

            }
            // star
            cout<<'*';
        }
        cout<<endl;
        

        
    }

    // lower triangle
    for (int i=0;i<n-1;i++){
        // first spaces
        for (int j=0;j<i+1;j++){
            cout<<' ';
        }
        // star
        cout<<'*';

        if (i!=n-2){
            // second spaces
            for (int j=0;j<2*(n-i)-5;j++){
                cout<<' ';
            }

            //star
            cout<<'*';
        }
        cout<<endl;
        
    }
}



int main()
{
    diamond_stars();
    return 0;
}