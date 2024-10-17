// Put even and odd elements of array in two separate array

#include <bits/stdc++.h>
using namespace std;

void isEven(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout<<endl;
}

void isOdd(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // call the  functions
    isEven(arr, n);
    isOdd(arr, n);

    return 0;
}