//  Find maximum and minimum in a array

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number of elements in the array";
    cin >> n;

    int arr[n];

    // Input the elements of the array
    cout << "enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Initialize max and min to the first element of the array
    int max = arr[0];
    int min = arr[0];

    // Loop through the array to find the maximum and minimum
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;

    return 0;
}