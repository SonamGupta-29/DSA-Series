#include <bits/stdc++.h>
using namespace std;
 
int findMin(int arr[], int n){
 int min_ele = arr[0];

 for(int i=0; i<n; i++){
    if(arr[i] < min_ele){
        min_ele = arr[i];
    }
 }
 return min_ele;
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int minElement = findMin(arr, n);

    cout<<minElement;
    
return 0;
}