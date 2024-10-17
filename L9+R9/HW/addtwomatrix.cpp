/* Write a C++ program to read elements in two matrices and add elements of both matrices.
C++ program for addition of two matrix. Matrix addition program in C++. Logic to add two
 matrix in C++ programming. */

#include <iostream>
using namespace std;

int main()
{

    int rows = 3;
    int cols = 3;
    int matrix1[rows][cols], matrix2[rows][cols], sumMatrix[rows][cols];

    // first matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    // second matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    // sum of first matrix and second matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << sumMatrix[i][j] << " "; // Print each element of the sum matrix
        }
        cout << endl;
    }

    return 0;
}