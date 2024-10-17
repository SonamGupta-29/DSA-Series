#include <iostream>
using namespace std;

int sum_ar(int ar[]){
    cout<<sizeof(ar);
    return 0;
}
 
int main(){
    int ar[10];
    cout<<sizeof(ar)<<endl;
    sum_ar(ar);
    
return 0;
}