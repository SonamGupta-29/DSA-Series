// Program to find prime factors of a number

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;

    cout << "enter a number";
    cin >> n;

    //
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && isPrime(i) == true)
        {
            cout << i << " ";
        }
    }

    return 0;
}