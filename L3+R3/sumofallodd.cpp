//  Program to find sum of all odd numbers between 1 to n.

#include <iostream>
using namespace std;

int main(){
    int num, sum=0;

    cout<<"enter a number";
    cin>>num;
    
    for(int i=1; i<=num; i++){
          // Check if the current number is even
        if (i % 2 != 0) {
            sum += i;  // Add the even number to the sum
        }
    }

    cout << "Sum of all even numbers between 1 and " << num << " is: " << sum << endl;

    return 0;
}