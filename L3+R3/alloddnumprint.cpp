// Print all Odd numbers from 1 to n 

#include <iostream>
using namespace std;

int main(){
    int num;

    cout<<"enter the value of number";
    cin>>num;

    
    for(int i=1; i<=num; i++){
    if(i % 2 != 0){
        cout << i <<endl;
    }
    }

    return 0;
}