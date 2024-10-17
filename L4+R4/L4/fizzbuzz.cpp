#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "enter number";
    cin >> num;

    int danger_num;
    cin >> danger_num;

    for (int i = 1; i <= num; i++)
    {
        if (i == danger_num)
        {
            cout << "danger number";
            break;
        }
        else if (i % 4 == 0)
        {
            continue;
        }
        else if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "Fizzbuzz";
        }
        else if (i % 3 == 0)
        {
            cout << "Fizz";
        }
        else if (i % 5 == 0)
        {
            cout << "Buzz ";
        }
        else
        {
            cout << i << " ";
        }
    }

    return 0;
}