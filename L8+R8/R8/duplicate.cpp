#include <bits/stdc++.h>
using namespace std;
 
 int findMax(int arr[],int n){
    int maxEle = arr[0];
    for(int i=0; i<n; i++){
        if (arr[i] > maxEle)
        {
            maxEle = arr[i];
        }
    }
    return maxEle;
 }

 int frequency(int arr[], int n, int maxEle){
    int count = 0;

    int fre[maxEle + 1] = {};

    for(int i =0; i<n; i++){
        fre[arr[i]]++;
    }

    for(int i =0; i<(maxEle + 1); i++){
        if(fre[i] >= 2){
           count++;
        }
    }
    return count;
 }

int main(){
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

  // Find the maximum element
    int maxEle = findMax(arr, n);

   cout<<frequency(arr, n, maxEle);

return 0;
}