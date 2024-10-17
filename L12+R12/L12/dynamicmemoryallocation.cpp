#include <iostream>
using namespace std;
 
int main(){
    int *ptr = new int;
    *ptr = 10;
    int *ptr2 = ptr;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    delete ptr;
    cout<<*ptr<<endl;


    int *ar = new int[10];
    ar[0] = 4;
    ar[3] = 3;
    ar[4] = 5;
    ptr2 = &ar[3];
    delete [] ar;

    cout<<ar[3]<<endl;
    cout<<*ptr2<<endl;

    // delete operator not overrided it just do others override

return 0;
}