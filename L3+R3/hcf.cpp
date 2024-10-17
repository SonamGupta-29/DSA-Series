// Program to find HCF (GCD) of two numbers.
#include <iostream>
using namespace std;

int main(){
    int num1, num2, hcf;

    cout<<"enter two numbers: ";
    cin>> num1 >> num2;

    int minNum = (num1 < num2) ? num1 : num2;

    for(int i=1; i<=minNum; i++){
        
            cout<<"iteration"<<i<<endl;
        if(num1 % i == 0 && num2 % i ==0){
            hcf = i;
           
           cout<<"update"<<hcf<<endl;
        }
        
    }

    cout << "HCF of" << num1 << "and" <<num2 <<"is: " <<hcf <<endl;

    return 0;
}