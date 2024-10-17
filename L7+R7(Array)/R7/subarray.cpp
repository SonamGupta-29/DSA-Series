// - Print all subarray of a given array

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

// starting
    for(int i=0; i<n; i++){
        // ending
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
               cout<<arr[k]<<" ";
            }
         cout<<"\n";
        }
    }
    
return 0;
}