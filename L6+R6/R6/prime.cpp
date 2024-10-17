// - Find prime numbers in given range using functions

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
// prime num have only 2 division
int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n <= 1) return false;

        if (n % i == 0)
        {
            count++;
        }
    }
    // A prime number has exactly two divisors (1 and itself)
    return count == 2;
}

void printPrime(int lower_limit, int upper_limit)
{
    for(int i= lower_limit; i<=upper_limit; i++){
        if(isPrime(i) == true){
            cout<<i<<" ";
        }
    }
}

int main()
{
    int lower_limit, upper_limit;
    cin >> lower_limit >> upper_limit;

    printPrime(lower_limit, upper_limit);

    return 0;
}