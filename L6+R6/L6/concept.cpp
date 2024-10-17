#include <bits/stdc++.h>
using namespace std;
 
int main(){

    int a;
    cin>>a;

    int *ptr = &a; //ptr is a pointer of type int
    cout<<ptr<<endl;     // printing the address
    cout<<*ptr<<endl;    // value printing  #dereferencing
    // cout<<sizeof(a)<<endl;
    // cout<<sizeof(ptr)<<endl;
    int **ptrptr = &ptr;
    cout<<ptrptr<<endl; //address 
    cout<<*ptrptr<<endl; // value
    cout<<**ptrptr<<endl;
return 0;
}