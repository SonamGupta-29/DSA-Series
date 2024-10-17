// Program to check whether a number is even or odd.

#include <iostream>
using namespace std;

int main(){
    int num;

    cout<<"enter a number";
    cin>>num;

 // Check if the number is even or odd using conditional operator
    string result = (num%2==0) ? "even" :"odd";

    cout<<"The number is " << result << "." << endl;

    return 0;
}