#include <bits/stdc++.h>
using namespace std;

// pass by pointer
 int func (int *a, int *b){ // another name of X & y
     (*a)++;
     return (*a) + (*b);
} 

int main(){
    int x = 9, y = 18;
    cout<<func(&x,&y)<<endl;
    cout<<x;

return 0;
}