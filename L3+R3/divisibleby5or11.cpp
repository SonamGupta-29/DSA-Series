//  Program to check whether a number is divisible by 5 and 11 or not.

#include <iostream>
using namespace std;

int main(){
    int num;

    cout<<"enter a number";
    cin>>num;

    // Check if the number is divisible by both 5 and 11 using conditional operator
    string result = (num % 5 == 0 && num % 11 == 0) ? "Divisible by both 5 and 11" : "Not divisible by both 5 and 11";

    // Display the result
    cout << "The number is " << result << "." << endl;

    return 0;
}