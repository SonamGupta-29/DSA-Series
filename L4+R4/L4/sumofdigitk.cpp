// Get First N numbers that have sum of digits = k

#include <iostream>
using namespace std;

int sumofdigit(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += (num % 10);
        num /= 10;
    }
    return sum;
}

int main()
{
    int n, k;
    cout<< "enter number and total";
    cin >> n>> k;

    int num = 1;
    while (1)
    {
        int sod = sumofdigit(num);
        if (sod == k)
        {
            cout << num << endl;
            n--;
        }
        num++;
        if (n == 0)
            break;
    }

    return 0;
}
