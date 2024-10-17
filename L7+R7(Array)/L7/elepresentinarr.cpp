// Check if a element is present in array or not

#include <iostream>
using namespace std;

bool findele(int ele, int *arr)
{
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == ele)
        {
           return true;
        }
    }
    return false;
}


int main()
{

    cout << "enter array";

    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int elementToFind;
    cout << "enter the element to find";
    cin >> elementToFind;

    if(findele(elementToFind, arr)){
        cout<< elementToFind <<" "<< "is present in the array"<<endl;
    }else{
         cout<< elementToFind <<" "<< "is not present in the array"<<endl;
    }

    return 0;
}