// Write a program to find LCM of two numbers.

#include <iostream>
using namespace std;

int main(){
    int num1, num2, LCM;
    
    cout<<"enter two number";
    cin>> num1 >> num2;

     // Start from the maximum of the two numbers
    int maxVal = (num1 > num2) ? num1 : num2;

   for (int i = maxVal; ;i++) {
        if (i % num1 == 0 && i % num2 == 0) {
            LCM = i;
            cout<<LCM<<endl;
            break;// Break the loop when LCM is found
        }
    }

    cout<< "LCM of" << num1 << "and" <<num2 <<"is: " << LCM <<endl;

    return 0;
}