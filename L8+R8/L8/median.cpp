#include <bits/stdc++.h>
using namespace std;

float median(int arr[], int n){
    int ans;
    if(n%2 == 0){
        return float(arr[n/2] + arr[n/2-1])/2.0;
    }else{
        return arr[n/2];
    }
}
 
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    float Median = median(arr, n);
    cout<<Median;
    
return 0;
}