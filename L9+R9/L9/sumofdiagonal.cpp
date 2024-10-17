// Find sum of diagonal elements in 2D array

#include <iostream>
using namespace std;
 
int main(){

    int arr[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    // first sum of diagonal 
    int sum=0;
    for(int i=0; i<3; i++){
        sum+=arr[i][i];
    }
     cout<<sum<<endl;

    //  second sum diagonal
    int sum2 = 0;
    for(int i=0; i<3; i++){
        int j = 3-i-1;
        sum2+=arr[i][j];
    }
    cout<<sum2;
    
return 0;
}