/*Write a C++ program to read elements in a matrix and c++hec++k whether the matrix is a lower 
triangular matrix or not. C++ program to find whether the matrix is lower triangular or not.
 Logic++ to find lower triangular matrix in C++ programming.*/

 #include <iostream>
 using namespace std;
  
 int main(){
 int rows = 3;
    int cols = 3;
    int arr[rows][cols];

    //  matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    // lower triangular or not
     for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
         (i < j && arr[i][j] != 0) ? "lower triangular" : "is not triangular";
        }
    }

    
 return 0;
 }