#include <iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    
    if(n <= 1){
        cout<<"is not a prime number";
        return 0;
    }

    int isprime = true;
    for(int i=2; i<n; i++){
        if(n%i == 0){
            isprime = false;
            break;
        }
    }

    if(isprime){
        cout<<"prime number";
    }else{
        cout<<"not a prime number";
    }

return 0;
}