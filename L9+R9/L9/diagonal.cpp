// Find diagonal elements in 2D array

#include <iostream>
using namespace std;

int main()
{

    int rows = 3;
    int cols = 3;
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

    // first diagonal
    for (int i = 0; i < rows; i++)
    {
        cout << arr[i][i] << " ";
    }
    cout << endl;

    //  second diagonal
    for (int i = 0; i < rows; i++)
    {
        int j = 3 - 1 - i; // i+j = n-1
        cout << arr[i][j] << " " << endl;
    }
    cout << endl;

    return 0;
}


