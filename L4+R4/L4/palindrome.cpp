#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "enter number";
    cin >> n;

    int reverse = 0;
    int n_copy = n;

    while (n_copy != 0)
    {
        int d = n_copy % 10;
        reverse = reverse * 10 + d;
        n_copy /= 10;
    }

    if (reverse == n)
    {
        cout << n << " " << "is palindrome";
    }
    else
    {
        cout << n << " " << "is not palindrome";
    }

    return 0;
}