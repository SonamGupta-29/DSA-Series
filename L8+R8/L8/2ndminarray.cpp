#include <bits/stdc++.h>
using namespace std;

int findMin(int arr[], int n)
{
    int min_ele = INT_MAX; // Use INT_MAX from <climits>

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min_ele)
        {
            min_ele = arr[i];
        }
    }
    return min_ele;
}

int secMin(int arr[], int n, int min_ele)
{
    int sec_min_ele = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < sec_min_ele && arr[i] != min_ele)
        {
            sec_min_ele = arr[i];
        }
    }
    if (sec_min_ele == INT_MAX)
    {
        return -1; // If no second minimum is found, return -1 (for example)
    }

    return sec_min_ele;
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

    int minimum_ele = findMin(arr, n);
    int second_minimum_ele = secMin(arr, n, minimum_ele);

    cout << minimum_ele << " ";

    if (second_minimum_ele == -1) {
        cout << "No second minimum element found\n";
    } else {
        cout << second_minimum_ele << "\n";
    }

    // cout << minimum_ele << " " << second_minimum_ele;
    return 0;
}