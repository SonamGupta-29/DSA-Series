#include <bits/stdc++.h>
using namespace std;
 
int search(int arr[], int n, int k){
    for(int i=0; i<n; i++){
        if(arr[i] == k){
           return i;
        }
    }
    return -1;
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int k;
    cin>>k;

    int searchele = search(arr, n, k);
    cout<<searchele;

return 0;
}