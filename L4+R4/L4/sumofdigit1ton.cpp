#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "enter number";
    cin >> n;

    for (int num = 1; num <= n; num++)
    {
        int sum = 0;
        int num_copy = num;
        while (num_copy != 0)
        {
            sum += (num_copy % 10);
            num_copy /= 10;
        }

        cout << sum << endl;
    }

    return 0;
}