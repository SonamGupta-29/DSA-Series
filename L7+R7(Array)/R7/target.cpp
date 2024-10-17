// - Find two indexes in array whose sum is equal to target element

#include <bits/stdc++.h>
using namespace std;

void sum(int arr[], int n, int target_ele){
    for(int i=0; i<n-1; i++){
        for (int j= i+1; j<n; j++){
           if(arr[i] + arr[j] == target_ele){
            cout<<i<<" "<<j;
            return;
           }
        }
    }
    // cout << "No two elements found with sum equal to the target." << endl;
}
 
int main(){
    int n;
    cin>>n;

    int arr[n], target_ele;
    // array input
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // target element
    cin>>target_ele;

    // function calling
    sum(arr, n, target_ele);

return 0;
}