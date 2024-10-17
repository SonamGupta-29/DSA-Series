//  Program to check whether a number is negative, positive or zero.

#include <iostream>
using namespace std;

int main(){
    int num;

    cout<<"enter a number";
    cin>>num;

// Check if the number is positive, negative, or zero using the conditional operator
    string result = (num>0) ? "positve number" : (num<0) ? "negative number" : "zero";

    cout << "The number is " << result << "." << endl;

    return 0;
}