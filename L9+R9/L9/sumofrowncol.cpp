// Sum of each row and each column in 2D array

#include <iostream>
using namespace std;

int main()
{
    const int rows = 3;
    const int cols = 4;
    int arr[rows][cols];

    // Input elements into the 2D array
    cout << "Enter elements for a " << rows << "x" << cols << " matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    // sum of each row of 2D array
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
        cout << "Row " << i + 1 << ": " << sum << endl;
    }

    // sum of each column of 2D array
    for (int j = 0; j < cols; j++)
    {
        int sum = 0;
        for (int i = 0; i < rows; i++)
        {
            sum += arr[i][j];
        }
        cout << "Col " << j + 1 << ": " << sum << endl;
    }

    return 0;
}