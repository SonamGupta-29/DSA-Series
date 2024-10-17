// Program to subtract two matrices in C++
#include <iostream>
using namespace std;
 
int main(){

     int rows = 3;
    int cols = 3;
    int matrix1[rows][cols], matrix2[rows][cols], subMatrix[rows][cols];

    // first matrix
    cout << "enter element of first matrix ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    // second matrix
    cout << "enter element of second matrix ";
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
            subMatrix[i][j] = matrix1[i][j] - matrix2[i][j];
            cout << subMatrix[i][j] << " "; // Print each element of the sum matrix
        }
        cout << endl;
    }
    
return 0;
}