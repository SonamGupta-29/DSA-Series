// wap to input2 number a and b print max of a and b

#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter number of a";
    cin>>a;

    cout<<"enter number of b";
    cin>>b;

    if(a>b){
        cout<<a<<"is the larger number";
    }
    else if(b>a){
        cout<<b<<"is the larger number";
    }
    else{
        cout<<"both number are equal";
    }

    return 0;
}