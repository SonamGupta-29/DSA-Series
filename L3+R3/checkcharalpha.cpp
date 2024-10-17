// - Check whether a chracter is alphabet or digit 

#include <iostream>
using namespace std;

int main(){
    char ch;

    cout<<"enter the chacter";
    cin>>ch;

    if((ch >= 'a' && ch <='z') || (ch >= 'A' && ch <='Z')){
       cout << ch << "is an alphabet" <<endl;
    } else if (ch >= '0' && ch <= '9'){
       cout << ch << "is an digit" <<endl;
    } else{
        cout << ch << "neither a digit nor a alphabet";
    }

    return 0;
}