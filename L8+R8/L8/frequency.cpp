#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);         // Using vector instead of array for better flexibility
    unordered_map<int, int> mp; // Declare the map to store frequencies

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << mp[arr[i]] << endl;
    }

    return 0;
}