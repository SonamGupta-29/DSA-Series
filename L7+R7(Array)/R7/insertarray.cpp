// - Insert element in array at a specific position

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, pos, ele;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cin>>ele>>pos;

    // for 0 indexing
    pos--;
    n++;

    for(int i=n; i>pos; i--){
        arr[i] = arr[i-1];
    }
    

    arr[pos]   = ele;

    // array update
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    } 
    
return 0;
}