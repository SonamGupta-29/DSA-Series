// Print Only Upper Triangular Elements

#include <iostream>
using namespace std;
 
int main(){

    int arr[3][3];

    // cout<<"enter matrix";
    // cin>>ele;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>> arr[i][j];
        }
    }
    
    //upper triangular
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if (j>=i)
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}