//  Print first and last digit of a number

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int last_digit = n % 10;

    int first_digit = n;
    while (first_digit >= 10)
    {
        first_digit /= 10;
    }

    cout << first_digit << endl;
    cout << last_digit << endl;

    return 0;
}