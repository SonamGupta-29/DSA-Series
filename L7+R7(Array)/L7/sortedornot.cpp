// Check if array is sorted or not 

#include <iostream>
using namespace std;

bool isArraySorted(int n, int arr[]){
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            return false; // Return false if any adjacent elements are not in order
        }
    }
    return true;// Return true if the entire array is sorted
}
 
int main(){

    int n;
    cout<<"enter the number of the array";
    cin>> n;

// printing element
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // check if array is sorted
    if(isArraySorted( n, arr)){
        cout<< "The array is sorted."<< endl;
    }else{
        cout<<"The array is not sorted"<< endl;
    }
    
return 0;
}
