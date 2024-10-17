//  Enter P, R, T and calculate simple interest.

#include <iostream>
using namespace std;

int main(){
      float P,R,T,SI;
      
    // Input the values of Principal, Rate, and Time
    cout << "Enter Principal (P): ";
    cin >> P;
    cout << "Enter Rate of Interest (R): ";
    cin >> R;
    cout << "Enter Time (T): ";
    cin >> T;

   SI = (P*R*T)/100;

   cout<<SI;

   return 0;

}