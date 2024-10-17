#include <iostream>
using namespace std;

void printArr(int arr[10]){
    for(int i=0; i<10; i++){
        cout<< arr[i]<<" ";
    }
}

int main()
{
    int arr[10];

    cout<<"enter array";

    for (int i = 0; i < 10; i++) {
        cin>> arr[i];
    }
    printArr(arr);

    return 0;
}