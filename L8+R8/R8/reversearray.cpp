#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int reversed[n];

    k = k % n; // 5%4 = 1

    for (int i = 0; i < n; i++)
    {
        int newIndex = i - k;
        if (newIndex < 0)
            newIndex += n;
        reversed[newIndex] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << reversed[i] << " ";
    }
    return 0;
}