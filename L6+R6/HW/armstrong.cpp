//  print all Armstrong numbers between given interval using function
#include <bits/stdc++.h>
using namespace std;

// Function to calculate power manually

bool armstrong(int n)
{
    int n_copy = n;
    int answer = 0;

    while(n_copy!= 0)
    {
        int last_digit = n_copy % 10;
        answer = answer + (last_digit * last_digit * last_digit);
        n_copy = n_copy / 10;
    }
    return answer == n;
}

void printArmstrong(int lower_limit, int upper_limit)
{
    for (int i = lower_limit; i <= upper_limit; i++)
    {
        if (armstrong(i))
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int lower_limit, upper_limit;
    cin >> lower_limit >> upper_limit;

    printArmstrong(lower_limit, upper_limit);

    return 0;
}