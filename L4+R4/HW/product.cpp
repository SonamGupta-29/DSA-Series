// Calculate product of all digits
#include <iostream>
using namespace std;

int main()
{
    int n, d;
    cin >> n;

    if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    int product = 1;
    while (n != 0)
    {
        d = n % 10;
        product *= d;
        n /= 10;
    }

    cout << product;
    return 0;
}