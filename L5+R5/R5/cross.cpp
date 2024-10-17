#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // upper part
    int left_space = 0;
    int middle_space = 1 + 2 * (n - 2);

    for (int i = 1; i <= n; i++)
    {
        // left space
        for (int j = 1; j <= left_space; j++)
        {
            cout << " ";
        }

        // number
        cout << i;

        // middle space
        for (int j = 1; j <= middle_space; j++)
        {
            cout << " ";
        }

        // number
        if (i != n)
        {
            cout << i;
        }

        left_space = left_space + 1;
        middle_space = middle_space - 2;

        cout << "\n";
    }

    // lower part
    left_space = 0+ 1 *(n - 2);
    middle_space = 1;

    for (int i = n - 1; i >= 1; i--)
    {

        // left space
        for (int j = 1; j <= left_space; j++)
        {
            cout << " ";
        }

        // number
        cout << i;

        // middle space
        for (int j = 1; j <= middle_space; j++)
        {
            cout << " ";
        }

        // number
        if (i != n)
        {
            cout << i;
        }

        left_space = left_space - 1;
        middle_space = middle_space + 2;

        cout << "\n";
    }

    return 0;
}