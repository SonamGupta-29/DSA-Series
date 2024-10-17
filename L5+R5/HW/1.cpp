// 01010
// 01010
// 01010
// 01010
// 01010

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int row, col;
    cin >> row >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (j % 2 == 0)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }

    return 0;
}