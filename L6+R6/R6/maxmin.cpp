#include <bits/stdc++.h>
using namespace std;

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << "maximum is :" << max(a, b) << endl;
    cout << "minimum is :" << min(a, b);

    return 0;
}