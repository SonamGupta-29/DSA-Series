#include <bits/stdc++.h>
using namespace std;

void reverseArray(int *arr, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - 1 - i] = temp;
    }
}

int main()
{

    int n;
    cin >> n;
    int arr[n];

    // inputs
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverseArray(arr, n);

    // print
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}