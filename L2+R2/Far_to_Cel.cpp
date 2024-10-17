// Enter temperature in Fahrenheit and convert to Celsius
// C = (F - 32) * 5/9

#include <iostream>
using namespace std;

int main(){
    float F,C;

    cout<<"enter the value of Fahrenheit";
    cin>>F;

    C = (F - 32) * 5/9;

    cout<<"temperature is" <<C;
    
    return 0;
}